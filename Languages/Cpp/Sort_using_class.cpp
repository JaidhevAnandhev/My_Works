#include<iostream>
using namespace std;
// Class Declaration
class Sorting{
	private:
		int numbers[50];
	public:
		void get_Data_and_sort();
		void display_sort();
};

void Sorting :: get_Data_and_sort(){
	
	cout<<"Enter five numbers: "<<endl;
	int temp = 0;
	for(int i = 0; i<5; i++){
		
		cin>>numbers[i];
	}
	for(int i = 0; i<5; i++){
		
		for(int j = i+1; j<5; j++){
			
			if(numbers[i] > numbers[j]){
				
				temp = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = temp;
			}
		}
	}
}


void Sorting :: display_sort(){
	for(int k = 0; k<5; k++){
		cout<<"Numbers after sorting: "<<numbers[k]<<endl;
	}
}

//main() function starts
int main(){
	//Declare an object
	Sorting sort;
	sort.get_Data_and_sort();
	sort.display_sort();
	return 0;
}
