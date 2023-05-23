#include<iostream>
#include <math.h>

using namespace std;
int main()
{
    int N, x;
    int n = 0;
    cout << "Enter a five digit number: ";
    cin>>N;

    for(int i=0; i<5; i++){
        x = N % 10;
        n += (x + 1) * pow(10, i);
        N /= 10;
    }
    cout << "\nNew Number: " << n <<endl;

    return 0;
}

