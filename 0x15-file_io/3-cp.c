#include "main.h"

/**
 * main - copies the content of a file to another file
 * @ac: argument count
 * @av: arguments
 * Return: 1 on success, -1 on failure
 */

int copy_file_contents(const char *file_from, const char *file_to);

int main(int argc, char *argv[]) {
    if (argc != 3) {
        dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
        return -1;
    }

    const char *file_from = argv[1];
    const char *file_to = argv[2];

    int result = copy_file_contents(file_from, file_to);
    return result;
}

int copy_file_contents(const char *file_from, const char *file_to) {
    int fd_from = open(file_from, O_RDONLY);
    if (fd_from == -1) {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
        return -1;
    }

    int fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_to == -1) {
        close(fd_from);
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
        return -1;
    }

    char buffer[1024];
    ssize_t bytes_read;
    ssize_t bytes_written;

    do {
        bytes_read = read(fd_from, buffer, sizeof(buffer));
        if (bytes_read == -1) {
            close(fd_from);
            close(fd_to);
            dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
            return -1;
        }
        bytes_written = write(fd_to, buffer, bytes_read);
        if (bytes_written == -1 || bytes_written != bytes_read) {
            close(fd_from);
            close(fd_to);
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
            return -1;
        }
    } while (bytes_read > 0);

    if (close(fd_from) == -1) {
        close(fd_to);
        dprintf(STDERR_FILENO, "Can't close fd %s\n", file_from);
        return -1;
    }
    if (close(fd_to) == -1) {
        dprintf(STDERR_FILENO, "Can't close fd %s\n", file_to);
        return -1;
    }

    return 0;
}
