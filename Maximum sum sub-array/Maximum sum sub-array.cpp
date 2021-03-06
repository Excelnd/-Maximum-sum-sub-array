// Maximum sum sub-array.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <algorithm>
#include <iostream>
#include <climits>
#include <cmath>

using namespace std;

int MSS(int arr[], int n)
{
	int ans = 0, sum = 0;
	for (int i = 0; i < n; ++i)
		ans = max(ans, arr[i]);

	if (ans < 0) return ans;

	ans = 0;
	for (int i = 0; i < n; ++i)
	{
		if (sum + arr[i] > 0)
			sum += arr[i];
		else
			sum = 0;
		ans = max(ans, sum);
	}
	return ans;


}

int main()
{
	int arr[] = { 3, -2, 5, -1 };
	cout << MSS(arr, 4) << "\n";
    return 0;
}

