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

void Merge_Sort(vector<int>& a, int lo, int hi) {
    if(lo < hi) {
        int mid = lo + (hi - lo) / 2;
        Merge_Sort(a, lo, mid);
        Merge_Sort(a, mid + 1, hi);
        merge(a, lo, mid, hi);
    }
}

void merge_sort(vector<int>& a) {
    Merge_Sort(a, 0, a.size() - 1);
    vector<int>().swap(tmp);
}
