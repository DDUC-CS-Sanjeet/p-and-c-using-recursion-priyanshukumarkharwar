/* Priyanshu kumar kharwar
   19HCS4041              */
#include<iostream>
using namespace std;
int permutation(int n, int r)
{
	if(r>1)
	{
		return n*permutation((n-1),(r-1));
	}
	if(r==0)
	{
		return n;
	}
}

int combination(int n, int r)
{
	if(r>1)
	{
		return 1.0*combination((n-1),(r-1))*n/r;
    }
	if(r==0)
	{
		return n;
	}
}

int main()
{
	int num;
	int form;
	int res1;
	int res2;
	int choice;
	cout<<"Press 1 for Permutation "<<endl;
	cout<<"Press 2 for combination "<<endl;
	cout<<"Enter your choice ";
	cin>>choice;
	try
	{
	   if(choice==1)
    	{
    		cout<<"Enter the number of elements ";
		    cin>>num;
		    cout<<"Enter the formation from elements ";
		    cin>>form;
			if(num>0&&form>0&&num>form)
			{
		     res1=permutation(num,form);
	         cout<<"Permutation of elements are ";
	         cout<<res1;
		    }
			else
			 {
				throw "Invalid Input";
			 }	
		}
		if(choice==2)
	    {
	    	cout<<"Enter the number of elements ";
		    cin>>num;
		    cout<<"Enter the formation from elements ";
		    cin>>form;
		    if(num>0&&form>0&&num>form)
			{
			   res2=combination(num,form);
		       cout<<"Combination of elements are ";
		       cout<<res2;	
		    }
			else
			 {
				throw "Invalid Input";
			 } 	
		}
	}
		catch(const char*ptr)
	       {
	        	cout<<ptr<<endl;
	         	cout<<"Error number:404 ";
	          	return 1;
	       }	    	
  return 0;
}
