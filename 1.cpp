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
    
    for (size_t i = 1; i < a.size(); ++i) {
        if (a[i] == a[i - 1]) {
            a.erase(a.begin() + i);
            --i;
        }
    }
    
    for (int i = 0; i < a.size(); ++i) {
        cout << a[i] << " ";
    }
    
    return 0;
}