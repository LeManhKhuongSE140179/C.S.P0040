#include<stdio.h>
#include<math.h>
#include <stdlib.h>
#define MAX 100

float NhapA()
{
    int result = 0;
    char string[MAX];
    char* buffer;
    do
    {
        printf("Nhap he so bac 2, a = : ");
        scanf("%s", &string);
        result = (float)strtof(string, &buffer);
        if (*buffer != '\0')
            printf("Nhap sai. Moi nhap lai \n");
    } while (*buffer != '\0');
    return result;
}

float NhapB()
{
    int result = 0;
    char string[MAX];
    char* buffer;
    do
    {
        printf("Nhap he so bac 1, b = ");
        scanf("%s", &string);
        result = (float)strtof(string, &buffer);
        if (*buffer != '\0')
            printf("Nhap sai. Moi nhap lai \n");
    } while (*buffer != '\0');
    return result;
}
float NhapC()
{
    int result = 0;
    char string[MAX];
    char* buffer;
    do
    {
        printf("Nhap so hang tu do, c = ");
        scanf("%s", &string);
        result = (float)strtof(string, &buffer);
        if (*buffer != '\0')
            printf("Nhap sai. Moi nhap lai \n");
    } while (*buffer != '\0');
    return result;
}

long long tien()
{
    int result = 0;
    char string[MAX];
    char* buffer;
    do
    {
        printf("Nhap so tien gui: ");
        scanf("%s", &string);
        result = (int)strtol(string, &buffer, 10);
        if (*buffer != '\0' || result<=0)
            printf("Nhap sai. Moi nhap lai \n");
    } while (*buffer != '\0' || result<=0);
    return result;
}

float laiXuat()
{
    float result = 0;
    char string[MAX];
    char* buffer;
    do
    {
        printf("Nhap so lai xuat gui: ");
        scanf("%s", &string);
        result = (float)strtof(string, &buffer);
        if (*buffer != '\0' || result<=0 || result > 0.11)
            printf("Nhap sai. Moi nhap lai \n");
    } while (*buffer != '\0' || result<=0 || result > 0.11);
    return result;
}

int months()
{
    int result = 0;
    char string[MAX];
    char* buffer;
    do
    {
        printf("Nhap so thang gui: ");
        scanf("%s", &string);
        result = (int)strtol(string, &buffer, 10);
        if (*buffer != '\0' || result<=0 || result >= 13)
            printf("Nhap sai. Moi nhap lai \n");
    } while (*buffer != '\0' || result<=0 || result >= 13);
    return result;
}

int num()
{
    int result = 0;
    char string[MAX];
    char* buffer;
    do
    {
        printf("\n Choise an option: ");
        scanf("%s", &string);
        result = (int)strtol(string, &buffer, 10);
        if (*buffer != '\0' || result<=0 || result >3)
            printf("Nhap sai. Moi nhap lai \n");
    } while (*buffer != '\0' || result<=0 || result >3);
    return result;
}

void quadratic(float a, float b, float c)
{
    // tinh nghiem
   if (a == 0) 
   {
        if (b == 0) 
        {
            printf("Phuong trinh vo nghiem!");
        } else 
        {
            printf("Phuong trinh co mot nghiem: x = %f", (-c / b));
        }
        return;
    }
   float x1, x2;
    float delta = b*b - 4*a*c;
    if (delta > 0) {
        x1 = (float) ((-b + sqrt(delta)) / (2*a));
        x2 = (float) ((-b - sqrt(delta)) / (2*a));
        printf("Phuong trinh co 2 nghiem la\n: x1 = %f va x2 = %f", x1, x2);
    } else if (delta == 0) {
       x1 = (-b / (2 * a));
        printf("Phong trinh co nghiem kep\n: x1 = x2 = %f", x1);
    } else {
        printf("Phuong trinh vo nghiem!\n");
    }
}

long double bank(long double tienGui, float lai, int thoiHan)
{
	long double totalAmount = (tienGui * lai * thoiHan);
	return totalAmount;
}
int main() {
 	float a, b, c;
 	int number;
 	long double tienGui;
        float lai;
 	int thoiHan;
 	do
 	{
            printf("\n 1-Quadratic equation");
            printf("\n 2-Bank deposit problem");
            printf("\n 3-Quit");
            number = num();
            switch(number)
            {
                case 1:
                    a=NhapA();
                    b=NhapB();
                    c=NhapC();
                    quadratic(a, b, c);	
                break;
                case 2:
                    tienGui=tien();
                    lai=laiXuat();
                    thoiHan=months();
                    printf("Tien lai la: %.1Lf\n", bank(tienGui, lai, thoiHan));	
                break;
                case 3:
                break;	
		}
	}while(number<3);
    return 0;
}