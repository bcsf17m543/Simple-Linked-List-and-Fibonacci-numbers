//#include<iostream>
//using namespace std;
//int Print_Rec(int n)
//{
//	if (n == 0 || n == 1)
//	{
//		
//       return 1;
//	}
//	
//	return Print_Rec(n - 1) + Print_Rec(n - 2);
//}
//void Print_Fibo(int n)
//{
//	int fib = 1;
//	int temp1 = 1;
//	int temp2 = 1;
//	
//	
//	for (int i = 0; i < n; i++)
//	{
//
//	
//		if (i  == 0 || i == 1)
//		{
//			cout << fib << " ";
//		}
//		else
//		{
//			fib = temp1 + temp2;
//			temp1 = temp2;
//			temp2 = fib;
//			cout << fib << " ";
//			/*temp1 = fib;
//			fib = fib + temp2;
//			cout << fib << " ";
//			temp2 = temp1;*/
//		}
//		
//		
//		
//	}
//}
//int main()
//{
//	
//		//cout << Print_Rec(8);
// Print_Fibo(8);
//	return 0;
//}