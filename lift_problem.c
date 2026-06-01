#include <stdio.h>
 #include<string.h>
 struct lift
 {
 char op[10];
 int flr;
 };

void main() {
 int n , m , cur_flr = 0,invalid = 0,reset_cnt = 0;
 scanf("%d",&n);
 scanf("%d",&m);
 struct lift d[10];

 for(int i=0;i<m;i++)
 {
 scanf("%s %d",d[i].op,&d[i].flr);

 if(strcmp(d[i].op,"up")==0)
 {
 if((d[i].flr <= n) && (cur_flr + d[i].flr <= n))
 {
 cur_flr += d[i].flr;
 }
 else{
 invalid++;
 }
 }

 else if(strcmp(d[i].op,"down")==0)
 {
 if(cur_flr - d[i].flr >= 0)
 {
 cur_flr -= d[i].flr;
 }
 else{
 invalid++;
 }
 }
 else if(strcmp(d[i].op,"reset") == 0)
 {
 cur_flr = 0;
 reset_cnt++;
 }
 }

 printf("%d %d %d",cur_flr,invalid,reset_cnt);
 }
