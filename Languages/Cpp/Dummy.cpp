#include<iostream>
using namespace std;

class Items{
	private:
		int item_code[5];
		int item_price[5];
		int index;
	
	public:
		Items(){
			index = 0;
		}
		void set_item_details()
		{
			if(index < 5)
			{
				cout<<"Enter the Item code: ";
				cin>>item_code[index];
				cout<<"Enter the Item Price: ";
				cin>>item_price[index];
				index++;
			}
			else
				cout<<"No of items has exceeded the limit."<<endl;
		}
		void display_item_details(int f_item_code)	
		{
			bool is_Item_Found = false;
			for(int i = 0; i<index; i++)
			{
				if(f_item_code == item_code[i]){
					is_Item_Found = true;
					cout<<"Item Found! "<< item_code[i]<<" and it's Price is : "<<item_price[i]<<endl;
					break;
				}
			}
			if(!is_Item_Found)
				cout<<"Item not found. "<<endl;
		}
		
		void display_item_code_for_a_price(int f_price){
			bool is_price_found = false;
			for(int i = 0; i<index; i++){
				if(f_price == item_price[i])
				{
					is_price_found = true;
					cout<<"Price Found ! "<<item_price[i]<<" and it's item code is "<<item_code[i]<<endl;
					break;
				}
				
			}
			if(!is_price_found)
				cout<<"Price not found."<<endl;
		}	
};

int main(){
	Items it_obj;
	for(int i = 0; i<3; i++)
	{
		cout<<endl<<"Enter "<<i+1<<" item details: "<<endl;
		it_obj.set_item_details();
	}
	int a_item_code;
	cout<<"Check and display the item details of item: ";
	cin>>a_item_code;
	it_obj.display_item_details(a_item_code);
	
	
	int a_item_price;
	cout<<"Check the price and display it's item code: ";
	cin>>a_item_price;
	it_obj.display_item_code_for_a_price(a_item_price);
	
	return 0;
	
}
