int getTotalX(int a_count, int* a, int b_count, int* b) {
int i,j=0,cntrb=0,counter=0,cntr1=0,cntr2=0;
int LastElementA = a[a_count-1];

    for(i=LastElementA; i<=b[0];i++)
    {       cntr1=0;
            cntr2=0;
    
            for(j=0;j<a_count;j++)
            {
                if(i%a[j]==0 || a[j]%i==0)
                  {    cntr1++;
                  }
                }
            for(cntrb=0;cntrb<b_count;cntrb++)
            {
                if(i%b[cntrb]==0 || b[cntrb]%i==0)
                  {    
                      cntr2++;
                  }
            }
            if(cntr1==a_count && cntr2==b_count){
                counter++;
            }    
    }
    return counter; 
}  
