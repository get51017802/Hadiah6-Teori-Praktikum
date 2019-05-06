#include<iostream.h>
#include<conio.h>

void main()
{
char lokasi,processor;
int kapasitas;

cout<<"=============Selamat Datang Di Toko Fajar Timur==================\n";
cout<<"Masukan Nama Kode Produk   : "; cin>>lokasi>>processor>>kapasitas;
cout<<"Spesifikasi Komputer :\n";
cout<<endl;
switch(lokasi)
{
	case'A':cout<<"Buatan : Amerika\n";
   break;
   case'J':cout<<"Buatan : Jepang\n";
   break;
   case'C':cout<<"Buatan : China\n";
   break;
   case'G':cout<<"Buatan : German\n";
   break;
   case'T':cout<<"Buatan : Taiwan\n";
   break;
   default :cout<<"Kode Produk yang Anda Masukan Salah ";
   }
   switch(processor)
   {
   case'3' :cout<<"Processor : Intel 386 MHZ\n";
   break;
   case'4' :cout<<"Processor : Intel 486 MHZ\n";
   break;
   case'5' :cout<<"Processor : Intel Pentium\n";
   break;
   default :cout<<"Kode Produk Processor yang Anda Masukan Salah ";
   }
   cout<<"Harddisk  :" <<kapasitas<<"GigaByte \n";

   cout<<endl;

   cout<<"======Terima Kasih Atas Kunjungan Anda======"<<endl;
getch();
 }
