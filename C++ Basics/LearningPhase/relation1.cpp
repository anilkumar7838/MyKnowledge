#include<iostream>
#include<math.h>
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
		
		
		bool reflec()
		{
			
			int count=0;
			for(int i=0;i<n;i++)
			{
			  for(int j=0;j<n;j++)
			 {
				if(i==j)
				{
					if(a[i][j]==1)
					count++;
				}
			 }
		     }
			if(count==c){	
			
			return true;
			}
			else{
			return false;
		    }
		}
		
		
		
		bool sym()
		{
			int count=0;
			for(int i=0;i<n;i++)
			{
			for(int j=0;j<n;j++)
			{
				if(a[i][j]==1)
				{
				 if(a[i][j]==a[j][i])
				 count+=count;
				 else
				 count++;
			     }
			}
		     }
			if(count==0){
			return true;
			 }
		     else{
		      return false;
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
          		if(a[i][j]==1&temp.a[i][j]>0){
          		count++;
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
	  
	  
    bool equivalence(){
    	if(reflec()&sym()&trans()){
    		return true;
	    }
	    else
	    return false;
    }
    
    
    			
    bool poset()
    {
    		if(reflec()&Antisymmetric()&trans()){
    		return true;
	    }
	    else
	    return false;
    }
    
    
    int check(){
    	if(equivalence())
    	return 1;
    	if(poset())
	return 2;
	else
	return 0;
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
	do{
	   cout<<"\t\t	*****    MENU   *****\n"
	    <<"\t\t    1.TO CHECK REFLEXIVITY\n"
	    <<"\t\t    2.TO CHECK SYMMETRICITY\n"
	    <<"\t\t    3.TO CHECK TRANSIVITY\n"
	    <<"\t\t    4.TO CHECK EQUIVALENCE\n"
	    <<"\t\t    5.TO CHECK ANTISYMMETRIC\n"
	    <<"\t\t    6.TO CHECK POSET\n"
	    <<"\t\t    7.TO CHECK EQUIVALENCE//POSET//NONE \n"<<endl;
	    cout<<"Enter Your Choice:";
	    cin>>t;
	    cout<<endl;
	switch(t)
	{
		case 1: {
			        if(r.reflec()){
			        	cout<<"RELATION IS REFLEXIVE"<<endl;
				   }
				   else
				   cout<<"RELATION IS NOT REFLEXIVE"<<endl;
		          	break;
		        }
		case 2: {
			       if(r.sym()){
			        	cout<<"RELATION IS SYMMETRIC "<<endl;
				   }
				   else
				   cout<<"RELATION IS NOT SYMMETRIC"<<endl;
				 break;
		        } 
		case 3: {
			       if(r.trans()){
			        	cout<<"RELATION IS TRANSITIVE"<<endl;
				   }
				   else
				   cout<<"RELATION IS NOT TRANSITIVE"<<endl;
				 break;
		        } 
		case 4:{
			     if(r.equivalence()){
			        	cout<<"RELATION IS EQUIVALENT"<<endl;
				   }
				   else
				   cout<<"RELATION IS NOT EQUIVALENT"<<endl;
			   break;
		       }
		case 5:{
			     if(r.Antisymmetric()){
			        	cout<<"RELATION IS ANTISYMMETRIC"<<endl;
				   }
				   else
				   cout<<"RELATION IS NOT ANTISYMMETRIC"<<endl;
			   break;
		       }
		case 6:{
			     if(r.poset()){
			        	cout<<"RELATION IS POSET"<<endl;
				   }
				   else
				   cout<<"RELATION IS NOT POSET"<<endl;
			   break;
		       }	  
		case 7:{
			     if(r.check()==1){
			        	cout<<"RELATION IS EQUIVALENT"<<endl;
				   }
				
				if(r.check()==2){
			        	cout<<"RELATION IS POSET"<<endl;
				   }
				   
                    if(r.check()==0){
			        	cout<<"RELATION IS NONE"<<endl;
				   }
 
			   break;
		       }	
			  	  	   	          
			default:  		cout<<"\nWRONG CHOICE!!";
	}
	    cout<<"\nDo you want to continue(y/n):";
		cin>>ch;
		}while(ch=='y'||ch=='Y');
	
	return 0;
}
