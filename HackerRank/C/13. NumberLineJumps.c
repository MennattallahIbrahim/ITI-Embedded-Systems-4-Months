char* kangaroo(int x1, int v1, int x2, int v2) {
int i =0;
    int position1=0,position2=0; 
    position1= v1+x1;
    position2= v2+x2;
    if(x2<x1 && v2<v1){
       return "NO";
    }
    for(i=0;i<=10000;i++)   {
        if( position1 == position2){
           return "YES"   ;       
        }
       else{
            position1=position1 + v1;
            position2=position2 + v2;
            i++;
            
       }
     
    }
    return "NO";

}
