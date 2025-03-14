#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int row, col;
        cin >> row >> col;
        vector<vector<int>> mat(row, vector<int>(col, 0));
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                int x;
                cin >> x;
                mat[i][j] = x;
            }
        }
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                vector<int>numbers;
                numbers.push_back(mat[i][j]);
                if (i - 1 >= 0)
                {
                   numbers.push_back(mat[i - 1][j]);
                }
                if (i + 1 < row)
                {
                   numbers.push_back(mat[i + 1][j]);
                }
                if (j - 1 >= 0)
                {
                   numbers.push_back(mat[i][j - 1]);
                }
                if (j + 1 < col)
                {
                   numbers.push_back(mat[i][j + 1]);
                }
                sort(numbers.begin(),numbers.end());
                if(numbers[numbers.size()-1]==mat[i][j])
                {
                    mat[i][j]=numbers[numbers.size()-2];
                }
                else
                continue;
            }
        }
         for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
              cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
      

    }
}