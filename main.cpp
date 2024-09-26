#include<bits/stdc++.h>

using namespace std;

int main()
{

	long long numbers,number,max = 0;

	cin>>numbers;

	long long arr[numbers];

	for(int i = 0;i<numbers;i++)
	{

		cin>>number;

		while(number%2 == 0)
		{

			max++;

			number/=2;

		}

		arr[i] = max;

		max = 0;

	}

	max = arr[0];

	for(int j = 0;j<numbers;j++){

		if(max<arr[j]){

			max = arr[j];

		}

	}

	cout<<max<<endl;
	return 0 ;

}
