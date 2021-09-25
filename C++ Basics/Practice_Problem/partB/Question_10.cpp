// Program for creating class triangle with overloading

#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
class triangle
{
    float s1,s2,base,height;
    double area;
public:
    triangle()
    {
        s1=s2=base=height=0.0;
        area=0.0;
    }
    triangle(float s1,float s2,float b)
    {
        cout<<"Initialising the three sides\n";
        this->s1=s1;
        this->s2=s2;
        this->base=b;
        height=0.0;
        area= AREA(s1,s2,b);
        
    }
    triangle(float h,float b)
    {
        cout<<"Initialising the base and height\n";
        this->height=h;
        this->base=b;
        s1=s2=0.0;
        area = AREA(h,b);
    }
    triangle(float k)
    {
        cout<<"Inside equilateral triangle constructor\n";
        s1=s2=base=k;
        height=0.0;
        area=AREA(s1);
    }
    double AREA(float s1,float s2,float s3)
    {
        cout<<"Calculating  area with three sides given\n";
        double x;
        float sp=s1+s2+s3;
        sp/=2;
        x=sqrt((sp)*(sp-s1)*(sp-s2)*(sp-s3));
        return x;
    }
    double AREA(float s1,float s2)
    {
        cout<<"Calculating  area with base and height given\n";
        area=s1*s2*(0.5);
        return area;
    }
    double AREA(float s1)
    {
        cout<<"Calculating  area of equilateral triangle\n";
        area=(sqrt(3)/4)*s1*s1;
        return area;
    }
    void show()
    {
        if(height)
        {
            cout<<"Height and Base of triangle are: "<<height<<" "<<base;
        }
        else
        {
           cout<<"Sides of triangle are:"<<s1<<" "<<s2<<" "<<base<<"\n";
        }
        cout<<"Calculated area is:"<<area<<"\n";
    
    }
    triangle operator=(triangle t1)
    {
        cout<<"Assigning the values to another object\n";
        this->s1=t1.s1;
        this->s2=t1.s2;
        this->base=t1.base;
        this->height=t1.height;
        area=t1.area;
        
    }
    bool operator==(triangle& t2)
    { 
    	bool isEqual = false;
        cout<<"Compairing:";
        if(this->area==t2.area)
        {
            isEqual = true;
        }    
        
        return isEqual;
        
    }
    
};
int main()
{
    triangle tr;
    float base=0,height=0,side=0,area;
    int n=0;
    cout<<"\t\tMENU FOR CALCULATING TRIANGLE ARE WITH DIFFERENT CHOICES\t\t";
	cout<<"\t\t1.Where all sides are  given\n"
		<<"\t\t\t2.Where height and base are given\n"
		<<"\t\t\t3.For equilateral triangle\n"
		<<"\t\t\t4.By overloaded assignment operator\n"
		<<"\t\t\t5.Compairing the two triangle's areas\n";
	cout<<"\t\t\tEnter your choice(1-5):";
    cin>>n;
    switch(n)
    {
        case 1:
        cout<<"Enter the three sides of triangle: \n";
        cin>>base;
        cin>>height;
        cin>>side;
        area=tr.AREA(base,side,height);
        cout<<"Area of traingle is: \n"<<area;
        break;
        case 2:
        cout<<"Enter height and base of triangle: \n";
        cin>>height;
        cin>>base;
        area=tr.AREA(base,height);
        cout<<"Area of traingle is: \n"<<area;
        break;
        case 3:
        cout<<"Enter the side of equilateral triangle: \n";
        cin>>side;
        area=tr.AREA(side);
        cout<<"Area of traingle is: \n"<<area;
        break;
        case 4:
        	{
        		cout<<"Enter the three sides...\n";
                float a,b,c;
                cin>>a>>b>>c;
                triangle t(a,b,c);
                triangle x=t;
                x.show();
                break;
			}
        case 5:
        	{
        		float a,b,c;
                cout<<"Enter the 3 sides of the first triangle...\n ";
               cin>>a>>b>>c;
               triangle t4(a,b,c);
               cout<<"Enter the 3 sides of the second triangle...\n";
               cin>>a>>b>>c;
               triangle t5(a,b,c);
               if(t4==t5)
               {
                    cout<<"Both triangles are equal\n";
               }
               else
               {
                    cout<<"Both triangles are not equal\n";
               }
               break;
			}
        default:
       cout<<"Your choice is invalid\n";
    }
        return 0;
}

