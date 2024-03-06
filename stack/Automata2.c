#include<stdio.h>
#include<string.h>

int checkCount(char *a) {
    int i, j, len, count = 0;
    len = strlen(a);
    for (int i = 0; i < len; i++) {
        int flag = 1;
        for (j = 0; j < len; j++) {
            if (a[i] == a[j]) {
              flag = 0;
                break;
            }
            else{
             flag = -1;
            }
        }
        if (flag == 1) {
            count++;
        }
    }
    return count;
}

int main() {
    char str[9]; // Make sure to allocate enough space for the string and null terminator

    strcpy(str, "56789578");
    printf("%d", checkCount(str));

    return 0;
}
