#include "extra.h"

void insert_sort(vector<int>& a) {
    for(int i = 1;i < a.size();i ++) {
        for(int j = i;j > 0 && a[j] < a[j - 1];j --) {
            swap(a[j], a[j - 1]);
        }
    }
}
