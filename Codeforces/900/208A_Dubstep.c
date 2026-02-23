#include <stdio.h>
#include <string.h>

int main() {
    char str[500];
    fgets(str, sizeof(str), stdin);

    char temp[] = "WUB";
    char result[500];

    int i = 0, j = 0;
    int len = strlen(temp);

    while (str[i] != '\0') {
        if (strncmp(&str[i], temp, len) == 0) {

            // skip all consecutive "WUB"
            while (strncmp(&str[i], temp, len) == 0) {
                i += len;
            }

            // add single space if needed
            if (j > 0 && result[j - 1] != ' ') {
                result[j++] = ' ';
            }

        } else {
            result[j++] = str[i++];
        }
    }

    result[j] = '\0';
    printf("%s\n", result);

    return 0;
}
