#include "extra.h"

void shell_sort(vector<int>& a, int n) {
    int h = 1;
    while(h < a.size() / n) h = n * h + 1;
    while(h >= 1) {
        for(int i = h;i < a.size();i ++) {
            for(int j = i;j >= h && a[j] < a[j - h]; j -= h) {
                swap(a[j], a[j - h]);
            }
        }
        h = h / n;
    }
}
