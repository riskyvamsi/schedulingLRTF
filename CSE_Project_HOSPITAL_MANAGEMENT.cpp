#include <iostream>
using namespace std;
#include <fstream>
class Details
{
	public:
		string name;
		string status1;
		int age;
		long number;
		string address;
		long aadhar;	
}cust[10];
main()
{
	Details custadd[10];
	int select;
	cout<<"\t\t\t"<<"WELCOME TO THE Health club MANAGEMENT PORTAL";
	cout<<"\n\n\n\n\t\t Enter 1 for adding a health club member details  \n\t\t Enter 2 for deleting the old records \n\t\t Enter 3 for Adding new records of club members \n\t\t Enter 4 to know the status of club members payment \n\t\t Enter 5 to know to see all the details of club members";
	cin>>select;
	switch(select)
	{
		case 1:
			{
				ofstream data;
				data.open("data.txt",ios::out);
				int i;
				for(i=0;i<10;i++)
				{
					cout<<"\n\t\tEnter the club member Name : ";
					getline(cin,cust[i].name);
					data<<cust[i].name;
					cout<<"\n\t\tEnter age of club member : ";
					cin>>cust[i].age;
					data<<cust[i].age;
					cout<<"\n\t\tEnter club member phone number : ";
					cin>>cust[i].number;
					data<<cust[i].number;
					cout<<"\n\t\tEnter your address : ";
					getline(cin,cust[i].address);
					data<<cust[i].address;
					cout<<"\n\t\tEnter Aadhar number : ";
					cin>>cust[i].aadhar;
					data<<cust[i].aadhar;
					cin>>cust[i].status1;
					data<<cust[i].status1;
				}
					data.close();
		    }
		case 2:
		{
			string status;
			cout<<"\n\n\nHi! Now search for the club member data and update his status by updating the old detail";
			cout<<"\n\nSearch for club member details by using his number";
			ifstream data1;
			data1.open("data.txt",ios::in);
			int j,number_s;
			cout<<"\n\nEnter the club member number you want to search : ";
			cin>>number_s;
			for(j=0;j<10;j++)
			{
				data1>>cust[j].number;
				if(cust[j].number==number_s)
				status="payment done";
				else
				status="pending";
			}
		cout<<"\n\n\t\tThe status is updated";
		cout<<status;
		data1.close();	
		}
		case 3:
		{
			cout<<"\n\n\t\tFIND HERE TO KNOW THE STATUS OF YOUR payment";
			cout<<"\n\n\t\tSearch for his number and fetch the status";
			string status;
			cout<<"\n\n\nHi! Now search for club member data and update his status by updating the record";
			cout<<"\n\nSearch for club member details by using his number";
			ifstream data1;
			data1.open("data.txt",ios::in);
			int j,number_s;
			cout<<"\n\nEnter the club member number you want to search : ";
			cin>>number_s;
			for(j=0;j<10;j++)
			{
				data1>>cust[j].number;
				if(cust[j].number==number_s)
				data1>>cust[j].status1;
				cout<<cust[j].status1;
			}
		cout<<"\n\n\t\tThe status is updated";
		cout<<status;
		data1.close();
		}
		case 4:
		{
			cout<<"\n\n\t\tWELCOME TO ADDING PORTAL YOU CAN ADD RECORDS HERE";
			ofstream data;
				data.open("data.txt",ios::ate);
				int i;
				for(i=0;i<10;i++)
				{
					cout<<"\n\t\tEnter the Club member Name : ";
					getline(cin,custadd[i].name);
					data<<custadd[i].name;
					cout<<"\n\t\tEnter club member age : ";
					cin>>custadd[i].age;
					data<<custadd[i].age;
					cout<<"\n\t\tEnter club member phone number : ";
					cin>>custadd[i].number;
					data<<custadd[i].number;
					cout<<"\n\t\tEnter your address : ";
					getline(cin,custadd[i].address);
					data<<custadd[i].address;
					cout<<"\n\t\tEnter Aadhar number : ";
					cin>>custadd[i].aadhar;
					data<<custadd[i].aadhar;
					cin>>custadd[i].status1;
					data<<custadd[i].status1;
				}
					data.close();
			
		}
		case 5:
		{
			cout<<"\n\n\t\tWELCOME TO VIEW ALL THE CLUB MEMBERS DETAILS";
			int num;
			cout<<"\n\n\t\tEnter 1 to view all the records of club member details";
			if(num==1)
			goto A;
			else
			cout<<"\n\n\t\tWrong Input";
			A:
				ifstream data1;
			    data1.open("data.txt",ios::in);
			    cout<<"\n\n\t\t";
			    int k;
			    for(k=0;k<10;k++)
			    {
			    	data1>>cust[k].name;
			    	data1>>cust[k].number;
			    	data1>>cust[k].address;
			    	data1>>cust[k].age;
			    	data1>>cust[k].status1;
			    	cout<<cust[k].name;
			    	cout<<cust[k].age;
			    	cout<<cust[k].number;
			    	cout<<cust[k].address;
			    	cout<<cust[k].status1;
				}
				for(k=0;k<10;k++)
			    {
			    	data1>>custadd[k].name;
			    	data1>>custadd[k].number;
			    	data1>>custadd[k].address;
			    	data1>>custadd[k].age;
			    	data1>>custadd[k].status1;
			    	cout<<custadd[k].name;
			    	cout<<custadd[k].age;
			    	cout<<custadd[k].number;
			    	cout<<custadd[k].address;
			    	cout<<custadd[k].status1;
				}
				
			
		}	
	}
}
