#include <iostream>
using namespace std;

int main(){
	cout<<"===program pembayaran==="<<endl;
	unsigned int total_belanja;

	cout<<"masukan total belanja:";
	cin>>total_belanja;

	//menggunakan percabangan if
	if(total_belanja >100000){
		cout<<"selamat anda mendapat hadiah"<<endl;
	}
	cout<<"terimakasih telah belanja di toko kami"<<endl;
	return 0;
}
