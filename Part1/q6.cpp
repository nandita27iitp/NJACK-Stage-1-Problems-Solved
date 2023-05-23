#include<iostream>

using namespace std;
int main()
{
    int n, a, b, c;
    cout << "Enter the amount to be withdrawn in hundreds: ";
    cin>>n;

    a = n/100;
    n = n%100;
    
    b = n/50;
    n = n%50;
    
    c = n/10;
    n = n%10;
    
    cout << a <<" Hundreds, " << b <<" Fifties, " << c << " Tens and " << n << " Rupees."<<endl;

    return 0;
}
