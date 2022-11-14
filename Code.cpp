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

// Another Way 

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
    int max = 0;
    int* arr = new int[n];
    int count[102] = {0};
    int quo, rem;
 
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] > max) {
            max = arr[i];
        }
        quo = arr[i] / m;
        rem = arr[i] % m;
 
        if(rem != 0) {
            count[quo + 1]++;
        }
        else {
            count[quo]++;
        }
    }
    if(max < m) {
        cout << n;
    }
    else {
        int index;
        for(int i = 101; i > 0; i--) {
            if(count[i] > 0) {
                index = i;
                break;
            }
        }
        index--;
        int check = m * index;
 
        for(int i = n - 1; i > -1; i--) {
            if(arr[i] > check) {
                cout << i + 1;
                break;
            }            
        }
    }
    return 0;
}
