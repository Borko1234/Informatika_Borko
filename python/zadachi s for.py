#namerete sumata na chetnite
sum=0
for n in range(111,132):
    if n%2==0:
        sum = sum + n
print(sum)
#sumata na nechetnite
a=0
for n in range(131,156):
    if n%2!=0:
        a = a + n
print(a)
#Да се напише програма, която чете n-на брой цели числа, въведени от потребителя,и проверява дали сред тях съществува число, което е равно на сумата на всички останали. 
#•	Ако има такъв елемент печата "Yes" и на нов ред "Sum = "  + неговата стойност
#•	Ако няма такъв елемент печата "No" и на нов ред "Diff = " + разликата между най-големия елемент и сумата на останалите (по абсолютна стойност)
import sys
max= - sys.maxsize
sum=0
n=int(input())
for i in range(0,n):
    num=int(input())
    if max<num:
        max=num
    sum=sum+num
if max==sum-max:
    print('Yes')
    print(f'Sum = {int(sum/2)}')
else:
    print("No")
    sum1=sum-max
    print(f'Diff = {abs(max-sum1)}')
