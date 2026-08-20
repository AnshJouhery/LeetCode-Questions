class Solution {
public:
    bool isHappy(int n) {
        int digi = 0;
        int sum = 0;

        do{
            sum = 0;
            while(n > 0){
                digi = n % 10;
                n /= 10;
                sum += (digi*digi);
            }
            
            n = sum;
            
        }while(n != 1 && n != 4);

        return n == 1;
    }
};