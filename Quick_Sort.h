#include "extra.h"

int Partition(vector<int>& a, int lo, int hi) {
    int i = lo + 1, j = hi;
    int pivot = a[lo];
    while(true) {
        while(a[i] <= pivot) i ++;
        while(a[j] > pivot) j --;
        if(i >= j) break;
        swap(a[i], a[j]);
    }
    swap(a[lo], a[j]);
    return j;
}

void Quick_Sort(vector<int>& a, int lo, int hi) {
    if(lo < hi) {
        int i = Partition(a, lo, hi);
        Quick_Sort(a, lo, i - 1);
        Quick_Sort(a, i + 1, hi);
    }
}

void quick_sort(vector<int>& a) {
    Quick_Sort(a, 0, a.size() - 1);
}
