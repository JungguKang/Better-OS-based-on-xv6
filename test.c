#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char * argv[])
{
    int pid = getpid();
    int ppid = getppid();

    printf(1,"my pid is %d, ppid is %d", pid, ppid);
    exit();
}