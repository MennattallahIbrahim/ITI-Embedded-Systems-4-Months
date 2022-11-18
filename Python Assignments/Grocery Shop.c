ProductList = ["Apple","Cherry","Banana"]
ProductNumber=[1,2,3]
KilosAvail=[40,30,50]
CostPerKilo = [45,35,75] 		
list1 = []
list2 = []
		
print("Welcome To ITI Shop")
print("Select Mode:")
print("-For Customer Press 1")
print("-For Owner Press 2")
print("-To Exit Press 0")
print("Enter Your Mode:")
x=int(input())
if(x==1):
	print("To show our products press 1\nTo buy from our products press 2\nTo Exit press 0\nEnter your choice:")
	y=int(input())
	if(y==1):
		print("Menu of our products:")
		j=0
		listlen = len(ProductList)
		listlenRange = range(listlen)
		for listlen in listlenRange:
			print("Product Name: {0},Product Number: {1}, Kilos Available: {2}, Cost per kilo: {3}\n".format(ProductList[j],ProductNumber[j],KilosAvail[j],CostPerKilo[j]))
			j=j+1
				
	if(y==2):
			print("Menu of our products:")
			listlen = len(ProductList)
			listlenRange = range(listlen)
			j=0
			for listlen in listlenRange:
				
				print("Product Name: {0},Product Number: {1}, Kilos Available: {2}, Cost per kilo: {3}\n".format(ProductList[j],ProductNumber[j],KilosAvail[j],CostPerKilo[j]))
				j=j+1
		
			repeat = 1
			while(repeat):
						list1.append(int(input("Product number you want to buy:")))
						list2.append(int(input("Enter the number of kilos you need:")))
						x=int(input("Do you want more products?\nIf yes press 1\nIf no press 2"))
						if(x==1):
								repeat=1
						if(x==2):
								break
			i=0
			sum=0
			a=list1
			c=list2 
			
			b = len(list1)
			y=range(b)
			for n in (y):
						productNo = list1.pop()
						kilosNo   = list2.pop()
						sum = sum +	(CostPerKilo[productNo-1]*kilosNo)
			g=int(input("To print the bill press 1"))			
			if(g==1):
				print("The bill = {0} LE\nThanks for shopping here".format(sum))
			 
	elif(y==0):
			print("Thanks for shopping here")
	else:
			print("Not a valid number:")	

if(x==2):
	passw = int(input("Enter your password: "))
	if(passw == 1234): 
		print("1. Show products\n2. Add product\n3. Remove product\n")
		OwnerMode = int(input("Enter Input: "))
		if(OwnerMode==1):
			print("Menu of our products:")
			j=0
			listlen = len(ProductList)
			listlenRange = range(listlen)
			for listlen in listlenRange:
				print("Product Name: {0},Product Number: {1}, Kilos Available: {2}, Cost per kilo: {3}\n".format(ProductList[j],ProductNumber[j],KilosAvail[j],CostPerKilo[j]))
				j=j+1
				
		if(OwnerMode==2):
			inputx = input("Product Name: ")
			ProductList.append(inputx)
			inputx = int(input("Product Number: "))
			ProductNumber.append(inputx)
			inputx = input("Product cost: ")
			CostPerKilo.append(inputx)
			inputx = input("Number of kilos: ")
			KilosAvail.append(inputx)
			print("The new menu of the products:")
			j=0
			listlen = len(ProductList)
			listlenRange = range(listlen)
			for listlen in listlenRange:
				print("Product Name: {0},Product Number: {1}, Kilos Available: {2}, Cost per kilo: {3}\n".format(ProductList[j],ProductNumber[j],KilosAvail[j],CostPerKilo[j]))
				j=j+1
		if(OwnerMode==3):
			print("Menu of our products:")
			j=0
			listlen = len(ProductList)
			listlenRange = range(listlen)
			for listlen in listlenRange:
				print("Product Name: {0},Product Number: {1}, Kilos Available: {2}, Cost per kilo: {3}\n".format(ProductList[j],ProductNumber[j],KilosAvail[j],CostPerKilo[j]))
				j=j+1
			ProductRemove = int(input("Enter product number you want to remove: "))  
			ProductList.pop(ProductRemove-1)
			ProductNumber.pop(ProductRemove-1)
			CostPerKilo.pop(ProductRemove-1)
			KilosAvail.pop(ProductRemove-1)
			print("The new menu of the products:")
			j=0
			listlen = len(ProductList)
			listlenRange = range(listlen)
			for listlen in listlenRange:
				if(	(ProductRemove!=1) & (j==0)):
					print("Product Name: {0},Product Number: {1}, Kilos Available: {2}, Cost per kilo: {3}\n".format(ProductList[j],ProductNumber[j],KilosAvail[j],CostPerKilo[j]))
					j=j+1
				else:
					print("Product Name: {0},Product Number: {1}, Kilos Available: {2}, Cost per kilo: {3}\n".format(ProductList[j],(ProductNumber[j]-1),KilosAvail[j],CostPerKilo[j]))
					j=j+1
	else:
		print("Enter valid password")
if(x==0): 
	print("Exit program")
else:	
	'''Do Nothing'''
