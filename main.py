import sys
parent = input()
opt = input()
if(opt=='N'):
    print("TOTAL MEMBERS:1")
    print('COMISSION DETAILS:')
    print(parent,": 250 INR")
    sys.exit(0)
children = input().split(',')
child_count =0
for _ in children:
    child_count+=1
parent_cm = (5000*child_count*10)//100
child_cm = (5000*5)//100
print("TOTAL MEMBERS:",child_count+1)
print("COMISSION DETAILS:")
print(f'{parent} : {parent_cm} INR')
for i in children:
    print(f'{i.strip()} : {child_cm} INR')