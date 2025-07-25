#include <stdio.h>
int main() {
int n,m,i,j,k;
printf("ENTER THE NUMBER OF RESOURCES: ");
scanf("%d",&m);
int total_res[m],avail[m],total_alloc[m];
printf("MAXIMUM RESOURCE COUNT FOR:\n");
for(j=0;j<m;j++) {
printf("RESOURCE %d: ",j);
scanf("%d",&total_res[j]);}
printf("\nENTER THE NUMBER OF PROCESSES: ");
scanf("%d",&n);
int alloc[n][m],max[n][m],need[n][m],finish[n],sequence[n],work[m];
for(i=0;i<n;i++) {
printf("\nMAXIMUM ALLOCATION FOR PROCESS %d: ",i);
for(j=0;j<m;j++) {
scanf("%d",&alloc[i][j]);}
printf("MAXIMUM REQUIREMENT FOR PROCESS %d: ",i);
for(j=0;j<m;j++) {
scanf("%d",&max[i][j]);
need[i][j]=max[i][j]-alloc[i][j];}}
for(j=0;j<m;j++) {
total_alloc[j]=0;
for(i=0;i<n;i++) {
total_alloc[j]+=alloc[i][j];}
avail[j]=total_res[j]-total_alloc[j];
work[j]=avail[j];}
printf("\nMatrix of Total Allocation\n");
for(i=0;i<m;i++) {
printf("%d ",total_alloc[i]);}
printf("\nAVAILABLE MATRIX\n");
for(i=0;i<m;i++) {
printf("%d ",avail[i]);}
printf("\n");
printf("\nPROCESS\tMAXIMUM\tALLOCATED\tNEED\tAVAIL\n");
for(i=0;i<n;i++) {
printf("%d\t",i);
for(j=0;j<m;j++) {
printf("%d ",max[i][j]);}
printf("\t");
for(j=0;j<m;j++) {
printf("%d ",alloc[i][j]);}
printf("\t");
for(j=0;j<m;j++) {
printf("%d ",need[i][j]);}
printf("\t");
for(j=0;j<m;j++) {
printf("%d ",avail[j]);}
printf("\n");}
int count=0;
for(i=0;i<n;i++) finish[i]=0;
while(count<n) {
int found=0;
for(i=0;i<n;i++) {
if(!finish[i]) {
int flag=1;
for(j=0;j<m;j++) {
if(need[i][j]>work[j]) {
flag=0;
break;}}
if(flag) {
for(j=0;j<m;j++) work[j]+=alloc[i][j];
sequence[count++]=i;
finish[i]=1;
found=1;}}}
if(!found) {
printf("\nSystem is Not Safe\n");
return 0;}}
printf("\nSequence of Execution\n");
for(i=0;i<n;i++) {
printf("P%d -> ",sequence[i]);}
printf("\nSystem is Safe\n");
return 0;}

