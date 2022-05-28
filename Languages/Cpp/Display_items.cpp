#include<iostream>
using namespace std;


class Items{
	
	
	private:
		int no_of_products;
		int index;
		int item_code[5];
		int item_price[5];
	public:
		Items(int n_o_p){ //Constructor
			no_of_products = n_o_p;
			index = 0;
		}
		void set_item_details(){
			if(index < 5){
				cout<<"Enter Item code: ";
				cin>>item_code[index];
				cout<<"Enter Item Price: ";
				cin>>item_price[index];
				index++; //Increment the iterator index
			}
			else
			{
				cout<<"Maximum item size reached which is 5."<<endl;
			}
			
		}
		
		void display_all_item_details(){
			cout<<endl<<"Your Item Details:"<<endl;
			for(int i = 0; i<index; i++)
				cout<<"Item code : "<<item_code[i]<<" and it's price: "<<item_price[i]<<endl;
		}
		
		void display_item_details(int f_item_code){
			bool isItem_found = false;
			for(int i = 0; i<index; i++)
			{
				if(f_item_code == item_code[i])
				{
					isItem_found = true;
						cout<<"Item Found! "<< item_code[i]<<" and it's Price is : "<<item_price[i]<<endl;
					break;
				}	
			}
			if(!isItem_found)
				cout<<" Item_code not found in stock.";
			
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
	int n_o_p;
	cout<<"Enter the number of products: "<<endl;
	cin>>n_o_p;
	Items it_obj(n_o_p);
	for(int i = 0; i<3; i++)
	{
		cout<<"Enter "<<i+1<<" item details: "<<endl;
		it_obj.set_item_details();
	}
	
	it_obj.display_all_item_details();
	
	int a_it_code;
	cout<<"Enter Item code to display the details: ";
	cin>>a_it_code;
	it_obj.display_item_details(a_it_code);
	
	int a_item_price;
	cout<<"Check the price and display it's item code: ";
	cin>>a_item_price;
	it_obj.display_item_code_for_a_price(a_item_price);
	
	
	
	
}
