#include <stdio.h>
#include <math.h>
#define MAX 20
void FCFS(int arr[], int head, int size) {
int seek_count = 0;
int cur_track, prev_track = head, distance;
for (int i = 0; i < size; i++) {
cur_track = arr[i];
distance = fabs(prev_track - cur_track);
seek_count += distance;
prev_track = cur_track;
}
printf("Total number of seek operations: %d\n", seek_count);
printf("Seek Sequence is:\n");
for (int i = 0; i < size; i++)
printf("%d -> ", arr[i]);
printf("\n");
}
int main() {
int arr[MAX], head, n;
printf("Enter the total number of requests: ");
scanf("%d", &n);
printf("Enter the track requests: ");
for (int i = 0; i < n; i++)
scanf("%d", &arr[i]);
printf("Enter the position of read-write head: ");
scanf("%d", &head);
FCFS(arr, head, n);
return 0;
}

