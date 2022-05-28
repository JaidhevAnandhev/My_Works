#include<iostream>
using namespace std;
class  Employee{
	
	private:
		int emp_id;
		string emp_name;
		int emp_age;
		int doj;
		float salary;
		float bonus;
		string dep_name[5];
		int dep_age[5];
		int index;
		float *HRA_pointer;
		
		// pointer to point another employee
		Employee *another_Employee;
	
	public:
		Employee(){ // Constructor
			index = 0;
			another_Employee = NULL;
		}
		
		~Employee(){ // Destructor
			HRA_pointer;
			index = 0;			
		}
		
		void set_emp_details(){
			
			cout<<"Enter the Employee Id: ";
			cin>>emp_id;
			cout<<"Enter the Employee name: ";
			cin>>emp_name;
			cout<<"Enter the Employee age: ";
			cin>>emp_age;
			cout<<"Enter the date of joining: ";
			cin>>doj;
			cout<<"Enter the Employee salary: ";
			cin>>salary;
			cout<<"Enter the House Rent Allowance: ";
			
			HRA_pointer  =  new float;			
			cin>>*HRA_pointer;
			
			char c;
			cout<<"Do you have any dependence : If yes Press Y/y else N/n: ";
			cin>>c;
			while(c == 'Y' || c == 'y')
			{
				if(index < 5){
					cout<<"Enter the dependent : "<<index+1<<" name: ";
					cin>>dep_name[index];
					cout<<"Enter the dependent : "<<index+1<<" age: ";
					cin>>dep_age[index];
					index++;
					cout<<"Do you have dependent if Yes (Y/y) else No(N/n) ";
					cin>>c;
				}
				else{
					cout<<"The number exceeds the limit."<<endl;
					break;
				}
					
			}
		}
		
		void calculate_bonus(){
			if(salary < 10)
				bonus = salary * (0.1);
			else if(salary > 10 && salary <=20)
				bonus = salary * (0.2);
			else if(salary > 21)
				bonus = salary * (0.3);
		}
		
		void display_emp_details(){
			cout<<"Employee Id: "<<emp_id<<endl;
			cout<<"Employee name: "<<emp_name<<endl;
			cout<<"Employee age: "<<emp_age<<endl;
			cout<<"Date of joining: "<<doj<<endl;
			cout<<"Employee salary: "<<salary<<endl;
			cout<<"Employee Bonus: "<<(bonus + salary)<<endl;
			cout<<"Employee House Rent Allowance: "<<*HRA_pointer<<endl;
			for(int i = 0; i<index; i++)
			{
				cout<<"Dependent "<<i+1<<" name: "<<dep_name[i]<<endl;
				cout<<"Dependent "<<i+1<<" age: "<<dep_age[i]<<endl;
			}	
		}
		
		 void  point_at_next(Employee *where_to_point){
		 	another_Employee = where_to_point;
		 	cout<<endl<<"Another Employees name: "<<another_Employee->emp_name<<endl;
		 }
		 
		 Employee *get_next(){
		 	return another_Employee;
		 }

};
int main()
{
	//pointer object
	Employee *jaidhevPointer_Obj;
//	jaidhevPointer_Obj = new Employee;
//	cout<<"Entering the details of the employee."<<endl;
//	jaidhevPointer_Obj->set_emp_details();
//	jaidhevPointer_Obj->calculate_bonus();
//	cout<<endl;	
//	jaidhevPointer_Obj->display_emp_details();
	
	// Pointer points to another object
//	Employee jai_obj;
//	jaidhevPointer_Obj = &jai_obj;
//	cout<<"Entering the details of the employee."<<endl;
//	jaidhevPointer_Obj->set_emp_details();
//	jaidhevPointer_Obj->calculate_bonus();
//	cout<<endl;	
//	jaidhevPointer_Obj->display_emp_details();
	
	Employee anandhev_obj;
	cout<<"Entering the details of the employee."<<endl;
	anandhev_obj.set_emp_details();
	anandhev_obj.calculate_bonus();
	
	// Pass the object to a private pointer
	anandhev_obj.point_at_next(&anandhev_obj);
	
	// Display the details of private  another pointer of another employee
	jaidhevPointer_Obj = &anandhev_obj;  //  initialise pointer
	jaidhevPointer_Obj = jaidhevPointer_Obj->get_next();
	jaidhevPointer_Obj->display_emp_details();
	
	
	// Ordinary Object	
//	Employee anandhev_obj;
//	cout<<"Entering the details of the employee."<<endl;
//	anandhev_obj.set_emp_details();
//	anandhev_obj.calculate_bonus();
//	anandhev_obj.display_emp_details();
	return 0;
}
