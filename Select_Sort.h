#include "extra.h"

void select_sort(vector<int>& a) {
    for(int i = 0;i < a.size();i ++) {
        int min = i;
        for(int j = i + 1;j < a.size();j ++) {
            if(a[j] < a[min]) min = j;
        }
        swap(a[i], a[min]);
    }
}

