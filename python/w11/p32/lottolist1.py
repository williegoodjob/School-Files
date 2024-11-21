import random
lotto = []
count = 1
while count <= 6:
    randnum = random.randint(1,49)
    lotto.append(randnum)
    count = count + 1
    print(lotto)