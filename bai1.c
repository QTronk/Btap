/*Bài 1: Viết chương trình kết hợp file+phím nhấn
Yêu cầu:
1.	Nhấn phím ‘1’ để xem trong file input.txt có bao nhiêu từ trong file xuất ra màn hình
2.	Nhấn phím ‘2’ để đếm trong file input.txt có bao nhiêu từ dài hơn 5 ký tự và ghi số đếm này ở cuối file.
3.	Nhấn phím ‘3’ để ghi thêm tổng số dòng của file input.txt vào cuối file.
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
void demtu()
{
FILE *pFile;
pFile=fopen("input.txt","r");
if (pFile==NULL) perror("Error open file");
else
{
int n=0;
int c;
do{
c=fgetc(pFile);
n++;
} while(c!= EOF);
printf("%d\n", n-1);
fclose(pFile);
}
}
void demtutren5() {
    FILE *pFile;
    pFile=fopen("input.txt", "r+");
    if (pFile==NULL) perror("Error open file");
    else
    {
    int n=0;
    int count=0;
    char chuoi[100];
    for (int i=0; i != EOF; i++)
    {
        chuoi[i]=fgetc (pFile);
        if(!isalpha(chuoi[i]))
        { 
            i=0;
            size_t len = strlen(chuoi);
            if (len >= 4) count++; 
            memset(chuoi, 0, sizeof(chuoi));
        }
    }
    fseek(pFile, 0, SEEK_END);
    fprintf(pFile, "So tu hon 5 ky tu: %d\n", count);
    fclose(pFile);
 } }
int main() {
    int key;
    while(1)
    {
        key=getchar();
        switch(key) {
        case '1':
        demtu();
        break;
        case '2':
        demtutren5();
        break;
}
}
}
