int divisibleSumPairs(int n, int k, int ar_count, int* ar) {

int i=0,j=0,sum=0,cntr=0;
for(i=0;i< n ;i++){
  for(j=i+1;j< n ;j++){
    sum = ar[i]+ar[j];
    if(sum%k==0){
      cntr++;  
    }
}  
}
return cntr;

}
