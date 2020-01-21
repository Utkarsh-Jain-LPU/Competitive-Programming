#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int left,int mid,int right) {
    
    int i=left,j=mid,k=0;
    int data[right-left+1];
    while(i<mid && j<=right) {
        if(arr[i] < arr[j]) {
            data[k++] = arr[i++];
        }
        else {
            data[k++] = arr[j++];
        }
    }
    while(i<mid) {
        data[k++] = arr[i++];
    }
    while(j<=right) {
        data[k++] = arr[j++];
    }
    for(int x=left,y=0;x<=right;x++,y++) {
        arr[x] = data[y];
    }
}
void Merge_Sort(int arr[],int left,int right) {
    
    if(right > left) {
        
        int mid = (left+right)/2;
        Merge_Sort(arr,left,mid);
        Merge_Sort(arr,mid+1,right);
        merge(arr,left,mid+1,right);
    }
}
void mergeSort(int input[], int size){
    
    Merge_Sort(input,0,size-1);
}
int main() {
	
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	mergeSort(arr,n);
	return 0;
}
