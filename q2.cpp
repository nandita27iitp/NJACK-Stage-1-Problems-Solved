#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int N, x;
    int n = 0;
    cout << "Enter a five digit number: ";
    cin>>N;

    for(int i=5; i>0; i--){
        x = N % 10;
        n += x * pow(10, i-1);
        N /= 10;
    }
    cout << "\nReversed Number: " << n <<endl;

    return 0;
}

