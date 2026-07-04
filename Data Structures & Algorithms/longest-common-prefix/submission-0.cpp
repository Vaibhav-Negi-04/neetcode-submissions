class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string f=strs.front();
        string l=strs.back();
        int i=0;
        while(i<f.length() && i<l.length() && f[i]==l[i])
        {
            i++;
        }
        return f.substr(0,i);
    }
};