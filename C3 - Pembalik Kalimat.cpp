#include <iostream>
using namespace std;
int main(){
  char huruf[1000], hasil[1000];
  int i, jumlahstring, jumlah = 0;
  printf("Tatsbita Thifalia\n");
  printf("20051397027\n");
  printf("\n");
  printf("Masukkan Kalimat: ");
  fgets(huruf, sizeof(huruf), stdin);
  while (huruf[jumlah] != '\0'){
    jumlah++;
  }
  jumlahstring = jumlah - 1;
  for (i = 0; i < jumlah; i++){
    hasil[i] = huruf[jumlahstring];
    jumlahstring--;
  }
  hasil[i] = '\0';
  printf("\n Hasil setelah dibalik: %s \n", hasil);
  return 0;
}
