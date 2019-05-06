#include<iostream.h>
#include<conio.h>

int main()
{
	char Nama[30],Kode;
   int Pil,Harga,JumBel,Discount,ToBel,Bayar,ToBar,Kembalian;
   cout<<"========Selamat Datang Di Mebel Bintang Timur=========";
   cout<<endl;
   cout<<"Masukan Nama Anda  : ";cin>>Nama;
   cout<<"Nama Barang yang ada di mebel kami :\n";
   cout<<"A.Kursi \n";
   cout<<"B.Meja \n";
   cout<<"C.Lemri\n";
   cout<<"Pilih Barang yang akan dibeli (A-C) : ";cin>>Kode;
   cout<<"Masukan Jumlah Barang yang akan di beli : ";cin>>JumBel;
   switch(Kode)
{
	case 'A':
   	Harga=1000000;
      cout<<"Kursi \n";
      cout<<"Harga Satuan : Rp. "<<Harga<<endl;
      break;
   case 'B':
   	Harga=2000000;
      cout<<"Meja\n";
      cout<<"Harga Satuan : Rp. "<<Harga<<endl;
      break;
   case 'C':
   	Harga=25000000;
      cout<<"Lemari \n";
      cout<<"Harga Satuan : Rp. "<<Harga<<endl;
      break;

   Default:
   	cout<<"Keluar"<<endl;
      cout<<"Kode Barang Yang Anda Masukan Salah"<<Kode<<endl;
      Harga = 0*JumBel;
      break;
}
		ToBel = JumBel*Harga;
      cout<<"Kode Barang Yang Akan Dibeli "<<Kode<<endl;
      cout<<"Total Pembelian Adalah : Rp.  "<<ToBel<<endl;
      if
      	(ToBel >=1000000)
         {Discount = ToBel * 20/100;}
      else
      	{Discount = 0;}
         cout<<"Discount = Rp. "<<Discount<<endl;
         ToBar = ToBel-Discount;
         cout<<"Total Yang Harus Dibayar : Rp.  "<<ToBar<<endl;
         cout<<"Masukan Uang Pembayaran : "; cin>>Bayar;
         Kembalian = Bayar - ToBar;
         cout<<"Kembalian  : Rp."<<Kembalian<<endl;
         cout<<endl;
         cout<<"======Terima Kasih Atas Kunjungan Anda======"<<endl;
getch();
}
