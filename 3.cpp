#include <iostream>
using namespace std;
#include <vector>

int main() {
    int n;
    
    cin >> n;
    
    vector<int> a(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    int min_i = 0;
    int max_i = 0;
    
    for (int i = 0; i < n; ++i) {
        if (a[i] > a[max_i]) {
            max_i = i;
        }
        if (a[i] < a[min_i]) {
            min_i = i;
        }
    }
    
    a.insert(a.begin() + min_i, 0);
    a.insert(a.begin() + max_i + 2, 0);
    
    for (int i = 0; i < a.size(); ++i) {
        cout << a[i] << " ";
    }
    
    return 0;
}