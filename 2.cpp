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
    
    for (int i = 0; i < a.size() - 1; ++i) {
        int i_1 = -1, i_2 = -1;
        
        for (int j = i + 1; j < a.size(); ++j) {
            if ((a[i] == a[j]) && (i_1 == -1)) {
                i_1 = i;
                i_2 = j;
            } else if ((a[i] == a[j]) && (i_1 != -1)) {
                i_1 = -2;
            }
        }
        
        if (i_1 >= 0) {
            a.erase(a.begin() + i_2);
            a.erase(a.begin() + i_1);
            --i;
        }
    }
    
    cout << a.size() << endl;
    
    for (int i = 0; i < a.size(); ++i) {
        cout << a[i] << " ";
    }
    
    return 0;
}