#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main() {
    printf("going to look at your hosts kernel commandline:\n");

    int fd = open("/proc/cmdline", O_RDONLY);
    char buf[1024];
    int buflen;
    while((buflen = read(fd, buf, 1024)) > 0)
    {
        write(2, buf, buflen);
    }
    buf[0] = '\n';
    write(2, buf, 1);

    close(fd);
    return 0;
}
