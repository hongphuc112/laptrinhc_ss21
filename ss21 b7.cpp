#include <stdio.h>
#include<string.h>
struct sinhVien {
    int id;
    char name[100];
    int age;
};
int main() {
    FILE *fptr;
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    getchar();
    struct sinhVien sv[n];
    
    for (int i = 0; i < n; i++) {
        printf("Nhap thong tin sinh vien thu %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &sv[i].id);
        getchar();
        printf("Ten: ");
        fgets(sv[i].name, sizeof(sv[i].name), stdin);
        printf("Tuoi: ");
        scanf("%d", &sv[i].age);
        getchar();
    }
    fptr = fopen("students.txt", "w");
    if (fptr == NULL) {
        printf("Khong the mo file");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        fprintf(fptr, "%d %s %d\n", sv[i].id, sv[i].name, sv[i].age);
    }
    fclose(fptr);
    printf("Thong tin sinh vien da duoc ghi vao file");
    return 0;
}

