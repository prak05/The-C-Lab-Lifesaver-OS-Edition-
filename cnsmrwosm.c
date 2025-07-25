#include <stdio.h>
#include <stdlib.h>

void main() {
int buffer[10], bfs = 10, in = 0, out = 0;
int choice, counter = 0, item;
do {
printf("1 Producer \n2 Consumer \n3 Exit");
printf("\nEnter choice (1, 2, 3): ");
scanf("%d", &choice);
switch (choice) {
case 1:
if (counter == bfs)
printf("Buffer is Full\n");
else {
printf("Enter production value: ");
scanf("%d", &item);
printf("Item produced is %d\n", item);
buffer[in] = item;
in = (in + 1) % bfs;
counter++;
}
break;
case 2:
if (counter == 0)
printf("Buffer is Empty\n");
else {
item = buffer[out];
printf("Item consumed is %d\n", item);
out = (out + 1) % bfs;
counter--;
}
break;
case 3:
exit(0);
break;
default:
printf("Invalid choice\n");
}
} while (choice != 3);
}
