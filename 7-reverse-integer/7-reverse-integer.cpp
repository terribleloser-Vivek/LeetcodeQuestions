class Solution {
public:
int reverse(int x) {
int result = 0;
while (x){
// before updating res, just check whether its greater than (INT_MAX/10) or less than (INT_MIN/10), if it is, then return 0
if (result> INT_MAX/10 || result < INT_MIN/10) return 0;
result = result * 10 + x % 10;
x /= 10;
}
return result;
}
};