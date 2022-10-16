//Sum of the Odd Numbers #1

#include <iostream>

using namespace std;

int main()
{
	int n,i,sum=0;
	
	cout << "Enter the limit of the Odd Numbers: ";
	cin >> n;
	
	cout << "Odd numbers" << endl;
	for(i=0;i<n;i++){
		if(i%2!=0){
			cout << i << ", ";
			sum+=i;
		}
	}
	
	cout << "\b\b " << endl << "Sum of Odd Numbers between 0 and " << n << " = " << sum;
	
	return 0;
}

