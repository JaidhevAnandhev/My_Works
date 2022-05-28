#include<iostream>
using namespace std;
bool areAnagram (string str1, string str2)
{
	int n1 = str1.length();
	int n2 = str2.length();

	 if(n1 !=n2)

		return false;

	 sort(str1.begin(), str1.end());
	 sort(str2.begin(), str2.end());

	 for(int i =0; i<n1; i++)
	 {
		if(str1[i] = str2[i])
			return true;
		else:
			return false;
	 }
}
int main()
{
	string str1 = "silent"<<endl;
	string str2 = "listen"<<endl;
	if(areAnagram (str1, str2)
		cout<<"Both are anagram to each other"<<endl;
	else:
		cout<<"Both are not anageram of each other"<<enmdl;

	return 0;
}

