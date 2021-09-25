#include<iostream>
using namespace std;
class relation
{
	private:
		int size,n,c;
		int **a;
		int *b,*d;
	
	
	public:
	relation()
	{
		size=0;
		n=0;	
		c=0;
	}
	
	
		
	relation(int x,int s)
	{
		a=new int*[x];
		for(int i=0;i<x;i++)
		{
		  a[i]=new int[x];
          }
		size = s;
		n=x;
		b=new int[x];
		d=new int[2*s];
		}
	
	
		
	void input()
     {
	  cout<<"enter the element in a set"<<endl;

			for(int i=0;i<n;i++)
			{
				cin>>b[i];
			}
		rem_dupl();			
     }
	
	
	 
			void display()
		   {
			cout<<"\n{ ";
			for(int i=0;i<n;i++)
			{
				cout<<b[i];
				if(i<n-1)
				{
					cout<<",";
				}
			}
			cout<<" }";
			cout<<"\nCARDINALITY OF SET IS:"<<n<<endl;	
	        }
	
	
	
	void input1()
	{
	     cout<<"enter the ordered pair"<<endl;
            for(int i=0;i<2*size;i++)
           {
	    	       cin>>d[i];
           }	
     
	}	
	
	
	
		
	void display1()
	{
		int i=0;
		cout<<"{";
      	for(i=0;i<size*2;i++)
	    {
		if(i%2==0)
		{
			cout<<"("<<d[i]<<",";
		}
		else if(i%2!=0)
		{
			cout<<d[i]<<"),";
		}
	    }
	        cout<<"\b}"<<endl;
	}
	
	
	
	
		void rem_dupl()
		{
			for(int i=0;i<n-1;i++)
			{
				for(int j=i+1;j<n;j++)
				{
					if(b[i]==b[j])
					{
						for(int k=j;k<n;k++)
						b[k]=b[k+1];
						n--;
						i--;
					}
				}
			}
			c=n;
	     }
	     
	     
	     
	void matrix()
	{
         
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
					a[i][j]=0;
			}
		}	
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
			for(int k=0;k<=2*size;k+=2)
				{
				  if((i+1)==d[k]&&(j+1)==d[k+1])
				  {
					a[i][j]=1;
				  }
				}
			}
		}
		displayM();		
		}
		
		
		void displayM()
		{
		     cout<<"Matrix Notation is:"<<endl;
			for(int i=0;i<c;i++)
			{
			for(int j=0;j<c;j++)
			{
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		     }	
		}
	
	
	
	  bool trans()
	  {
	  	relation temp(n,size);
	  	 for(int i=0;i<n;i++)
           {
            for(int j=0;j<n;j++)
            {
             temp.a[i][j]= 0;
              for(int k=0;k<n;k++)
              {
                temp.a[i][j]+=a[i][k]*a[k][j];    
              }
            } 
		    
          }
          
          int count=0;
          for(int i=0;i<n;i++)
          {
          	for(int j=0;j<n;j++)
          	{
          		if(a[i][j]==1&&temp.a[i][j]>0){
          		count++;
          		cout<<count<<endl;
				}
			}
		}
          if(count==size){
         		return true;
		}
          else{
         	return false;
		}
	  }
	  
	  
	bool Antisymmetric()
	  {
	  	int count=0;
         for(int i=0;i<n;i++)
	  	{
	  		for(int j=0;j<n;j++)
	  		{
	  			if(a[i][j]==1&&a[j][i]==1)
	  			{
	  				if(i==j)
	  				{
	  					count=0;
					  }
					  else{
					  return false;
					  }
				  }
			  }
		  }
		  if(count==0)
		  return true;
	  }
	void  check()
	{
		if(trans()){
			        	cout<<"RELATION IS TRANSITIVE"<<endl;
				   }
				   else
				   cout<<"RELATION IS NOT TRANSITIVE"<<endl;
				   
		 if(Antisymmetric()){
			        	cout<<"RELATION IS ANTISYMMETRIC"<<endl;
				   }
				   else
				   cout<<"RELATION IS NOT ANTISYMMETRIC"<<endl;			   	   
	}
    
    
};
int main()
{
	int n,size,t;
	char ch;
	cout<<"enter the set cardinality"<<endl;
	cin>>n;
	cout<<"enter the number of pair in a relation"<<endl;
	cin>>size;
	relation r(n,size);
	
	r.input();
	r.display();
	r.input1();
	r.display1();
	r.matrix();
	r.check();
	
	return 0;
}
