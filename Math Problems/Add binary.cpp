// Add Binary Leetcode solution
// c++

class Solution {
public:
    string addBinary(string a, string b) {
     
        string res;
        int i = a.length() - 1;
        int j = b.length() - 1;
        int carry = 0;
        
        while(i < a.length() || j < b.length()) {
            int sum = carry;
            if(i < a.length())
                sum += a[i] - '0';
                i--;
            if(j < b.length())
                sum += b[j] - '0';
                j--;
            
            carry = sum > 1 ? 1 : 0;
            res += to_string(sum%2);
        }
        if(carry) res += to_string(carry);
        reverse(res.begin(), res.end());
        
        return res;
    }
};
