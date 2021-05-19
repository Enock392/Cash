change=input("Change Owed: ")
change=float(change)
cents=round(change*100)
quarters=0
dimes=0
nickels=0
pennies=0
while cents>=25:
    cents-=25
    quarters+=1
while cents>=10 and cents<25:
    cents-=10
    dimes+=1
while cents>=5 and cents<10:
    cents-=5
    nickels+=1
while cents<5 and cents>0:
    cents-=1
    pennies+=1
coins=quarters+dimes+nickels+pennies
print(coins)