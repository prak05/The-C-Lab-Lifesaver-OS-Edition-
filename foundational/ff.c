#include <stdio.h>
#define MAX 25
int i,j,nf,nb;
void firstfit(int b[],int f[],int allocated[]) { 
for(i=1;i<=nf;i++) { 
int index=-1;
for(j=1;j<=nb;j++) { 
if(!allocated[j]&&b[j]>=f[i]) { 
index=j;
break;
} 
} 
if(index!=-1) { 
printf("\nFile %d of size %d allocated to Block %d of size %d",i,f[i],index,b[index]);
b[index]-=f[i];
allocated[index]=1;
} 
else printf("\nFile %d of size %d must wait",i,f[i]); 
} 
} 
int main() { 
int b[MAX],f[MAX],allocated[MAX]={0};
printf("\nMemory Management - First Fit");
printf("\nEnter number of blocks: ");
scanf("%d",&nb);
printf("Enter size of each block:\n");
for(i=1;i<=nb;i++) { 
printf("Block %d: ",i);
scanf("%d",&b[i]);
} 
printf("Enter number of files: ");
scanf("%d",&nf);
printf("Enter size of each file:\n");
for(i=1;i<=nf;i++) { 
printf("File %d: ",i);
scanf("%d",&f[i]);
} 
firstfit(b,f,allocated);
return 0;
}

