class Solution {
public:
    bool isUgly(int n) {
    if(n==1||n==2||n==3||n==5) return true;
        if(n<=0)return false;
    for(int i=0;i<n;i++)
    {
      if(n%2==0)
      {n=n/2;}
        
      else if(n%3==0)
      {n=n/3;}
        
      else if(n%5==0)
      {n=n/5;}
        
      else
          return false;
    }
       
        return true;
    }
};