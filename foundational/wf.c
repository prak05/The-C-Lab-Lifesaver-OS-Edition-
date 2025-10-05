#include <stdio.h>
#define MAX 25
int i,j,nf,nb;
void worstfit(int b[],int f[],int allocated[]) { 
for(i=1;i<=nf;i++) { 
int highest=-1,index=-1;
for(j=1;j<=nb;j++) { 
if(!allocated[j]&&b[j]>=f[i]&&b[j]>highest) { 
highest=b[j];
index=j;
} 
} 
if(index!=-1) { 
printf("\nFile Size %d is put in partition %d",f[i],index);
b[index]-=f[i];
allocated[index]=1;
} 
else printf("\nFile Size %d must wait",f[i]); 
} 
} 
int main() { 
int b[MAX],f[MAX],allocated[MAX]={0};
printf("\nMemory Management Scheme - Worst Fit");
printf("\nEnter the number of blocks: ");
scanf("%d",&nb);
printf("Enter the number of files: ");
scanf("%d",&nf);
printf("\nEnter the size of the blocks:\n");
for(i=1;i<=nb;i++) { 
printf("Block %d: ",i);
scanf("%d",&b[i]);
} 
printf("Enter the size of the files:\n");
for(i=1;i<=nf;i++) { 
printf("File %d: ",i);
scanf("%d",&f[i]);
} 
worstfit(b,f,allocated);
return 0;
}

