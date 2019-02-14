s = input()

a = s.split('eraser')

for i in a:
    b = i.split('erase')
    for j in b:
        c = j.split('dreamer')
        for k in c:
            d = k.split('dream')
            for l in d:
                if l != '':
                    print('NO')
                    exit()
print('YES')