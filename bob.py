#IL 6th old enough

age=int(input('type your age\n'))

if age<4:
    print(f'{age}? you cannot read how are you asking if you can vote or drive?!?!?!?!')
elif age>=4 and age<15:
    print(f'{age} year olds can go to school congrats')
elif age==15:
    print(f'{age} year olds can get drivers permits congrats grab me some eggs from walmart')
elif age>=16 and age<18:
    print(f'{age} year olds can drive congrats, where are you going to go next?')
else:
    print(f'{age} year olds can vote congrats, who you gonna vote for')