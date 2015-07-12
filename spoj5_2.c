#include<stdio.h>
#define c w[i][j]
main(){int t[20],i,j;char **w;
for(i=0;i<10;i++){scanf("%s",w[i]);t[i]=1;while(c!=0){if(c==84||c==68||c==70||c==76)t[i]*=2;}
for(i=0;i<10;i++)printf("\n%d",t[i]);
return 0;}}
