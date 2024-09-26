#include <iostream>
using namespace std;

int main() {
	int i,N,jumlah=0;
	i=0;
	
	cout<<"masukan banyak nilai : ";
	cin>> N ;
	
		jumlah=jumlah+(N);
		if (N%2==0){
			cout<<N<<"-";
			N=N-2;
		}
	
	/*kk*/
	while(N>i){
		if(N%2==0){
	cout<<N<<"-";
	jumlah=jumlah-(N);
		}
	N--;
	
}
	jumlah=jumlah-(N);
	cout<<N<<" ";
	cout<<"="<<jumlah;
}
