#include <iostream>
using namespace std;
int main(){
	int angka;
	cin>>angka;
	if(angka==1){
		cout<<"satu";
	}else if (angka==2){
		cout<<"dua";
	}else if (angka==3){
		cout<<"tiga";
	}else if (angka>3){
		cout<<"bilangan lebih besar dari tiga";
	}
	return 0;
}
