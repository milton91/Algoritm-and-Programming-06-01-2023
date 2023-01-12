int consecutiveNumbersSum(int n){
    
    int res=0;
    int count=1;
    int flag = 1;
    
    while(flag == 1) {
        double s1 = 0.5*((2.0*n)/count+count+1);
        if ((s1-count)<1){
            flag = 0;
        }
        else if (s1==(int)s1){ 
            res++;
        }
        count+=1;
    }
    return res;
}
