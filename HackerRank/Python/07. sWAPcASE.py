def swap_case(s):
    x=s.swapcase()
    
    return x

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result) 
    ''' Another answer:  
    def swap_case(s):
    result = ""
    for letter in s:
        if(letter.isupper()):
            result +=letter.lower()
        elif(letter.islower()):
            result +=letter.upper()
        else :
            result+=letter
                    
    
    return result

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)
    '''
    
