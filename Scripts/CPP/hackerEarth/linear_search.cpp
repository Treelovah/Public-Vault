/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int arrSize, num, i;
	int n{ 0 };
	cin >> arrSize;
	cin >> num;

	int arr[arrSize];
	for (i = 0; i < arrSize; i++) cin >> arr[i];
	for (i = 0; i < arrSize; i++) 
	{
		if (num == arr[i]) 
		{
			n = i+1;
		}
	}
	printf("%d",n);
	return 0;
}