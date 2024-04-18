import os
os.system("cls")
n1=float(input("digite o valor inicial"))
n2=float(input("digite o aporte mensal"))
t=int(input("digite o tempo em meses investido"))
n3=n1
n1=n1*1.01#primeiro mes
m=(n1+n2)*1.01#segundo mes
for i in range(t-2):
    m=(m+n2)*1.01
print("valor final: ", round(m+n3, 2))


