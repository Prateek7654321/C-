class Solution
{
public:
    bool closeStrings(string word1, string word2)
    {
        vector<int> v1;
        vector<int> v2;
        int freq = 1;
        sort(word1.begin(), word1.end());
        sort(word2.begin(), word2.end());
        set<char> s1(word1.begin(), word1.end());
        set<char> s2(word2.begin(), word2.end());
        if (word1.size() != word2.size())
            return false;
        else
        {
            if (s1 == s2)
            {
                for (int i = 1; i < word1.size(); i++)
                {
                    if (word1[i] == word1[i - 1])
                        freq++;
                    else
                    {
                        v1.push_back(freq);
                        freq = 1;
                    }
                }
                v1.push_back(freq);
                freq = 1;
                for (int i = 1; i < word1.size(); i++)
                {
                    if (word2[i] == word2[i - 1])
                        freq++;
                    else
                    {
                        v2.push_back(freq);
                        freq = 1;
                    }
                }
                v2.push_back(freq);
            
            sort(v1.begin(), v1.end());
            sort(v2.begin(), v2.end());
            if (v1 == v2)
                return true;
            return false;
        }
        return false;
        }
    }
};