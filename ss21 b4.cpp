#include<stdio.h>
int main() {
    FILE *fptr;
    char write[100];
    fptr = fopen("bt01.txt", "r");

    fgets(write, sizeof(write), fptr);
    printf("Dong dau tien la: %s\n", write);
    fclose(fptr);
    return 0;
}

