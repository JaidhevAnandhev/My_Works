#include<iostream>
using namespace std;
// Class Declaration
const int m = 2;
class Items{
	public:
	int item_code[m];
	int item_price[m];
	int count = 0;
	
	public:
		void get_item();
		void display_sum();
		void display_item();
		//void remove();
};
void Items :: get_item(){
	cout<<"Enter the item code: "<<endl;
	cin>>item_code[m];
	cout<<"Enter the item price: "<<endl;
	cin>>item_price[count];
	count++;
}

void Items :: display_item(){
	cout<<"Your Item code: "<<item_code[m]<<endl;
	cout<<"Your Item Price: "<<item_price[count]<<endl;
}

void Items :: display_sum(){
	int sum = 0;
	for(int i = 0; i<count; i++){
		sum = sum + item_price[i];
		cout<<"Sum : "<<sum<<endl;
	}
}

void Items :: remove(){
	cout<<
}
//main() function stars
int main(){
	Items obj;

	int x;
		do
		{
			cout<<"enter an appropriate number: "<<endl;
			cout<<"1. Add an Item: "<<endl;
			cout<<"2.Display total value: "<<endl;
			cout<<"3.Display an item: "<<endl;
			cout<<"4.Display all item: "<<endl;
			cout<<"5.Quit"<<endl;
		switch(x){
			case 1:
				obj.get_item();
				break;
			case 2:
				obj.display_sum();
				break;
			//case 3:
				//obj.remove();
			case 4:
				obj.display_item();
				break;
			case 5:
				break;
				
		}
	}while(x!=5);
	return 0;
}
