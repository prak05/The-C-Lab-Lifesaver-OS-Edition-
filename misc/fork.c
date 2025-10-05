#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
int pid, pid1, pid2;
pid = fork();
pid = fork();
if (pid == -1) {
printf("Error in process");
exit(-1);
}
if (pid != 0) {
pid1 = getpid();
printf("Parent ID %d", pid1);
}
else {
pid2 = getpid();
printf("Child process ID %d", pid2);
}
}
