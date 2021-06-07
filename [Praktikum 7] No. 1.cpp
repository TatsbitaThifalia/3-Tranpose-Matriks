#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int Data[MAX];
// Fungsi pertukaran bilangan
void Tukar (int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
// Fungsi pengurutan penyisipan biner
void SelectionSort()
{
int i, j, k;
for(i=0; i<MAX-1;i++){
k = i;
for (j=i+1; j<MAX; j++)
if(Data[k] > Data[j])
k = j;
Tukar(&Data[i], &Data[k]);
}
}
int main()
{
int i;
srand(0);
printf("Tatsbita Thifalia\n");
 printf("20051397027\n");
 printf("MI A 2020\n");
// Membangkitkan bilangan acak
printf("DATA SEBELUM TERURUT");
for(i=0; i<MAX; i++)
{
Data[i] = (int) rand()/1000+1;
printf("\n Data ke %d : %d ", i, Data[i]);
}
SelectionSort();
// Data setelah terurut
printf("\n DATA SETELAH TERURUT");
for(i=0; i<MAX; i++)
{
printf("\n Data ke %d : %d ", i, Data[i]);
}
}
