clear;
close all;
srconv3x_down
srconv44_48
fc=1000;
fs=22050;
T=1/fs;
checkdisto=0;
totalDelay = delay_37_34 + delay_3x;
maxDelayFast = totalDelay;
if (checkdisto==0)
    N = 2048;
else
    N = 22050;
end
NRES = floor(N*37/(34*3));
		

for i=1:N
	input(i) = 0;
end

PI = atan(1) * 4;
rand('seed',0);

if (checkdisto==0)
    for i=1:N
		input(i) = (rand(1) - 0.5);
    end
else
    for i=1:N
		input(i) = sin(2*pi*fc*T*(i-1))/2;
    end    
end



res = upfirdn(input,deci1_34_37,37,34);
res = res * 2^(shift_37_34);
res = res * mult_37_34;
figure
epsilon=1e-10;
fftsiz=512;
i=1:fftsiz;
freq=(i-1)*fs*(37/34)/fftsiz;
spect=(4/fftsiz)*fft(res(floor(N*37/34)-fftsiz+1:floor(N*37/34)).*chebwin(fftsiz,160)',fftsiz);
spectdb=20*log10(abs(spect)+epsilon);
plot(freq,spectdb);
grid on;
zoom on;
axis([0 (fs*37/(34*2)) -180 0]);
title('Spectrum of 37/34 output signal');




res1 = upfirdn(res,deci1_3x,1,3);
res1 = res1 * 2^(shift_3x);
res1 = res1 * mult_3x;
figure;
i=1:fftsiz;
freq=(i-1)*fs*(37/(34*3))/fftsiz;
spect=(4/fftsiz)*fft(res1(NRES-fftsiz+1:NRES).*chebwin(fftsiz,160)',fftsiz);
spectdb=20*log10(abs(spect)+epsilon);
plot(freq,spectdb);
grid on;
zoom on;
axis([0 fs*(37/(34*3*2)) -180 0]);
title('Spectrum of final output signal');




if (checkdisto>0)
	fil1=fopen('simout.txt','wt');
	fprintf(fil1,'%f\n',res1);
	fclose('all');
end
%Write the corresponding test file
fid = fopen('testval_hamaca22_8_fasta.c','w');
fprintf(fid, '#ifndef __flexcc2__\n');
%---------------
fprintf(fid, '#define N_IN   %d \n ',N);
fprintf(fid, '#define N_OUT  %d \n ',NRES);
fprintf(fid,'Float in22_8[%d] = {\n',N);
for k = 1:N-1
     fprintf(fid,'\tFORMAT_FLOAT(%.15f,MAXVAL),  \t\t// %d\n',input(k),k-1);
end
k = N;
fprintf(fid,'\tFORMAT_FLOAT(%.15f,MAXVAL) }; \t\t// %d\n',input(k),k-1);
		
fprintf(fid,'const YMEM Float out22_8[%d] = {\n',NRES);
for k = 1:NRES-1
     fprintf(fid,'\tFORMAT_FLOAT(%.15f,MAXVAL),  \t\t// %d\n',res1(k),k-1);
end
k = NRES;
fprintf(fid,'\tFORMAT_FLOAT(%.15f,MAXVAL) }; \t\t// %d\n',res1(k),k-1);
%-----------------		
N=floor(2*N/16);
NRES=floor(2*NRES/16);
fprintf(fid, '#else\n');
%---------------
fprintf(fid, '#define N_IN   %d \n ',N);
fprintf(fid, '#define N_OUT  %d \n ',NRES);
fprintf(fid,'Float in22_8[%d] = {\n',N);
for k = 1:N-1
     fprintf(fid,'\tFORMAT_FLOAT(%.15f,MAXVAL),  \t\t// %d\n',input(k),k-1);
end
k = N;
fprintf(fid,'\tFORMAT_FLOAT(%.15f,MAXVAL) }; \t\t// %d\n',input(k),k-1);
		
fprintf(fid,'const YMEM Float out22_8[%d] = {\n',NRES);
for k = 1:NRES-1
     fprintf(fid,'\tFORMAT_FLOAT(%.15f,MAXVAL),  \t\t// %d\n',res1(k),k-1);
end
k = NRES;
fprintf(fid,'\tFORMAT_FLOAT(%.15f,MAXVAL) }; \t\t// %d\n',res1(k),k-1);
%-----------------		
fprintf(fid, '#endif\n');
fclose('all');



