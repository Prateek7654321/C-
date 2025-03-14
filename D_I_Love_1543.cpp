#include <bits/stdc++.h>
using namespace std;
void applyops(int i, int j, vector<vector<char>> &v, string direction, char no, int &ans, bool &flag)
{
    int rows = v.size();
    int cols = v[0].size();
    if (v[i][j] == no && no == '3')
    {
        
        ans++;
        flag = true;
        v[i][j] = '.';
        return;
    }
    else if (v[i][j] == no)
    {
        char agla = '.';
        if (no == '5')
            agla = '4';
        else
            agla = '3';
        if (direction == "right")
        {
            if (j + 1 < cols)
            {
                applyops(i, j + 1, v, "right", agla, ans, flag);
                if (flag == true)
                {
                    v[i][j] = '.';
                    return;
                }
            }
            if (i + 1 < rows)
            {
                applyops(i + 1, j, v, "down", agla, ans, flag);
                if (flag == true)
                {
                    v[i][j] = '.';
                    return;
                }
            }
        }
        else if (direction == "left")
        {
            if (j - 1 >= 0)
            {
                applyops(i, j - 1, v, "left", agla, ans, flag);
                if (flag == true)
                {
                    v[i][j] = '.';
                    return;
                }
            }
            if (i - 1 >= 0)
            {
                applyops(i - 1, j, v, "up", agla, ans, flag);
                if (flag == true)
                {
                    v[i][j] = '.';
                    return;
                }
            }
        }
        else if (direction == "up")
        {
            if (i - 1 >= 0)
            {
                applyops(i - 1, j, v, "up", agla, ans, flag);
                if (flag == true)
                {
                    v[i][j] = '.';
                    return;
                }
            }
            if (j + 1 < cols)
            {
                applyops(i, j + 1, v, "right", agla, ans, flag);
                if (flag == true)
                {
                    v[i][j] = '.';
                    return;
                }
            }
        }
        else if (direction == "down")
        {
            if (j - 1 >= 0)
            {
                applyops(i, j - 1, v, "left", agla, ans, flag);
                if (flag == true)
                {
                    v[i][j] = '.';
                    return;
                }
            }
            if (i + 1 < rows)
            {
                applyops(i + 1, j, v, "down", agla, ans, flag);
                if (flag == true)
                {
                    v[i][j] = '.';
                    return;
                }
            }
        }
    }
    else
        return;
    return;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<vector<char>> v(n, vector<char>(k, '.'));
        int a = 0;int op=0;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            for (int j = 0; j < s.size(); j++)
            {
                v[a][j] = s[j];
            }
            a++;
        }
        int ans = 0;
        for (int i = 0; i < v.size(); i++)
        {
            for (int j = 0; j < v[i].size(); j++)
            {
                if (v[i][j] == '1')
                {
                    bool flag = false;
                    if (j + 1 < k)
                        applyops(i, j + 1, v, "right", '5', ans, flag);
                    if (j - 1 >= 0)
                        applyops(i, j - 1, v, "left", '5', ans, flag);
                    if (i - 1 >= 0)
                        applyops(i - 1, j, v, "up", '5', ans, flag);
                    if (i + 1 < n)
                        applyops(i + 1, j, v, "down", '5', ans, flag);
                        string abs="";
                        abs+='1';
                        if(j-1>=0&&v[i][j-1]=='5')
                        abs+='5';
                        if(j-2>=0&&v[i][j-2]=='4')
                        abs+='4';
                        if(j-3>=0&&v[i][j-3]=='3')
                        abs+='3';

                        if(abs=="1543")
                        op++;


                }
            }
        }
        ans-=op;
        cout<<op<<" ";
        cout << ans << endl;
    }
}