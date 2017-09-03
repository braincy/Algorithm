#ifndef EXTRA_H_H
#define EXTRA_H_H

#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
#include <time.h>
using namespace std;

vector<int> init_vec(int n) {
    srand((unsigned)time(NULL));
    vector<int> res;
    for(int i = 0;i < n;i ++) {
        res.push_back(rand() % 100);
    }
    return res;
}

void swap(int& a, int& b) {
    if(a != b) {
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
    }
}

bool isSorted(vector<int> a) {
    for(int i = 1;i < a.size();i ++) {
        if(a[i] < a[i - 1]) return false;
    }
    return true;
}

void show(vector<int> a) {
    for(int i = 0;i < a.size();i ++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

#endif
