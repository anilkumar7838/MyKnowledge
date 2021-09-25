/* Annie Bhalla
 19HCS4009
 B.Sc (H) Cs  */
 
 // Part B. (10) operator overloading
 
 #include<bits/stdc++.h> 
 using namespace std;
 
 class Triangle
    {
    	public:
    		float side1, side2,side3;
    
    		void operator=(Triangle T1);
    		 int operator==(Triangle T3);
    		 void input();
    		 void area();
    		 void show();
	};
	
	
void Triangle::input()
{
	cout<<"\n Enter sides of triangle ";
	cin>>this->side1>>this->side2>>this->side3;
}
	
void Triangle::show()
{
	cout<<"\n Sides of triangle are ";
	cout<<endl<<this->side1<<" "<<this->side2<<" "<<this->side3;
}


void Triangle::area()
{
	float area;
	float s;
     s= side1+side2+side3 / 2;
     area = sqrt( s*(s-side1)*(s-side2)*(s-side3));
     cout<<"\n Area of triangle is : "<<area;
}

void Triangle::operator=(Triangle T1)
{   
    
	this->side1=T1.side1;
	this->side2=T1.side2;
	this->side3=T1.side3;
//	return T1;
}

int Triangle::operator==(Triangle T3)
{
	if(this->side1==T3.side1 && this->side2==T3.side2 && this->side3==T3.side3)
	 return 1;
	else
	return 0;
}

int main()
{
	Triangle T,T1,T2,T3;
	T.input();
	T.area();
	T1.input();
	T2.input();
	if(T1==T2)
	 cout<<"\n Triangles are equal ";
	else
	 cout<<"\n Triangles are not equal ";
	T3.input();
	T3.show();
	T3=T;
	//T.show();
	T3.show();
	return 0;
	
}
