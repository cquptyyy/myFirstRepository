#include <iostream>
//李四给sort函数添加注释
void sort(int arr[], int size) {
    for(int i=0;i<size-1;++i){
        for(int j=0;j<size-1-i;++j){
            if(arr[j]>arr[j+1]){
                int tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
            }
        }
    }
}
int main() {
	int arr[] = { 23,89,45,67,43,78 };
	int size = sizeof(arr) / sizeof(int);
	sort(arr, int size);
	return 0;
}
