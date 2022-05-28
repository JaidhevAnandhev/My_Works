#include<iostream>
using namespace std;
int main()
{
		string name;
		cout<<"Enter the name : "<<endl;
		cin>>name;
		if(name.length() <= 2)
		{
				cout<<"Invalid name"<<endl;
				return 0;
		}
		
		int sum = 0;
		for(int i = 0; i < name.length(); i++)
		{
			if(!(name[i] >= 'A' || name[i] <= 'Z' || name[i] >= 'a' || name[i] <= 'z'))
			{
					cout<<"Invalid input. "<<endl;
					return 0;
			}
			
			switch (name[i])
			{
				case 'A': case 'a':
				{
					sum += 1;
					break;
				}						
				case  'B' : case 'b':
				{
					sum += 2;
					break;
				}
				case  'C' : case 'c':
				{
					sum += 3;
					break;
				}
				case  'D' : case 'd':
				{
					sum += 4;
					break;
				}
				case  'E' : case 'e':
				{
					sum += 5;
					break;
				}	
				case  'F' : case 'f':
				{
					sum += 6;
					break;
				}
				case  'G' : case 'g':
				{
					sum += 7;
					break;
				}
				case  'H' : case 'h':
				{
					sum += 8;
					break;
				}
				case  'I' : case 'i':
				{
					sum += 9;
					break;
				}	
				case  'J' : case 'j':
				{
					sum += 10;
					break;
				}
				case  'K' : case 'k':
				{
					sum += 11;
					break;
				}
				case  'L' : case 'l':
				{
					sum += 12;
					break;
				}				
				case  'M' : case 'm':
				{
					sum += 13;
					break;
				}	
				case  'N' : case 'n':
				{
					sum += 14;
					break;
				}
				case  'O' : case 'o':
				{
					sum += 15;
					break;
				}
				case  'P' : case 'p':
				{
					sum += 16;
					break;
				}
				case  'Q' : case 'q':
				{
					sum += 17;
					break;
				}
				case  'R' : case 'r':
				{
					sum += 18;
					break;
				}
				case  'S' : case 's':
				{
					sum += 19;
					break;
				}
				case  'T' : case 't':
				{
					sum += 20;
					break;
				}
				case  'U' : case 'u':
				{
					sum += 21;
					break;
				}	
				case  'V' : case 'v':
				{
					sum += 22;
					break;
				}
				case  'W' : case 'w':
				{
					sum += 23;
					break;
				}
				case  'X' : case 'x':
				{
					sum += 24;
					break;
				}
				case  'Y' : case 'y':
				{
					sum += 24;
					break;
				}	
				case  'Z' : case 'z':
				{
					sum += 25;
					break;
				}
				default: 
				{
					sum += 26;
					break;
				}
												
			}
			
		}
		
	cout<<name<<"'s numerology number is "<<sum<<endl;
	if(sum % 3 == 0 && sum % 2 == 0)
	{
			cout<<name<<" is a numerology name."<<endl;		
	}	
	else
	{
			cout<<name<<"  is  not a numerology name."<<endl;
			return 0;
	}
		
	return 0;
}
