#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#define MAX_LINES 100
#define MAX_LENGTH 100

int main() {
    int fd;                              // File descriptor
    char **keys;                         // Array of strings for keys
    char **values;                       // Array of strings for values
    char temp[MAX_LENGTH];               // Temporary buffer to hold a line
    int tempIndex = 0, lineIndex = 0, isKey = 1;

    // Allocate memory for keys and values
    keys = (char **)malloc(MAX_LINES * sizeof(char *));
    values = (char **)malloc(MAX_LINES * sizeof(char *));
    if (!keys || !values) {
        write(1, "Memory allocation failed\n", 25);
        return 1;
    }

    // Open the file
    fd = open("numbers.dict", O_RDONLY);
    if (fd == -1) {
        write(1, "Error opening file\n", 19);
        free(keys);
        free(values);
        return 1;
    }

    // Read the file character by character
    char ch;
    while (read(fd, &ch, 1) == 1) {
        if (ch == ':') {
            temp[tempIndex] = '\0';       // End the key string
            keys[lineIndex] = (char *)malloc((tempIndex + 1) * sizeof(char));
            if (!keys[lineIndex]) {
                write(1, "Memory allocation failed\n", 25);
                close(fd);
                return 1;
            }
            // Copy the key into the keys array
            int i = 0;
            while (temp[i] != '\0') {
                keys[lineIndex][i] = temp[i];
                i++;
            }
            keys[lineIndex][i] = '\0';
            tempIndex = 0;               // Reset temp index for value
            isKey = 0;                   // Switch to value
        } else if (ch == '\n') {
            temp[tempIndex] = '\0';       // End the value string
            values[lineIndex] = (char *)malloc((tempIndex + 1) * sizeof(char));
            if (!values[lineIndex]) {
                write(1, "Memory allocation failed\n", 25);
                close(fd);
                return 1;
            }
            // Copy the value into the values array
            int i = 0;
            while (temp[i] != '\0') {
                values[lineIndex][i] = temp[i];
                i++;
            }
            values[lineIndex][i] = '\0';

            tempIndex = 0;               // Reset temp index for the next key-value pair
            isKey = 1;                   // Switch back to key
            lineIndex++;                 // Increment line index
        } else {
            // Add character to temp buffer
            temp[tempIndex++] = ch;
        }
    }

    // Close the file
    close(fd);

    // Free allocated memory (cleanup)
    int cleanupIndex = 0;
    while (cleanupIndex < lineIndex) {
        free(keys[cleanupIndex]);
        free(values[cleanupIndex]);
        cleanupIndex++;
    }
    free(keys);
    free(values);

    return 0;
}

