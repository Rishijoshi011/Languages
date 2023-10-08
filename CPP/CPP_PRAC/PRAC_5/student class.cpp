#include<iostream>
	using namespace std;
	class student
{
	int id,i,marks[3],sum;
	float per;	
	
	public:
	 void get()
	{
		cout << "Enter your id, and marks(3)" << endl;
		cin >> id;
		 for(i=0;i<3;i++)
		{
			cin >> marks[i];
		}	
	}
	 void print()
	{
		cout << "ID : "<< id  << endl;
		 for(i=0; i<3;i++)
		{
			sum+=marks[i]; 
		}
		for(i=0; i<3;i++)
		{
			cout << marks[i] << endl; 
		}
	}
	 void percentage()
	{
		cout << "Per : " << sum/3 << endl;		
	} 
};
	int main()
{
	system("COLOR 0B");
	student st;
	st.get();
	st.print();
	st.percentage();
}
