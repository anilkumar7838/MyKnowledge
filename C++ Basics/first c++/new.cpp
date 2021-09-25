#include <iostream>
using namespace std;
int gcdrecursive(int num1, int num2)
{
   if (num1 >= num2)
   {
      num1 = num1 % num2;
      if (num1 == 0)
         return num2;
      else
      {
         gcdrecursive(num1, num2);
      }
   }
   else
   {
      num2 = num2 % num1;
      if (num2 == 0)
         return num1;
      else
      {
         gcdrecursive(num1, num2);
      }
   }
}
int gcditerative(int num1, int num2)
{
   while (num1 != num2)
   {
      if (num1 > num2)
      {
         num1 = num1 - num2;
      }
      else
      {
         num2 = num2 - num1;
      }
   }
   return num1;
}
int factorialrecursive(int num)
{
   if (num == 1)
      return 1;
   else
   {
      return num * factorialrecursive(num - 1);
   }
}
int factorialiterative(int num)
{
   if (num == 0)
   {
      return 1;
   }
   else
   {
      int ans = 1;
      while (num != 0)
      {
         ans = ans * num;
         num--;
      }
      return ans;
   }
}
int powerrecursive(int num1, int num2)
{
   int ans = 1;
   if (num2 == 0)
   {
      return 1;
   }
   else
   {
      ans = num1 * powerrecursive(num1, num2 - 1);
      return ans;
   }
}
int poweriterative(int num1, int num2)
{
   int ans = 1;
   while (num2 > 0)
   {
      ans = ans * num1;
      num2--;
   }
   return ans;
}
// int fibonaccirecursive(int num, int a, int b,int temp,int ans )
// {
//    if (num ==1)
//       return ans;
//    else
//    {
//       cout<<" "<<temp;
//       temp = a + b;
//       a = b;
//       b = temp;
//       ans=ans+temp;
//       fibonaccirecursive(num-1,a,b,temp,ans);
//    }
// }
int fibonaccirecursive(int num, int v1, int v2)
{
   if(num==0)
   {
      cout<<num;
      return num;

   }
   else if(num==1){
      cout<<0<<" "<<1;
      return num;
   }
   if (num>2){
      cout<<v1+v2<<" ";
      return fibonaccirecursive(num-1,v2,v1+v2);
   }
}
int fibonacciiterative(int num)
{
   int a = 0, b = 1, temp, ans = 1, i;
   if (num == 1)
   {
      cout << a;
      return a;
   }
   else if (num == 2)
   {
      cout << a << " " << b << " ";
      return a + b;
   }
   else if (num > 2)
   {
      cout << a << " " << b;
      for (i = 0; i < (num - 2); i++)
      {
         temp = a + b;
         ans = ans + temp;
         cout << " " << temp;
         a = b;
         b = temp;
      }
      return ans;
   }
}
int main()
{
   int a, b, num1, num2, num, ans;
   cout << "enter the command\nenter 1 for gcd\nenter 2 for factorial\nenter 3 for power\nenter 4 for fibonacci" << endl;
   cin >> a;
   // gcd factorial power fibonacci
   switch (a)
   {
   case 1:
      cout << "enter 1 for recursive approach\n2 for iterative approach" << endl;
      cin >> b;
      int num1, num2;
      cout << "enter the number whose gcd is to be calculated:" << endl;
      cin >> num1 >> num2;
      switch (b)
      {
      case 1:
         ans = gcdrecursive(num1, num2);
         cout << "the gcd is " << ans << endl;
         break;
      case 2:
         ans = gcditerative(num1, num2);
         cout << "the gcd is " << ans << endl;
         break;
      default:
         cout << "command invalid";
      }
      break;
   case 2:
      cout << "enter 1 for recursive approach\n2 for iterative approach" << endl;
      cin >> b;
      cout << "enter the number:" << endl;
      cin >> num;
      switch (b)
      {
      case 1:
         ans = factorialrecursive(num);
         cout << "the factorial of " << num << "is " << ans << endl;
         break;
      case 2:
         ans = factorialiterative(num);
         cout << "the factorial of " << num << "is " << ans << endl;
         break;
      default:
         cout << "command invalid";
      }
      break;
   case 3:
      cout << "enter the number:";
      cin >> num1;
      cout << "enter the power:";
      cin >> num2;
      cout << "enter 1 for recursive approach\n2 for iterative approach" << endl;
      cin >> b;
      switch (b)
      {
      case 1:
         ans = powerrecursive(num1, num2);
         cout << "the answer is " << ans << endl;
         break;
      case 2:
         ans = poweriterative(num1, num2);
         cout << "the answer is " << ans << endl;
         break;
      default:
         cout << "command invalid";
      }
      break;
   case 4:
      cout << "enter the number of terms to printed of fibonacci sequence:";
      cin >> num;
      cout << "enter 1 for recursive approach\n2 for iterative approach" << endl;
      cin >> b;
      switch (b)
      {
      case 1:
         ans = fibonaccirecursive(num,0,1);
         // cout << "\nthe sum of series is:" << ans;
         break;
      case 2:
         ans = fibonacciiterative(num);
         cout << "\nthe sum of series is:" << ans;
         break;
      default:
         cout << "command invalid";
      }
      break;
   default:
      cout << "command invalid!!!";
   }

   return 0;
}