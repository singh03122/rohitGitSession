
   #include<iostream> 
using namespace std;

double long fact(int );
  
int main ()
{
	int num;
	cout <<"enter a positive integer :";
	cin >> num;
	cout <<" factorial of" <<   num  << "is"   <<     fact(num);
	return 0;
	
}
  double long fact(int n);
   {

   	if(n==0)
   	return 1;
   	return(n*fact(n-1));
   }
