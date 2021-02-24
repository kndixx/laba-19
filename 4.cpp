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
    
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] < 0) {
            a.insert(a.begin() + i + 1, 0);
        }
    }
    
    for (int i = 0; i < a.size(); ++i) {
        cout << a[i] << " ";
    }
    
    return 0;
}