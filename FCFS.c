#include<stdio.h>
void main() {
int i=0,j=0,b[20],g[20],p[20],w[20],t[20],a[20],n;
float avgw=0,avgt=0;
printf("Enter Number of Process:");
scanf("%d",&n);
for(i=0;i<n;i++) {
printf("Process ID:");
scanf("%d",&p[i]);
printf("Arrival Time:");
scanf("%d",&a[i]);
printf("Burst Time:");
scanf("%d",&b[i]);
}
int temp,d;
for(i=0;i<n-1;i++) {
for(j=0;j<n-i-1;j++) {
if(a[j]>a[j+1]) {
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
temp=b[j];
b[j]=b[j+1];
b[j+1]=temp;
temp=p[j];
p[j]=p[j+1];
p[j+1]=temp;
}
}
}
g[0]=b[0];
for(i=1;i<n;i++) {
if(g[i-1]<a[i]) {
d=a[i]-g[i-1];
g[i]=g[i-1]+b[i]+d;
} else {
g[i]=g[i-1]+b[i];
}
}
for(i=0;i<n;i++) {
t[i]=g[i]-a[i];
w[i]=t[i]-b[i];
avgw=avgw+w[i];
avgt=avgt+t[i];
}
avgw=avgw/n;
avgt=avgt/n;
    
    printf("\n-----------------------------------------------------------\n");
    printf("| Pid | Arrival T | Burst T | Completion T | Waiting T | TAT |\n");
    printf("-----------------------------------------------------------\n");
    
    for (i = 0; i < n; i++) {
        printf("| %3d | %9d | %7d | %12d | %9d | %3d |\n", p[i], a[i], b[i], g[i], w[i], t[i]);
    }
    
    printf("-----------------------------------------------------------\n");
    printf("Average Waiting Time: %.2f\n", avgw);
    printf("Average Turnaround Time: %.2f\n", avgt);
    }
