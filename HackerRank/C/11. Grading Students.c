int* gradingStudents(int grades_count, int* grades, int* result_count) {
int *resultcount = (int*) malloc(grades_count * sizeof(int));
int i=0 ;
(*result_count)=0;
    for(i=0;i<grades_count;i++)
    {
        if(grades[i]>=38 && grades[i]<=100)
        {
            if(grades[i]%5==3)
            {
             resultcount[i]=grades[i]+2; 
            }
            else if(grades[i]%5==4) {
             resultcount[i]=grades[i]+1;  
            }
            else{
            resultcount[i]=grades[i]; 
            }
        }
        else if(grades[i]>0 && grades[i]<38)
        {
        resultcount[i]=grades[i];   
        } 
        (*result_count)++;  
    }
   
    
return resultcount;
}
