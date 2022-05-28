#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	//Using vector for first time
	cout<<"Declaring an empty vector."
	vector<int>v;
	
	//using push_back() function
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	
	//Displaying the elements below using push_back() function
	for(int i : v)
		cout<<i<<" "; // Outtput is : 2 3 4
		
	// Declaring vector with conditions
	// Syntax: vector<data_type>vector_name(no of repetation, element_value)
	vector<int>v1(5,13)
	for(int i : v1)
		cout<<i<<" "; // Here 13 is repeated 5 times(13, 13, 13, 13, 13)
	
	return 0;
}
