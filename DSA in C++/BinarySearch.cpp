#include<iostream>
using namespace std;
int BinarySearch(int arr[],int size,int key){
	int start = 0;
	int end =size -1;
	int mid = start + (end -start)/2;
while(start<=end ){
	if(arr[mid] ==key){
		return mid;
	}
	if (key >arr[mid]){
	 start = mid +1;	
	}
	else {
		end = mid -1;
	}
	mid = start + (end -start)/2;}//while loop
		return -1;}///main 
int main(){
	int size;
	cout<<"Enter the size of array :  "<<endl;
	cin>>size;
     int arr[20];
     cout<<"ENTER the  SORTED ARRAY PlEASE : "<<"  "<<endl;
     for(int i =0;i<size;i++){
     	cin>>arr[i];
	 }
	int key;
	cout<<"WHICH NUMBER YOU WANT SEARCH :  "<<endl;
	cin>>key;
	
	int result = BinarySearch(arr,size,key);
	cout<<"NUMBER IS FOUND AT INDEX    :"<<result;
	
}