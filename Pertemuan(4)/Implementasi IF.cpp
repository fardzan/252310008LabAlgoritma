#include <iostream>
using namespace std;

int main()
{
	double total_beli, potongan=0, jumlah_bayar=0;
	
	cout << "Total Pembelian Rp. ";
	cin >> total_beli;
	
	if(total_beli >= 50000) {
		potongan = 0.2*total_beli;
		cout << "Besar Potongan 20% Rp. " << potongan << endl;
	}
	
	jumlah_bayar = total_beli - potongan;
	
	cout << "Jumlah yang harus dibayarkan Rp. " << jumlah_bayar;
	
	getchar();
}
