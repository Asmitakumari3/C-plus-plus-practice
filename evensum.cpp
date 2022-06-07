#include <iostream>

using namespace std;

int main() {
    int n;

    int i, sum = 0;

    // Take input from user.
    cout << "enter number";
    cin >> n;

    for(i = 1; i <= n; i++) {

        // Check for even or not.
        if((i % 2) == 0 ) {

            sum = i+i;

        }
    }

    cout << endl << "Sum of even numbers from 1 to " << n << " is : " << sum;

    return 0;
}