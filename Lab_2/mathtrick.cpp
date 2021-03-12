#include <iostream>

using namespace std;

int main() {
	int num = 0;

    cout << "Please enter a number" << endl;
    cin >> num;

	int ans = (num*2+8)/2-num ;

    cout << ans <<endl;

	return 0;
}