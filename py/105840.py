string = input( "Enter a string : " )
length = len(string)
maxlength = 0
maxsub = ''
sub = ''
lensub = 0
for a in range(length):
    for x in ['a','e','i','o','u']:
        if(x==a):
            print(a)
    # write logical code here
        
print ("Maximum length consonant substring is :" , maxsub, end = '')
print ("with" , maxlength,"characters")