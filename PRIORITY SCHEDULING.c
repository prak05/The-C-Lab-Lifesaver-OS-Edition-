#include<stdio.h>
int main() {
int bt[20], p[20], wt[20], tat[20], pr[20];
int i, j, n, pos, temp;
float avg_wt = 0, avg_tat = 0;
printf("Enter Total Number of Processes: ");
scanf("%d", &n);
printf("\nEnter Burst Time and Priority\n");
for (i = 0; i < n; i++) {
printf("\nP[%d]\n", i + 1);
printf("Burst Time: ");
scanf("%d", &bt[i]);
printf("Priority: ");
scanf("%d", &pr[i]);
p[i] = i + 1;}
for (i = 0; i < n - 1; i++) {
pos = i;
for (j = i + 1; j < n; j++) {
if (pr[j] < pr[pos]) {
pos = j;}}
temp = pr[i];
pr[i] = pr[pos];
pr[pos] = temp;
temp = bt[i];
bt[i] = bt[pos];
bt[pos] = temp;
temp = p[i];
p[i] = p[pos];
p[pos] = temp;}
wt[0] = 0;
for (i = 1; i < n; i++) {
wt[i] = 0;
for (j = 0; j < i; j++) {
wt[i] += bt[j];}
avg_wt += wt[i];}
for (i = 0; i < n; i++) {
tat[i] = bt[i] + wt[i];
avg_tat += tat[i];
}
avg_wt /= n;
avg_tat /= n;
printf("\nProcess\tPriority\tBurst Time\tWaiting Time\tTurnaround Time\n");
for (i = 0; i < n; i++) {
printf("P[%d]\t\t%d\t\t%d\t\t%d\t\t%d\n", p[i], pr[i], bt[i], wt[i], tat[i]);
}
printf("\nAverage Waiting Time = %.2f\n", avg_wt);
printf("Average Turnaround Time = %.2f\n", avg_tat);
return 0;
}
