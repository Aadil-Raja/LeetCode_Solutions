class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        int temp=0;
        int length;
        int temp2;
        int i;
        int index;
        for(i=0;s[i]!='\0';++i)
        {
            if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&& s[i]<='Z')
            {
               index=i;
            }

        }
        for( i=0;i<=index;++i)
        {
           if(s[i]==' ')
           {
               ++count;
           }
        }
        temp2=i;
        for( i=0;s[i]!='\0';++i)
        {
            if(s[i]==' ')
            {
                ++temp;
                if(temp==count)
                {
                    length=temp2-(i+1);
                }

            }
        }
        return length;
    }
};