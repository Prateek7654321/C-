#include <bits/stdc++.h>
using namespace std;
int c;

int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		int x;
		cin >> x;
		int arr[x];
		for (int i = 0; i < x; i++)
			cin >> arr[i];
		int a = 0;
		for (int i = 0; i < x; i++)
		{
			for (int j = i + 1; j < x; j++)
			{
				int b = arr[j] - arr[i];

				for (int k = i + 2; k < x; k++)
				{
					c = arr[k] - arr[j];

					if (c == b)
					{
						a++;
						break;
					}
				}
				if (c == b)
				{
					break;
				}
			}
		}

		if (a == 0)
			cout << "yes" << endl;
		if (a != 0)
			cout << "no" << endl;
	}

	return 0;
}
