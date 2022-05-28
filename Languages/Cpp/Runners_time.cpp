#include<iostream>
#include<vector>
#include<sstream>
#include<string>
#include <bits/stdc++.h>
using namespace std;
int main()
{
		int no_of_runners;
		cout<<"Enter the number of runners :"<<endl;
		cin>>no_of_runners;
		if(no_of_runners > 5)
		{
				cout<<"Invalid number"<<endl;
				return 0;
		}
		string name_with_timings = "";
		string name_array[no_of_runners];
		float time_array[no_of_runners];
		
		int i = 0;
		for(i = 0; i<no_of_runners; i++)
		{
				cout<<endl<<"Enter the name with timings :"<<endl;
				cin>>name_with_timings;
				vector <string> result;
				stringstream s_stream(name_with_timings);
				while(s_stream.good())
				{
						string substr;
						getline(s_stream, substr, ',');
						result.push_back(substr);
				}
				
				cout<<"You have entered : "<<endl;
				for(int j = 0; j < result.size(); j++)
				{
					cout<<result.at(j)<<" ";
					if(j == 0 )	
						name_array[i] = result.at(j);  // Runner's name
					else if(j ==1)
					{
							stringstream ss;
							ss << result.at(j);
							ss >> time_array[i];  // Runner's time
					}
					
				}
				
				// Validate the time between 9 and 11
				if(time_array[i] < 8 || time_array[i] > 12)
				{
						cout<<endl<<"Invalid Time."<<endl;
						return 0;
				}
		}
		cout<<endl<<"You have entered : "<<endl;
		for(i = 0; i < no_of_runners; i++)
				cout<<"Name : "<<name_array[i]<<" "<<" and Time: "<<time_array[i]<<endl;
				
		// Get the maximum rep and count of repeated timings
		
		
			int max_rep = 0;
			float max_rep_time = 0;
			int j = 0;
		for(i = 0; i<no_of_runners; i++)
		{
			int count = 0;
		
			for( j= i+1; j < no_of_runners; j++)
			{
					if(time_array[i] == time_array[j])		
						count++;
			}	
			if(count > 0)
			{
				if(max_rep < count)
				{
						max_rep = count;
						max_rep_time = time_array[i];
				}
					
			}
		}
		cout<<"Names of Maximum same timing - "<<max_rep_time<<endl;
		for(i = 0; i < no_of_runners; i++ )
		{
			if(max_rep_time == time_array[i])
			{
					cout<<name_array[i]<<endl;		
			}	
		}				
	return 0;
}
