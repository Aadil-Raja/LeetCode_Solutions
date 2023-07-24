class Solution {
public:
    bool isPalindrome(int x) {      
            if( x>=0)
            {
              int temp=x;
              long long  num=0; int digit;
              while(temp>0)
              {
                digit=temp%10;
                num=num*10+digit;
                temp=temp/10;
              }
              if(num==x)
              {
                  return true;
              }
             
            }
            else
           {
             return false;
           }
            return false;
            }
           
    
};
