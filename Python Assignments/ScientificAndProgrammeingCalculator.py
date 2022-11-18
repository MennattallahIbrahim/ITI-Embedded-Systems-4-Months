import math
print("Hello")
print(" ")
a = int(input("For scientific Calculator press 1\nFor Programming Calculator press 2\n"))
if(a==1) :
	print("") 
	b =  int(input("1-Simple Operations\n2-Complex Operations\n"))
	'''sIMPLE operations''' 
	if(b==1):
			c = int(input("Press the number of the opertaion you want to perfom:\n1-Addition\n2-Subtraction\n3-Multiplication\n4-Division\n"))	
			if(c==1):
					op1 = int(input("Number 1\n"))
					op2 = int(input("Number 2\n"))
					result = op1 + op2
					print("The result is of addition is ")
					print(result)
			if(c==2):
						op1 = int(input("Number 1\n"))
						op2 = int(input("Number 2\n"))
						result = op1 - op2
						print("The result is")
						print(result)
						
			if(c==3):
						op1 = int(input("Number 1:"))
						op2 = int(input("Number 2:"))
						result = op1 * op2
						print("The result is")
						print(result)
			
			if(c==4):
						op1 = int(input("Number 1:"))
						op2 = int(input("Number 2:"))
						result = op1 / op2
						print("The result is")
						print(result)	
			
			
	elif(b==2):
				c = int(input("Press the number of the opertaion you want to perfom:\n1-Root\n2-Power\n3-Log\n4-Factorial\n"))
				if(c==1):
						op1 = int(input("Number 1\n"))
						result=math.sqrt(op1)
						print("The result is")
						print(result)
				if(c==2):
						op1 = int(input("Enter the number\n"))
						op2 = int(input("Enter the exponent number\n"))
						result = math.pow(op1,op2)
						print("The result of {0} power {1} is {result}".format(op1,op2,result))
						
						
				if(c==3):
						op1 = int(input("Enter the number:"))
						op2 = int(input("Enter the base:"))
						result = math.log(num,base)
						print("{0} log {1} is {result}".format(op1,op2,result))
			
				if(c==4):
						op1 = int(input("Number any number:"))
						if(op1<0):
									print("ERROR!")	
						elif((op1>0)or(op1==0)):			
										result = math.factorial(op1)
										print("The factorial of {0} is {1}".format(op1,result))
	else:
		print("Enter a valid number")			
			
						
''' programming'''
if(a==2) :
	print("") 
	b =  int(input("1-Normal Operations\n2-Conversion from numeric system to another\n"))
	'''sIMPLE operations''' 
	if(b==1):
			c = int(input("Press the number of the opertaion you want to perfom:\n1-Addition\n2-Subtraction\n3-Multiplication\n4-Division\n5-AND\n6-OR\n7-<<\n8->>"))	
			if(c==1):
						op1 = int(input("Number 1\n"))
						op2 = int(input("Number 2\n"))
						result = op1 + op2
						print("The result is of addition is ")
						print(result)
			if(c==2):
						op1 = int(input("Number 1\n"))
						op2 = int(input("Number 2\n"))
						result = op1 - op2
						print("The result of subtraction is ")
						print(result)
						
			if(c==3):
						op1 = int(input("Number 1:"))
						op2 = int(input("Number 2:"))
						result = op1 * op2
						print("The result is")
						print(result)
			
			if(c==4):
						op1 = int(input("Number 1:"))
						op2 = int(input("Number 2:"))
						result = op1 / op2
						print("The result is")
						print(result)	
						
			if(c==5):
						op1 = int(input("Number 1:"))
						op2 = int(input("Number 2:"))
						result = op1 & op2
						print("The result is")
						print(result)
			
			if(c==6):
						op1 = int(input("Number 1:"))
						op2 = int(input("Number 2:"))
						result = op1 | op2
						print("The result is")
						print(result)	
			if(c==7):
						op1 = int(input("Number 1\n"))
						op2 = int(input("Number 2\n"))
						result = op1 <<  op2
						print("Shift of {0} left by {1} is {2}".format(op1,op2,result))
			if(c==8):
						op1 = int(input("Number 1\n"))
						op2 = int(input("Number 2\n"))
						result = op1 >> op2
						print("Shift of {0} rigth by {1} is {2}".format(op1,op2,result))
			
									

	elif(b==2):
				c = int(input("Press the number of the opertaion you want to perfom:\n1-Decimal to Binary\n2-Decimal to Hexadescimal\n3-Binary to Decimal\n"))
				if(c==1):
						op1 = int(input("Enter the decimal number"))
						print(bin(op1)[2:])
								
						
				if(c==2):
						op1 = int(input("Enter the decimal number"))
						print(f'{op1:X}')
					
				if(c==3):
						op1 = input('Enter the binary number')
						print(int(op1, 2))
			
				else :
						 print("Enter a valid number")
				
							
	else: print("Enter a valid number")	
else:  {
print("Enter a valid number")

}
