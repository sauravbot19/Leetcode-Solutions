// fibonacci number
// c++

class Solution {
public:
    int fib(int n) {
        
        if (n == 0) return 0;
        if (n == 1) return 1;
        
        int n1 = 0, n2 = 1, temp;
        
        for(int i = 1; i < n; i++) {
            temp = n1 + n2;
            n1 = n2;
            n2 = temp;
        }
        return temp;
    }
};
