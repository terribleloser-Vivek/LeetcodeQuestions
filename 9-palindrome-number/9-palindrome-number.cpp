class Solution {
public:
    bool isPalindrome(int x) {
     uint num=x,rev_num=0,base=1,rem;
        if(x < 0)
            return false;
        
        while(num!=0)
        { 
          rem=num%10;
          num=num/10;
          rev_num=rev_num*10+rem;
          
            
        }
        
        if(x==rev_num)
        { return true;
        }
        else
        {
            return false;
        }
        
    }
};