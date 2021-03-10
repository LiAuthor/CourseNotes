#include <stdio.h>
#include <math.h>
int main()
{float p,r,n;
 r=0.1;
 n=10;
 p=pow(1+r,n);            
 printf("p=%f\n",p);
 return 0;
}

#include <stdio.h>
#include <math.h>
int main()
{
float r5,r3,r2,r1,r0,p,p1,p2,p3,p4,p5;
 p=1000;
 r5=0.0585;
 r3=0.054;
 r2=0.0468;
 r1=0.0414;
 r0=0.0072;

 p1=p*((1+r5)*5);            // 一次存5年期  
 p2=p*(1+2*r2)*(1+3*r3);     // 先存2年期，到期后将本息再存3年期  
 p3=p*(1+3*r3)*(1+2*r2);     // 先存3年期，到期后将本息再存2年期  
 p4=p*pow(1+r1,5);           // 存1年期，到期后将本息存再存1年期，连续存5次  
 p5=p*pow(1+r0/4,4*5);       // 存活期存款。活期利息每一季度结算一次  
 printf("p1=%f\n",p1);       // 输出按第1方案得到的本息和  
 printf("p2=%f\n",p2);       // 输出按第2方案得到的本息和  
 printf("p3=%f\n",p3);       // 输出按第3方案得到的本息和  
 printf("p4=%f\n",p4);       // 输出按第4方案得到的本息和  
 printf("p5=%f\n",p5);       // 输出按第5方案得到的本息和  
 return 0;
}

