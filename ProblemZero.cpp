#include <iostream>
using namespace std;
int main(){
    long long sum = 0;
    for (long long i = 1; i < 453000; i+=2){
        sum += i*i;
    }
    cout << sum << endl;
    return 0;
}