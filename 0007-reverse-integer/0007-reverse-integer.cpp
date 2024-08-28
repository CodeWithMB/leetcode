class Solution {
public:
    int reverse(int x) {
        double reverse = 0;
        while(x!=0){
            int digit = x%10;
             if (reverse > INT_MAX / 10 || (reverse == INT_MAX / 10 && digit > 7)) {
                return 0;  // Overflow would occur
            }
            if (reverse < INT_MIN / 10 || (reverse == INT_MIN / 10 && digit < -8)) {
                return 0;  // Underflow would occur
            }
            reverse = reverse * 10 + digit;
            x = x/10;
        } 
        return reverse;
    }
};