class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string x=strs[0],y,z="";
        for(int i=0;x[i]!='\0';++i)
        {
            for(int j=1;j<strs.size();++j)
            { 
                y=strs[j];
                if(x[i]!=y[i] )
                {
                    if(i==0)
                    return "";
                    else
                    return z;
                }

            }
            z=z+x[i]; 
        }
        return z;
    }
};