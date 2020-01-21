#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int left,int right) {
    
    int i=left-1;
    int pivot = arr[right];
    for(int j=left;j<right;j++) {
        if(arr[j] < pivot) {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    i++;
    swap(arr[i],arr[right]);
    return i;
}
void sorting(int arr[],int left,int right) {
    
    if(right > left) {
        int loc = partition(arr,left,right);
        sorting(arr,left,loc-1);
        sorting(arr,loc+1,right);
    }
}
void quickSort(int input[],int size) {
    
    sorting(input,0,size-1);
}
int main() {
	
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	quickSort(arr,n);
	return 0;
}
