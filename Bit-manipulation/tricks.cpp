#include <bits/stdc++.h>
using namespace std;

int main() {
    cout<<(10|(1<<2)); //sets the second bit in the number 10
    cout<<(10^(1<<2)); //flips the second bit in the number 10
    cout<<(10&~(1<<2)); //clears the second bit in the number 10
    
    return 0;
}