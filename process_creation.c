int main() {
    pid_t procid = fork();
    if (procid == 0) {
        printf("This is the child process. PID: %d\n", getprocid());
    } else if (procid > 0) {
        printf("This is the parent process. PID: %d\n", getprocid());
    } else {
        printf(" failed");
    }
    return 0;#include <stdio.h>
#include <unistd.h>


}
