#include "Select_Sort.h"

int main() {
    cout << "please input init vector size: " << endl;
    int n; cin >> n;
    vector<int> a = init_vec(n);
    cout << "init vector: " << endl;
    show(a);
    select_sort(a);
    if(isSorted(a)) {
        cout << "sort success and current vector: " << endl;
        show(a);
        return 0;
    }
    else {
        cout << "sort error" << endl;
        show(a);
        return -1;
    }
}
