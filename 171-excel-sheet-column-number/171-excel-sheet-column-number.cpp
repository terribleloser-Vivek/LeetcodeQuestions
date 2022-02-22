class Solution {
public:
    int titleToNumber(string columnTitle) {
        int col=0;
        for(int i=0;columnTitle[i]!='\0';i++)
        {
            col=col*26 + (int(columnTitle[i])-64);
        }
        
        return col;
        
    }
};