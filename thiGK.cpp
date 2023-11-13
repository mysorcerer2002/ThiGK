#include <iostream>
using namespace std;
int ktsoCP(int a){
	int i = 0;
	while(i*i <= a){
		if(i*i == a){
			cout << a << " la so chinh phuong!\n";
			return 0;
		}
		++i;
	}
	cout << n << " khong phai so chinh phuong!\n";
}
int main(){
    int a;
    cin>>a;
    cout << int(a);
    ktsoCP(a);
    return 0;
    
}