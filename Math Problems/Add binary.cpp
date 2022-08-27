// add binary leetcode solution
// c++

class Solution {
public:
    string addBinary(string a, string b) {
        
        int carry = 0;
        string res = "";
        
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        
        int i = 0;
        int sum;
        
        while(i < a.size() || i < b.size()) {
            sum = carry;
            
            if(i < a.size()) {
                sum = sum + a[i] - '0'; 
            }
            if(i < b.size()) {
                sum = sum + b[i] - '0'; 
            }
            
            if(sum == 0) {
                carry = 0;
                res = res + '0';
            }
            else if(sum == 1) {
                carry = 0;
                res = res + '1';
            }
            else if (sum == 2) {
                carry = 1;
                res = res + '0';
            }
            else {
                carry = 1;
                res = res + '1'; 
            }
            
            i++;
        }
        
        if (carry == 1) {
            res = res + '1'; 
        }
        
        reverse(res.begin(), res.end());
        return res;
        
    }
};
