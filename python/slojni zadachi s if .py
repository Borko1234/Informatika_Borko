#bonus
#ipmoprt ime na bibliotekata
import math
'''
4
puzel=2.60
kukla=3
meche=4.10
minion=8.20
kamionche=2
eksurziq=float(input())
broiP=int(input())
broiK=int(input())
broiMe=int(input())
broiMi=int(input())
broiKa=int(input())
broi=(broiP+broiK+broiMe+broiMi+broiKa)
cena=float(broiP*puzel+broiK*kukla+broiMe*meche+broiMi*minion+broiKa*kamionche)
parki=float(cena-cena/10)
ostanali=float(parki-eksurziq)
if(broi>=50):
    cena=cena-(cena/100)*25
    parki = float(cena - cena / 10)
    ostanali = float(parki - eksurziq)
    if(parki>=eksurziq):
        print("Yes!",round(ostanali,2),"lv left")
    else:
        print("Not enough money!")
else:
    parki = float(cena - cena / 10)
    ostanali = float(parki - eksurziq)
    if (parki >= eksurziq):
        print("Yes!",round(ostanali,2), "lv left")
    else:
        print("Not enough money!")'''
'''
1
time1=int(input())
time2=int(input())
time3=int(input())
minuti=(time1+time2+time3)/60
minuti=math.floor(minuti)
sek=(time1+time2+time3)%60
if(sek<10):
    print(f'{minuti}:0{sek}')
else:
    print(f'{minuti}:{sek}')
'''

import math h = int(input())
 m = int(input()) 
if h==24 : h=0
 if m<10 : m1=m%10
 if m>44 : h1=h+1 m1 = abs(60 - (15 + m))
 if h == 23 : h1 = 0 
else : h1=h m1=m+15 
if m1<10 : print(f'{h1}:0{m1}') 
else : print(f'{h1}:{m1}')


