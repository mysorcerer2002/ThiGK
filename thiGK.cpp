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
    return false;     // Không là số hoàn thiện
}
int main(){
    int a;
    cin>>a;
    cout << int(a);
    ktSoHT(a);
    return 0;

}