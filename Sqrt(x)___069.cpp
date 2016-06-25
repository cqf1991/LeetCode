class Solution { 
public:
    int sqrt(int x) {
        if(x==0)
        return 0;
        double new_guess,last_guess;// float is not ok for this 
        new_guess=1;
        do
        {
            last_guess=new_guess;
            new_guess=(last_guess+x/last_guess)/2;
        }
        while(new_guess!=last_guess);
        return new_guess;// double to int is ok~(int)new_guess
        
        
        //binary search is ok~
        
    }
};