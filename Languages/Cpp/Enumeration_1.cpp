#include<iostream>
using namespace std;

// Comment the cases that you dont use while executing the program
// except the case that you execute comment otherss

// CASE 1
enum week {
	Monday, Tuesday, Wednesday, Thursday, Friday = 2 , Saturday, Sunday = 7
};
int main()
{
	cout<<"Day is: "<<Sunday<<" "<<Tuesday<<" "<<Friday;
	return 0;
}

// CASE 2
enum Cars{
	Maruti = 120, Hyundai = 130, Toyota = 150, Tesla = 200
};

int main()
{
	Cars speed;
	
	int speed_1 = Tesla;
	int speed_2 = Hyundai;
	if(speed_1 < speed_2){
		cout<<"Tesla has recorded the high speed of "<<speed_2<<" km/hr."<<endl;
	}
	else{
		cout<<"The car whose speed is "<<Hyundai<<" is the high speed vehicle."<<endl;
	}
	return 0;
}

// CASE 3
enum mobile {
	Camera_Quality = 3, Phone_Storage = 4 , battery
}; 

int main()
{
	float rating = Camera_Quality | Phone_Storage; // Adds the value assigned to it. Eg: 3+4=7
	cout<<"Rating: "<<rating<<endl;
	return 0;
}

// CASE 4
enum Colors{
	Red =1 , Blue, Green, Yellow, Indigo
};
int main()
{
	Colors select = Indigo;
	switch(select)
	{
		case Red:
			cout<<"Red colour."<<endl;
			break;
			
		case Blue:
			cout<<"Blue colour."<<endl;
			break;
			
		case Green:
			cout<<"Green colour."<<endl;
			break;
			
		case Yellow:
			cout<<"Yellow colour."<<endl;
			break;
			
		case Indigo:
			cout<<"Indigo colour."<<endl;
			break;
	}
	return 0;
}



