class Solution
{
public:
	void nextPermutation(vector<int> &nums)
	{
		int j;
        int i;
		for (j = nums.size() - 1; j > 0; j--)
		{
			bool flag = false;
            int a=0;
			for (i = j - 1; i >= 0; i--)
			{a++;
				if (nums[j] > nums[i])
				{
					int x = nums[j];
					nums[j] = nums[i];
					nums[i] = x;
					flag = true;
					break;
				}
				
			}
            if (flag == true)
					break;
			
		}
        vector<int> x;
			cout << j << " ";
            cout<<i;
			for (int k = i+1; k < nums.size(); k++)
			{
				x.push_back(nums[k]);
			}
			cout << x.size();
			sort(x.begin(), x.end());
			for (int i = 0; i < x.size(); i++)
				cout << " " << x[i] << "    ";
			int f = 0;
			for (int a = i+1; a < nums.size(); a++)
			{
				nums[a] = x[f];
				f++;
			}
			x.erase(x.begin(), x.end());
		
	}
};