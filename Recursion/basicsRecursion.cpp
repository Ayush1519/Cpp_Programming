#include<iostream>
using namespace std;

int factorial(int num) {
    if(num == 0)
        return 1;
    else {
        int smaller = factorial(num - 1);
        int bigger = num * smaller;
        return bigger;
    }
}

int main() {
    int num;
    cin >> num;
    int result = factorial(num);
    cout << "Factorial of " << num << " is: " << result << endl;
    return 0;
}
