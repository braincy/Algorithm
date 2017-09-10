#include "extra.h"

vector<int> tmp;

void merge(vector<int>& a, int lo, int mid, int hi) {
    int i = lo, j = mid + 1;
    tmp.assign(a.begin(), a.end());
    for(int k = lo;k <= hi;k ++) {
        if(i > mid)              a[k] = tmp[j ++];
        else if(j > hi)          a[k] = tmp[i ++];
        else if(tmp[i] > tmp[j]) a[k] = tmp[j ++];
        else                     a[k] = tmp[i ++];
    }
}

// 自顶向下归并
void Merge_Sort(vector<int>& a, int lo, int hi) {
    if(lo < hi) {
        int mid = lo + (hi - lo) / 2;
        Merge_Sort(a, lo, mid);
        Merge_Sort(a, mid + 1, hi);
        merge(a, lo, mid, hi);
    }
}

// 自底向上归并
void Merge_Sort(vector<int>& a) {
    for(int sz = 1;sz < a.size();sz += sz) {
        for(int lo = 0;lo < a.size() - sz;lo += sz * 2) {
            merge(a, lo, lo + sz - 1, min(lo + sz * 2 -1, int(a.size()) - 1));
        }
    }
}

void merge_sort(vector<int>& a) {
    cout << "please input merge method: 1.top-down  2.bottom-up" << endl;
    int method; cin >> method;
    if(method == 1)
        Merge_Sort(a, 0, a.size() - 1);
    else if(method == 2) {
        Merge_Sort(a);
    }
    else{
        cout << "merge method error" << endl;
    }
    vector<int>().swap(tmp);
}
