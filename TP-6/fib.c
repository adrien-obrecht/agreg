#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

int main() {
    int server_fd, client_fd;
    struct sockaddr_in addr;
    char buffer[64];

    server_fd = socket(AF_INET, SOCK_STREAM, 0);

    addr.sin_family = AF_INET;
    addr.sin_addr.s_addr = INADDR_ANY;
    addr.sin_port = htons(5000);

    bind(server_fd, (struct sockaddr*)&addr, sizeof(addr));
    listen(server_fd, 5);

    printf("Fib server listening on port 5000...\n");

    while (1) {
        client_fd = accept(server_fd, NULL, NULL);
        
        // ssize_t read(int __fd, void *__buf, size_t __nbytes)
        // Read NBYTES into BUF from FD. Return the
        // number read, -1 for errors or 0 for EOF.

        // ssize_t write(int __fd, const void *__buf, size_t __n)
        // Write N bytes of BUF to FD. Return the number written, or -1.

        close(client_fd);
    }

    return 0;
}
