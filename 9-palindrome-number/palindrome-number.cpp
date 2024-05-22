class Solution {
public:
    bool isPalindrome(int x)
    {
      //int revnum=0;
      //int dupl=x;  //Store x in dup variable bec x is changing each time       getting  divided by 10
      if(x < 0) return false;
      long long revnum=0;
      long long dupl=x;
      while(x > 0)
      {
        int lastdigit=x%10;
        // x/=10;
         revnum=(revnum * 10)+ (lastdigit);
         x=x/10;
      } 
      if(revnum==dupl)
        return true;
        else
        return false;
     }
};