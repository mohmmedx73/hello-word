# hello-word




a=[0,1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8,9]
print(a)
adjacent=[]
WiningCounter=0
while(True):
    numOfPositions=int(input('p1 ,enter your number of postions'))
    
    while(numOfPositions>0):#
        p1=int(input())

        if(p1>=len(a)):
            p1=int(input('out of boundry, enter again:'))
        
        if(a[p1]=='-'):
            p1=int(input('error,enter again'))
            
        adjacent.append(p1)
        
        if(len(adjacent)==2):
            if(adjacent[0]-adjacent[1]!=1 and adjacent[0]-adjacent[1]!=-1):
                p1=int(input('error,enter your last number again:'))
        
        a[p1]='-'
        WiningCounter+=1
        numOfPositions-=1

    print(a)

    if(WiningCounter==len(a)):
        print('you won')
        break


    adjacent=[]
    numOfPositions=int(input('player 2, enter your number of positions:')) 
    while(numOfPositions>0):
        p2=int(input())

        
        if(a[p2]=='-' or p2>=len(a)):
            p2=int(input('error,enter again'))
        adjacent.append(p2)
        
        if(len(adjacent)==2):
            if(adjacent[0]-adjacent[1]!=1 and adjacent[0]-adjacent[1]!=-1):
                p2=int(input('error,enter your last number again:'))
        
        a[p2]='-'
        WiningCounter+=1
        numOfPositions-=1

    print(a)

    if(WiningCounter==len(a)):
        print('you won')
        break
