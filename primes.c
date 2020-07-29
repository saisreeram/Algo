
int countPrimes(int n){
    if (n==0){
        return 0;
    }
    bool array[n];
    for (int i=2;i<n;i++){
        array[i]=true;
    }
    
    for (int i=2;i*i<n;i++){
        if (!array[i]) continue;
        for (int j =i*i;j<n;j=j+i){
            array[j]=false;
        }
    }
    
    int count=0;
    for (int i=2;i<n;i++){
        if(array[i])count++;
    }
return count;
}
