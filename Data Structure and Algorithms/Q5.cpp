#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    long long a[100];
    long long sum = 0;
  	int x;
  	cin >> x;
    for(int i = 0; i < x; i++) {
        cin >> a[i];
        sum += a[i];
    }
    sort(a, a+x);
    cout << sum - a[x-1] << " " << sum - a[0] << endl;
    return 0;
}