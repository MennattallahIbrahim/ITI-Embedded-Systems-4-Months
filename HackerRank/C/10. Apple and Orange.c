void countApplesAndOranges(int s, int t, int a, int b, int apples_count, int* apples, int oranges_count, int* oranges) {
int AppleCntr =0, OrangeCntr=0,check=0,SumApples=0,SumOranges=0;    
    for(AppleCntr=0;AppleCntr<apples_count;AppleCntr++)
    {
           check = apples[AppleCntr] + a;
            if(check >= s && check <=t ){
              SumApples++;  
            }
    }    
     check=0;   
    for(OrangeCntr=0;OrangeCntr<oranges_count;OrangeCntr++)
    {
           check = oranges[OrangeCntr] + b;
            if(check >= s && check <=t ){
              SumOranges++; 
            }
    } 
    printf("%d\n", SumApples);
    printf("%d", SumOranges);    
}
