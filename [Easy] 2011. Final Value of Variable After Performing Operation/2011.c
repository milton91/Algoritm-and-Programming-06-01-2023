int finalValueAfterOperations(char ** operations, int operationsSize){
    int res = 0;
    
    for(int i=0; i<operationsSize; i++){
        if(operations[i][1] == '-'){
            res -= 1;
        }
        else{
            res += 1;
        }
    }

    return res;
}
