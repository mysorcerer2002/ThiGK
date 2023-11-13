#include <iostream>
using namespace std;

int Check_SHT(int a)
{
    int b = 0;
    for (int i = 1; i < N; i++)
        if (a % i == 0)
            b += i;  // S = S + i

    if (b == a)
        return true; // Là số hoàn thiện
    return false;
}     // Không là số hoàn thiện
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
    Check_SHT(a);
    ktsoCP(a);
    return 0;
}