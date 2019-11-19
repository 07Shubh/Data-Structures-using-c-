#include <iostream>
#include<conio.h>
using namespace std;

int a[50], n;

void insertion(int num, int pos){
	for(int j=n;j>=pos;j--){
		a[j] = a[j-1];
	}
	a[pos] = num;
	cout<<"New array:-\n";
	for(int i=0;i<=n;i++){
		cout<<a[i];
	}
}

void searching(int search){
	for(int i=0;i<n;i++){
		if(a[i]==search){
			cout<<"Element present at "<<i+1;
			break;
		}
	}
}

void deleting(int del){
	for(int i=0;i<n;i++){
		if(a[i]==del){
			for(int j=i;j<n;j++){
				a[j] = a[j+1];
			}
			break;
		}
	}	
	cout<<"New array:-\n";
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
}

int main(){
	int search, num, pos, del, ch;	
    cout<<"\nEnter the number of elements = ";
    cin>>n;
	cout<<"\nEnter the elements of array:-\n";
	for(int i=0;i<n;i++){
		cin>>a[i];
	} 
    cout<<"\nChoose from the following:- \n1. Insertion\n2. Search\n3. Deletion\n4. Quit\n";
    do
    {
    	cout<<"\n\nEnter choice:-\n"; 
		cin>>ch;
 		switch(ch){
 			case 1:{
		 	cout<<"\nEnter the number to inserted :-\n";
			cin>>num;
			cout<<"Enter the position:-\n";
			cin>>pos;
			insertion(num, pos);
			break;
	 		}
		case 2:	{
			cout<<"\nEnter the element to be searched = ";
			cin>>search;
			searching(search);
			break;
			}
		case 3: {
			cout<<"\nEnter the element to be deleted = ";
			cin>>del;
			deleting(del);
			break;
			}
		case 4: {
				cout<<"\nExit\n"; 
				exit(1);
				break;
			}
				
		default: {
			cout<<"\nInvalid choice\n";
			break;							
			}
		}
    } 
    while (ch!=5);
	getch();
	return 0;
}	