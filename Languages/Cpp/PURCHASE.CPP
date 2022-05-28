#include<iostream.h>
#include<stdlib.h>
int order;
int Quantity;
int operation()
{
	cout<<"Please choose one of the following operations."<<endl;
	cout<<"1.To add a product:"<<endl;
	cout<<"2.To view the products"<<endl;
	cout<<"3.To sell a product."<<endl;
	cout<<"4.To check empty space."<<endl;
	cin>>order;
	return order;
}
struct product
{
	int no;
	char name[];
	float total;
};
int main()
{
	product arr[20];
	cout<<"Welcome to the products manager;"<<endl<<endl;

	begin:
	operation();

	switch(order)
	{
		case 1:
			cout<<"You have chosen to enter products selection."<<endl;

			for(int i = (1+Quantity); i <= 20; i++)
			{

				if(i>20)
				{
					cout<<"You have exceeded the limit"<<endl;
				}
				else
				{
					cout<<"Enter the name for product "<<i<<endl;
					cin>>arr[i].name;
					cout<<"Enter the number of products you want :"<<endl;
					cin>>arr[i].no;
					cout<<"Enter the amount"<<endl;
					cin>>arr[i].total;
					cout<<"Thamks for entering the information"<<endl;
					Quantity++;
					goto begin;
				}
			}
			break;

		case 2:
			cout<<"You have selected to view the products."<<endl;

			if(Quantity == 0)
			{
				cout<<"You have no products added"<<endl;
				goto begin;
			}
			else
			{

				for(i = (1+Quantity); i<=Quantity; i++)
				{
					cout<<"Product name :"<<arr[i].name<<endl;
					cout<<"Product Quantity :"<<arr[i].no<<endl;
					cout<<"Amount :"<<arr[i].total<<endl;
					Quantity++;
					goto begin;
				}
			}

			break;
		case 3:

			cout<<"You have chosen to sell a product."<<endl;
			break;

		case 4:
			{
				cout<<"You have chosen to see the empty space:"<<endl;
				cout<<"You have"<<100-Quantity<<"Empty spaces."<<endl;
				goto begin;
			}
			break;


		case 5:
			cout<<"You can Exit this program."<<endl;
			return 0;
	}
	return 0;
}

