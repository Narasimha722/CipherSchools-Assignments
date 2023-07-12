#include<iostream>
using namespace std;

int main(){
	int password;
	
	do{
		cin>>password;
	}while(password<999999);
	
	return 0;
}



 // Infinite loop

#include<iostream>
using namespace std;

int main(){
	int password;
	int count=0;
//	while(1){
//		cout<<"choclates ";
//		count++;
//		if(count == 100){
//			break;
//		}
//	}

    for(int i=0; ;i++){
//    	cout<<"pranav"<<" ";
        cout<<i<<" ";
        if(i>100) break;
	}
	
	return 0;
}

// while loop
#include<iostream>
using namespace std;

int main(){
	int password;
	
	cout<<"Enter the password:"<<endl;
	cin>>password;
	
	while(password<999999){
		cout<<"The password does not meet the required conditions, please enter the password again";
		cin>>password;
	}
	cout<<"The user entered the correct password"<<endl;
	return 0;
}
