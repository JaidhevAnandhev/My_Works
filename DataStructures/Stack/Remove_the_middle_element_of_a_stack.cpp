#include<iostream>
#include<stack>
using namespace std;
void deleteMid(stack<char> &st, int n, int curr = 0)
{
	/* If stack is empty or they are traversed */
	if(st.empty() || curr == n)
		return; /* Comes out from the condition */
		
	/* Remove current item */
	char x = st.top();
	st.pop();
	
	/* Remove other items */
	deleteMid(st, n, curr + 1);
	
	/* Put all items except the midde value */
	if(curr != n/2)
		st.push(x);
}

int main()
{
	stack <char> st;
	
	/* Push the elements into the stack */
	st.push('1');
	st.push('2');
	st.push('3');
	st.push('4');
	st.push('5');
	st.push('6');
	st.push('7');
	
	deleteMid(st, st.size());
	
	while(!st.empty())
	{
		char p = st.top();
		st.pop();
		cout<< p << " ";
	}
	return 0;


}

