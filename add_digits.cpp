class Solution {
public:
    int addDigits(int num) {
        int sum;
        while (true) {
            sum = 0;
            while (num != 0) {
                sum += (num % 10);
                num /= 10;
            }
            if (sum / 10 == 0)
                return sum;
            num = sum;
        }
    }
};
