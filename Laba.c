#include <stdio.h>
#define MAX 10
float array[MAX];
int count;
float fn0(float num_array[], int max0);
float fn1(float *ptr, int max1);
int main( void )
{
    for (count = 0; count < 3; count++)
    {
        printf("Enter an integer value: ");
        scanf("%f", &array[count]);//вводим цифры массива
    }
    for (count = 3; count < MAX; count++)//останавливаемся на 3
    {
        array[count] = (float)(rand() % 100000)/(rand() % 10000);//остальные являются результатом деления двух случайных
    }
    puts("Show Array: \n");
    for (count = 0; count < MAX; count++)
    {
        printf("%d %f\n", count, array[count]);//вывод массива
    }
    printf("fn0 = %d\n", fn0(array, MAX));//вывод float fn0
    printf("fn1 = %d\n", fn1(array, MAX));//вывод float fn1
    //в изначальном варианте кода оба fn выдают ноль, но если поменять значения ниже будут выдавать что-то другое
    return 0;
}
/************************************/
float fn0(float num_array[], int max0)//расписываем fn0
{
    int cnt;
    float biggest;
    biggest=num_array[0];
    for ( cnt = 0; cnt < max0; cnt++)//цикл
    {
        if (num_array[cnt] > biggest)
        {
            biggest = num_array[cnt];
        }
    }
return biggest;
}
/******************************/
float fn1(float *ptr, int max1)//расписываем fn0
{
    int cnt;
    float biggest;
    biggest = *ptr++;
    for (cnt = 1; cnt<max1; cnt++)//цикл
    {
        if (*ptr > biggest)
        {
            biggest = *ptr;
        }
        ptr++;
    }
return biggest;
}
