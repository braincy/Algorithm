#include "Select_Sort.h"
#include "Insert_Sort.h"

int main(int argc, char *argv[]) {
    cout << "please input init vector size: " << endl;
    int n; cin >> n;

    //初始化待排序数组
    vector<int> a = init_vec(n);
    cout << "init vector: " << endl;
    show(a);
    
    //判断当前要使用的排序方法
    string method[] = {"select", "insert"};
    if(argv[1] == method[0]) select_sort(a);
    else if(argv[1] == method[1]) insert_sort(a);
    else {
        cout << "sort method error" << endl;
        return -1;
    }

    //判断排序后数组是否有序
    if(isSorted(a)) {
        cout << "sort success and current vector: " << endl;
        show(a);
        return 0;
    }
    else {
        cout << "sort error" << endl;
        show(a);
        return -2;
    }
}
