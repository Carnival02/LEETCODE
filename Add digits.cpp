//question number 258

class Solution {
public:
    int addDigits(int num) {
        while(true){int sum=0;
        if(num<10){
            return num;
        }
        else{
            while(num>0){
                int d=num%10;
                sum+=d;
                num/=10;
            }
            num =sum;
                
        }    


            
            

       
    }return num;
    }
};
