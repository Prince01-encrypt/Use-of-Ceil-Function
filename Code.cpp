#include <iostream>
#include <cmath>
#include <algorithm>
#define ll long long
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int m;
    cin >> m;
    int max = -1;
    int* arr = new int[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int index;

    for(int i = 0; i < n; i++) {
        if(ceil((float)arr[i] / m) >= max) {
            max = ceil((float)arr[i] / m);
            index = i + 1;
        }
    }
    if(m * max <= m) cout << n;
    else    cout << index;
    return 0;
}
