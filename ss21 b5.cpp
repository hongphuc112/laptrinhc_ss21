#include <stdio.h>
int main() {
    FILE *fptr;
    int n;
    char myString[100];
    fptr = fopen("bt05.txt", "w");
    
    printf("Nhap so dong: ");
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++) {
        printf("Nhap noi dung dong thu %d: ", i + 1);
        fgets(myString, sizeof(myString), stdin);
        fprintf(fptr, "%s", myString);
    }
    fclose(fptr);
    fptr = fopen("bt05.txt", "r");
    if (fptr == NULL) {
        printf("Khong the mo file\n");
        return 1;
    }
    printf("\nNoi dung trong file bt05.txt:\n");
    while (fgets(myString, sizeof(myString), fptr) != NULL) {
        printf("%s", myString);
    }
    fclose(fptr);
    return 0;
}

