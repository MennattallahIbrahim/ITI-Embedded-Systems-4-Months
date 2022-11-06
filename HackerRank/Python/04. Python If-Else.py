s = int(input())
n = s%2; 
if( n != 0 ) :
    print ("Weird")
elif(n == 0) :
	if(s>=2 and s<5) :     
		print("Not Weird")
	elif (s>=6 and s<=20) :
		print("Weird")
	elif (s>20):
		print ("Not Weird")
