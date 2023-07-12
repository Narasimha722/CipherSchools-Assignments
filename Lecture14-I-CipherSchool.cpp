// BY ARRAY PASSING

#include<iostream>
using namespace std;

void display(int n, int arr[]){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void display2(int n, int *arr){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	int a[10];
	
	cout<<"values for comparision : "<<endl;
	
	cout<<"The value of a is: "<<a<<endl;
	cout<<"The address of a[0] is: "<<a<<endl;
	cout<<"The address of a[1] is: "<<a<<endl;
	
	int n;
	cin>>n;
	int list[n];
	for(int i=0;i<n;i++){
		cin>>list[i];
	}
	
	display(n, list);
	display2(n, list);
	
	return 0;
}


// BY FUNCTION , POINTER

#include<iostream>
using namespace std;

void swap(int *x, int *y){
	int c;  // x,y are pointers to a,b --> they store the address of a and b
	
	c=*x;
	*x=*y;
	*y=c;
	
	cout<<"The swapping is complete "<<endl;
	
}


int main(){
	int a,b;
	
	a=3;
	b=4;
	
	swap(&a,&b);  //passing address of a and b to function
	cout<<"a and b values after swapping: "<<a<<" "<<b;
	return 0;
	
}
