#include <stdio.h>
 #include<string.h>
 struct atm{
 char s[10];
 int n;
 };

int main() {
 int pin , m , cash,yes = 0,fai_log = 0,fail_with = 0;
 struct atm d[10];
 scanf("%d",&pin);
 scanf("%d",&cash);
 scanf("%d",&m);

 for(int i=0;i<m;i++){
 scanf("%s %d",d[i].s,&d[i].n);
 if((strcmp(d[i].s,"login")==0)&&(d[i].n == 1234))
 {
 yes = 1;
 }
 else if((strcmp(d[i].s,"login")==0)&&(d[i].n != 1234))
 {
 fai_log++;
 }
 if(yes == 1)
 {
 if((strcmp(d[i].s,"wd")==0) && d[i].n <= cash)
 {
 cash -= d[i].n;
 }
 else if((strcmp(d[i].s,"wd")==0) && d[i].n > cash)
 {
 fail_with++;
 }
 else if(strcmp(d[i].s,"dp")==0)
 {
 cash += d[i].n;
 }
 else if((strcmp(d[i].s,"logout")==0))
 {
 yes = 0;
 }
 }

 }
 printf("%d %d %d ",cash , fai_log,fail_with);
 return 0;
 }
