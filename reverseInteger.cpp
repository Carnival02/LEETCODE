class Solution {
public:
    int reverse(int x) {
        long remm=0;
        while(x!=0){
            int rem=x%10;
            remm=remm*10+rem;
            x=x/10;
        

        }
        if(remm>INT_MAX || remm<INT_MIN) return 0;
        return int(remm);
    }

};
