int birthday(int s_count, int* s, int d, int m) {
//length month square of choco
//sum day 
int counterret,counter=0,sum=0,c=0,i=0,k=0;
    
    if(s_count==1){
        if(d==s[0]){
            counterret++;
        }
    }
    else{
        for(i=0;i<s_count;i++){
            counter=0;
            sum=0;
            for(k=i;k<m+i;k++){
                sum=sum+s[k];
                counter=counter+1;    
                if(sum==d && m==counter){
                    counterret=counterret+1;
                }
            }
        }
    }
    return counterret; 
}
