// Modified program using array
#include <iostream>
using namespace std;

// Store the greater element at 0th index
void findGreaterSmaller(int a, int b, int arr[])
{

	// Store the greater element at
	// 0th index of the array
	if (a > b) {
		arr[0] = a;
		arr[1] = b;
	}
	else {
		arr[0] = b;
		arr[1] = a;
	}
}

// Driver code
int main()
{
	int x, y;
	int arr[2];

	cout << "Enter two numbers: \n";
	cin >> x >> y;

	findGreaterSmaller(x, y, arr);

	cout << "\nThe greater number is " << arr[0] << " and the "
		"smaller number is " << arr[1];

	return 0;
}

// This code is contributed by sarajadhav12052009
