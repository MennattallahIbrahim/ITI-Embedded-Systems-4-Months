if __name__ == '__main__':
    s = input()
    isalnum=isalpha=isdigit=islower=isupper=False 
    for letter in s:
        if (letter.isalnum()):
            isalnum=True
        if (letter.isalpha()):
            isalpha=True
        if (letter.isdigit()):
            isdigit=True
        if (letter.islower()):
            islower=True
        if (letter.isupper()):
            isupper=True    
    print(isalnum,isalpha,isdigit,islower,isupper,sep='\n')        
    #sep='\n' to separate each print by new line 
