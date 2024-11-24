#include <iostream>
using namespace std;
void sort(int arr[],int l,int r){
    if(l+1>r)return;
    int left=l;
    int right=r;
    int key=arr[left];
    while(left<right){
        while(left<right&&arr[right]>=key){
            right --;
        }
        if(left<right){
            arr[left]=arr[right];
            left++;
        }
        while(left<right&&arr[left]<=key){
            left++;
        }
        if(left<right){
            arr[right]=arr[left];
            right--;
        }
    }
    arr[left]=key;
    sort(arr,l,left);
    sort(arr,left+1,r);
}
void sort(int arr[], int size) {
    sort(arr,0,size-1);
}
int main() {
    //张三给main函数添加注释
	int arr[] = { 23,89,45,67,43,78,29,13,19,49 };
	int size = sizeof(arr) / sizeof(int);
	sort(arr, size);
    for(int i=0;i<size;++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
	return 0;
}
