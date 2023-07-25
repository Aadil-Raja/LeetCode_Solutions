class Solution {
public:
    bool isHappy(int n) {
        int sum=0;
        vector<int> my_vector;
        

        do
        {
            sum=0;
            while(n>0)
            {
                sum=sum+((n%10)*(n%10));
               n=n/10;
            }
            n=sum;
          
            if(sum==1)
            {
                return true;
                break;
            }
           else if (std::find(my_vector.begin(), my_vector.end(), sum) != my_vector.end()) {
         return false;
}     
      else
      {
            my_vector.push_back(sum);
      }
            
        }while(1);
        
    }
};