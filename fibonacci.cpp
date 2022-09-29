 int fib(int n) {
        int num1 = 0;
        int num2 = 1;
        
        if (n == 0) return num1;
        
        for (int i = 1; i < n; ++i) {
            int temp = num2;
            num2 = num1 + num2;
            num1 = temp;
        }
        return num2;