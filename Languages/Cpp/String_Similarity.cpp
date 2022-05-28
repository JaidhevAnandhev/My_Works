#include<iostream>
#include<cstring>
#include<cctype>
#include<sstream>
#include<stdio.h>
#include<bits/stdc++.h>
#include <algorithm>

using namespace std;


int main()
{
	// Get the input 1st and 2nd string from the user
	string str_1, str_2;
	cout<<"Enter the 1st string :"<<endl;
	cin>> str_1;
	cout<<"Enter the 2nd string :"<<endl;
	cin>> str_2;
	
	
	// Validate 1st and 2nd string contains only lettters
	bool isNotAlpha = false;
 	for (string::iterator it=str_1.begin(); it!=str_1.end(); ++it)
  	{
	  	// Validate the string contains other than  a-z or A-Z  -- Check with hexadecimal values
	    if (!( ((*it) >= 0x61 && (*it) <= 0x7a)  || ((*it) >= 0x41 && (*it) <= 0x5a) )	)
	    {
	    	isNotAlpha = true;
	    	break;
	    	//cout<<str_1<<" is not a valid string."<<endl;
    		//return 0;
		}
  	}
  
	for (string::iterator it=str_2.begin(); it!=str_2.end(); ++it)
	{
	  	// Validate the string contains other than  a-z or A-Z  -- Check with hexadecimal values
	    if (!( ((*it) >= 0x61 && (*it) <= 0x7a)  || ((*it) >= 0x41 && (*it) <= 0x5a) )	)
	    {
	    	isNotAlpha = true;
	    	break;
		}
	}
	
	// Check the isNotAlpha flag contains true value
	if(isNotAlpha)
	{
		cout<<str_1<<" or "<<str_2<<" is not a valid string."<<endl;	    
		return 0;	
	}
	
	//Validate of 1st and 2nd strings are of equal length 
	if(str_1.length() != str_2.length())
	{
		cout<<"Length of "<<str_1<<" and "<<str_2<<" does not match"<<endl;
		return 0;
	}
	
	
	/* 
	Logic for strings similarity
	~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	1. Convert both the strings to either upper or lower case bvecause we accepted the input as case insensitive
	2. Sort both the strings
	3. Compare the strings for it's equality.
	*/
	
	// Copy the strings to a new variables to display in the output 
	string original_str_1 = str_1;
	string original_str_2 = str_2;

	// 1.Convert both the strings to upper case because we accepted the input as case insensitive
	int i = 0;
	for( i = 0; str_1[i] != '\0'; i++)
	{
			if(str_1[i] >='a' && str_1[i] <='z')
				str_1[i] -= 32;			
	}
	cout<<"After  coverting to uppercase : "<<str_1<<endl; 
	
	for(i = 0; str_2[i] != '\0'; i++)
	{
			if(str_2[i] >='a' && str_2[i] <='z')
				str_2[i] -= 32;
	}
	cout<<"After  coverting to uppercase : "<<str_2<<endl; 
	
	// 2. Sort the 1st  string
	sort(str_1.begin(), str_1.end());
	cout<<"After sorting :"<<str_1<<endl;
	
	// Sort the 2nd string
	sort(str_2.begin(), str_2.end());
	cout<<"After sorting :"<<str_2<<endl;
	
	if(str_1 != str_2)
	{
			cout<<"Strings are not similar"<<endl;
			return 0;
	}
	
	// 3. Compare the strings for it's equality.
	
	cout<<original_str_1<<" and "<<original_str_2<<" are similar."<<endl;

	return 0;
		
		
		
		
		
}
