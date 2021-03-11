#include <iostream>						
#include <string>

using namespace std;					   

struct misi {								      // membuat struct misi
	string nama;
	string tingkat_kesulitan;
};

struct wisata {						    		// struct rincian tempat wisata
	string judul;						    	
	string jenis;						    	
	int tiket;							    	  // menggunakan
	string waktu;   
	// struct misi    
	misi ke_1;							    		//  misi
	misi ke_2;
	misi ke_3;
	misi ke_4;
	misi ke_5;
	misi ke_6;
	misi ke_7;
	
	
};

int main() {										                	// menu utama

	misi misi1, misi2, misi3, misi4,			      		// entitas berkumpul
		 misi5, misi6, misi7;				
	wisata wisata1, wisata2, wisata3, wisata4,			// tempat wisata
		wisata5, wisata6, wisata7, wisata8, wisata9,	
		wisata10, wisata11, wisata12, wisata13;

	// buat misi 1									               	// mulai buat misi entitas misi 
	misi1.nama = "Potret Lokasi";				        		// yang ingin saya nesting ke struct utama
	misi1.tingkat_kesulitan = "*";			
	// tahun lahir >> tingkat kesulitan

	// misi 2
	misi2.nama = "Beri makan binatang";
	misi2.tingkat_kesulitan = "***";
	// misi 3
	misi3.nama = "Beli sebuah barang";
	misi3.tingkat_kesulitan = "**";
	// misi 4
	misi4.nama = "Sapa saudara";
	misi4.tingkat_kesulitan = "***";
	// misi 5
	misi5.nama = "Coba Makanan";
	misi5.tingkat_kesulitan = "**";
	// misi 6
	misi6.nama = "Belajar membatik";
	misi6.tingkat_kesulitan = "***";
	// misi 7
	misi7.nama = "Potret interior kendaraan";
	misi7.tingkat_kesulitan = "***";

	// buat tempat wisata 1								      // ini imput struct utama yang pertama,
	wisata1.judul = "Taman Balekambang";				// berlanjut sampai 13 obyek wisata yang telah saya siapkan
	wisata1.jenis = "arsitektur";
	wisata1.tiket = 0;
	wisata1.waktu = "pagi, malam";
	wisata1.ke_1 = misi1;
	wisata1.ke_2 = misi2;
	wisata1.ke_3 = misi4;

	// buat tempat wisata 2
	wisata2.judul = "Taman Sriwedari";
	wisata2.jenis = "arsitektur, budaya";
	wisata2.tiket = 3000;
	wisata2.waktu = "siang";
	wisata2.ke_1 = misi1;
	wisata2.ke_2 = misi3;

	// buat tempat wisata 3
	wisata3.judul = "Pura Mangkunegaran";
	wisata3.jenis = "arsitektur, sejarah, budaya";
	wisata3.tiket = 10000;
	wisata3.waktu = "siang, malam";
	wisata3.ke_1 = misi1;

	// buat tempat wisata 4
	wisata4.judul = "Pasar Triwindu";
	wisata4.jenis = "belanja";
	wisata4.tiket = 0;
	wisata4.waktu = "siang";
	wisata4.ke_1 = misi1;
	wisata4.ke_2 = misi3;

	// buat tempat wisata 5
	wisata5.judul = "Keraton Kasunanan";
	wisata5.jenis = "arsitektur, sejarah, budaya";
	wisata5.tiket = 10000;
	wisata5.waktu = "siang";
	wisata5.ke_1 = misi1;

	// buat tempat wisata 6
	wisata6.judul = "Grojogan Sewu";
	wisata6.jenis = "alam";
	wisata6.tiket = 20000;
	wisata6.waktu = "pagi";
	wisata6.ke_1 = misi1;
	wisata6.ke_2 = misi2;
	wisata6.ke_3 = misi4;

	// buat tempat wisata 7
	wisata7.judul = "Museum Batik Danar Hadi";
	wisata7.jenis = "budaya, belanja";
	wisata7.tiket = 35000;
	wisata7.waktu = "siang";
	wisata7.ke_1 = misi1;
	wisata7.ke_2 = misi6;

	// buat tempat wisata 8
	wisata8.judul = "Pasar Klewer";
	wisata8.jenis = "belanja";
	wisata8.tiket = 0;
	wisata8.waktu = "siang";
	wisata8.ke_1 = misi1;
	wisata8.ke_2 = misi3;

	// buat tempat wisata 9
	wisata9.judul = "Kereta Uap Jaladara";
	wisata9.jenis = "sejarah, arsitektur";
	wisata9.tiket = 150000;
	wisata9.waktu = "siang";
	wisata9.ke_1 = misi1;
	wisata9.ke_2 = misi7;

	// buat tempat wisata 10
	wisata10.judul = "Bus Tingkat Werkudara";
	wisata10.jenis = "arsitektur";
	wisata10.tiket = 20000;
	wisata10.waktu = "siang";
	wisata10.ke_1 = misi1;
	wisata10.ke_2 = misi7;

	// buat tempat wisata 11
	wisata11.judul = "Taman Satwa Taru Jurug";
	wisata11.jenis = "alam, arsitektur";
	wisata11.tiket = 20000;
	wisata11.waktu = "siang";
	wisata11.ke_1 = misi1;
	wisata11.ke_2 = misi2;
	wisata11.ke_3 = misi4;

	// buat tempat wisata 12
	wisata12.judul = "Benteng Vastenburg";
	wisata12.jenis = "arsitektur, sejarah";
	wisata12.tiket = 3000;
	wisata12.waktu = "siang";
	wisata12.ke_1 = misi1;

	// buat tempat wisata 13
	wisata13.judul = "Pasar Ngarsopuro";
	wisata13.jenis = "arsitektur, budaya, kuliner, belanja";
	wisata13.tiket = 0;
	wisata13.waktu = "malam";
	wisata13.ke_1 = misi1;
	wisata13.ke_2 = misi5;





	// output
	cout << endl;															// ini bagian outputnya
	cout << "	Journey Database" << endl;
	cout << "	alpha v0.0.1" << endl;
	cout << "	patch Kota Solo" << endl;
	cout << "	by Irwandi 113" << endl;
	cout << endl;
	cout << " - Tempat Wisata	: " << wisata1.judul << endl;				// algoritma nesting structnya berjalan
	cout << " - Jenis Wisata		: " << wisata1.jenis << endl;			// dan dikeluarkan dari kode ini
	cout << " - Harga Tiket		: " << wisata1.tiket << endl;				// berlanjut sampai 13 objek wisata
	cout << " - Waktu Terbaik	: " << wisata1.waktu << endl;				// oiya, Misi - misinya dapat kita  edit di syntax ini
	cout << " - - Misi 1		: " << wisata1.ke_1.nama << endl;			// sesuai kecocokan misinya
	cout << " - - Misi 2		: " << wisata1.ke_2.nama << endl;			//  1. potret lokasi 
	cout << endl;														                    	//	2. beri makan binatang(sesuai ketentuan tempat)
	cout << " - Tempat Wisata	: " << wisata2.judul << endl;				//	3. beli sebuah barang
	cout << " - Jenis Wisata		: " << wisata2.jenis << endl;			//	4. sapa saudara
	cout << " - Harga Tiket		: " << wisata2.tiket << endl;				//	5. coba makanan
	cout << " - Waktu Terbaik	: " << wisata2.waktu << endl;				//	6. belajar membatik
	cout << " - - Misi 1		: " << wisata2.ke_1.nama << endl;			//	7. potret dari interior kendaraan
	cout << " - - Misi 2		: " << wisata2.ke_2.nama << endl;
	cout << endl;
	cout << " - Tempat Wisata	: " << wisata3.judul << endl;
	cout << " - Jenis Wisata		: " << wisata3.jenis << endl;
	cout << " - Harga Tiket		: " << wisata3.tiket << endl;
	cout << " - Waktu Terbaik	: " << wisata3.waktu << endl;
	cout << " - - Misi 1		: " << wisata3.ke_1.nama << endl;
	cout << " - - Misi 2		: " << wisata3.ke_2.nama << endl;
	cout << endl;
	cout << " - Tempat Wisata	: " << wisata4.judul << endl;
	cout << " - Jenis Wisata		: " << wisata4.jenis << endl;
	cout << " - Harga Tiket		: " << wisata4.tiket << endl;
	cout << " - Waktu Terbaik	: " << wisata4.waktu << endl;
	cout << " - - Misi 1		: " << wisata4.ke_1.nama << endl;
	cout << " - - Misi 2		: " << wisata4.ke_2.nama << endl;
	cout << endl;
	cout << " - Tempat Wisata	: " << wisata5.judul << endl;
	cout << " - Jenis Wisata		: " << wisata5.jenis << endl;
	cout << " - Harga Tiket		: " << wisata5.tiket << endl;
	cout << " - Waktu Terbaik	: " << wisata5.waktu << endl;
	cout << " - - Misi 1		: " << wisata5.ke_1.nama << endl;
	cout << " - - Misi 2		: " << wisata5.ke_2.nama << endl;
	cout << endl;
	cout << " - Tempat Wisata	: " << wisata6.judul << endl;
	cout << " - Jenis Wisata		: " << wisata6.jenis << endl;
	cout << " - Harga Tiket		: " << wisata6.tiket << endl;
	cout << " - Waktu Terbaik	: " << wisata6.waktu << endl;
	cout << " - - Misi 1		: " << wisata6.ke_1.nama << endl;
	cout << " - - Misi 2		: " << wisata6.ke_2.nama << endl;
	cout << endl;
	cout << " - Tempat Wisata	: " << wisata7.judul << endl;
	cout << " - Jenis Wisata		: " << wisata7.jenis << endl;
	cout << " - Harga Tiket		: " << wisata7.tiket << endl;
	cout << " - Waktu Terbaik	: " << wisata7.waktu << endl;
	cout << " - - Misi 1		: " << wisata7.ke_1.nama << endl;
	cout << " - - Misi 2		: " << wisata7.ke_2.nama << endl;
	cout << endl;
	cout << " - Tempat Wisata	: " << wisata8.judul << endl;
	cout << " - Jenis Wisata		: " << wisata8.jenis << endl;
	cout << " - Harga Tiket		: " << wisata8.tiket << endl;
	cout << " - Waktu Terbaik	: " << wisata8.waktu << endl;
	cout << " - - Misi 1		: " << wisata8.ke_1.nama << endl;
	cout << " - - Misi 2		: " << wisata8.ke_2.nama << endl;
	cout << endl;
	cout << " - Tempat Wisata	: " << wisata9.judul << endl;
	cout << " - Jenis Wisata		: " << wisata9.jenis << endl;
	cout << " - Harga Tiket		: " << wisata9.tiket << endl;
	cout << " - Waktu Terbaik	: " << wisata9.waktu << endl;
	cout << " - - Misi 1		: " << wisata9.ke_1.nama << endl;
	cout << " - - Misi 2		: " << wisata9.ke_2.nama << endl;
	cout << endl;
	cout << " - Tempat Wisata	: " << wisata10.judul << endl;
	cout << " - Jenis Wisata		: " << wisata10.jenis << endl;
	cout << " - Harga Tiket		: " << wisata10.tiket << endl;
	cout << " - Waktu Terbaik	: " << wisata10.waktu << endl;
	cout << " - - Misi 1		: " << wisata10.ke_1.nama << endl;
	cout << " - - Misi 2		: " << wisata10.ke_2.nama << endl;
	cout << endl;
	cout << " - Tempat Wisata	: " << wisata11.judul << endl;
	cout << " - Jenis Wisata		: " << wisata11.jenis << endl;
	cout << " - Harga Tiket		: " << wisata11.tiket << endl;
	cout << " - Waktu Terbaik	: " << wisata11.waktu << endl;
	cout << " - - Misi 1		: " << wisata11.ke_1.nama << endl;
	cout << " - - Misi 2		: " << wisata11.ke_2.nama << endl;
	cout << endl;
	cout << " - Tempat Wisata	: " << wisata12.judul << endl;
	cout << " - Jenis Wisata		: " << wisata12.jenis << endl;
	cout << " - Harga Tiket		: " << wisata12.tiket << endl;
	cout << " - Waktu Terbaik	: " << wisata12.waktu << endl;
	cout << " - - Misi 1		: " << wisata12.ke_1.nama << endl;
	cout << " - - Misi 2		: " << wisata12.ke_2.nama << endl;
	cout << endl;
	cout << " - Tempat Wisata	: " << wisata13.judul << endl;
	cout << " - Jenis Wisata		: " << wisata13.jenis << endl;
	cout << " - Harga Tiket		: " << wisata13.tiket << endl;
	cout << " - Waktu Terbaik	: " << wisata13.waktu << endl;
	cout << " - - Misi 1		: " << wisata13.ke_1.nama << endl;
	cout << " - - Misi 2		: " << wisata13.ke_2.nama << endl;

	// walau di daftar misi ada yang 2, ada yang 3, bahkan bisa 7 sessuai output yang telah disediakan
	// output tidak akan error, inilah kekuatan struct

	cin.get();		// kemudian kita tidak melupakan get dan returnya
	return 0;		// untuk mencegah terjadinya looping dan error
}					// <-- serta kurung kurawal introvert yang menjadi kunci belakang penyelesaian program ini





