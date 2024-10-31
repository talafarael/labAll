#include <iostream>
#include <vector>
#include <thread>
std::vector<int> sorter(std::vector<int> arr) {
    if (arr.size() <= 1) {
        return arr;
    }

    int mid = arr.size() / 2;
    int midNum = arr[mid];
    std::vector<int> less;
    std::vector<int> more;

    for (int i = 0; i < arr.size(); i++) {
        if (i == mid) continue;
        if (arr[i] > midNum) {
            more.push_back(arr[i]);
        } else {
            less.push_back(arr[i]);
        }
    }

    std::vector<int> sortedLess = sorter(less);
    std::vector<int> sortedMore = sorter(more);

    sortedLess.push_back(midNum);
    sortedLess.insert(sortedLess.end(), sortedMore.begin(), sortedMore.end());

    return sortedLess;
}
int main(){
    std::vector<int> arr;
    int num=7;
    // std::cin>>num;
    for (int i = 0; i < num; i++) {
        arr.push_back(rand() % 100);
    }
std::vector<int> arr1;
    std::vector<int> arr2;
    for(int i=0;i<arr.size();i++) {
        if(arr[i]%2==0) {
            arr1.push_back(arr[i]);
        }else {
            arr2.push_back(arr[i]);
        }
    }

   arr1= sorter(arr1);
    arr2= sorter(arr2);
    arr1.insert(arr1.end(), arr2.begin(), arr2.end());
    for(int i=0;i<arr1.size();i++){
std::cout<<arr1[i]<<std::endl;
    }
    return 0;
}