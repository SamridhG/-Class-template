#include<iostream>
#include<string>
using namespace std;
template<class X>
class Ad{
	X a;
	public:
		setdata(X b)
		{
			a=b;
		}
		X add(X A)
		{
			X c;
			c=a+A;
			return c;
		}
};
int main()
{
	cout<<"Enter The Number of elements you want:";
	int i,n;
	cin>>n;
	
	for(i=0;i<n;i++)
	{
	string a;
	cout<<"Enter the data type <int>,<float>,<string>:";
	cin>>a;
	if(a=="int")
	{
		Ad <int>B;
		int element1,element2;
		cout<<"Enter two element according to your "<<a<<" data type:";
		cin>>element1>>element2;
		B.setdata(element1);
		int c=B.add(element2);
		cout<<"the sum of your "<<a<<" data type is: "<<c<<endl;
	}
		if(a=="float")
	{
		Ad <float>B;
		float element1,element2;
		cout<<"Enter two element according to your "<<a<<" data type:";
		cin>>element1>>element2;
		B.setdata(element1);
		float c=B.add(element2);
			cout<<"the sum of your "<<a<<" data type is: "<<c<<endl;
	}
		if(a=="string")
	{
		Ad <string>B;
		string element1,element2;
			cout<<"Enter two element according to your "<<a<<" data type:";
		cin>>element1>>element2;
		B.setdata(element1);
		string c=B.add(element2);
			cout<<"the sum of your "<<a<<" data type is: "<<c<<endl;
	}
}
}
