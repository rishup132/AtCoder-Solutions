for i in range(int(input())):
    s = list(input().split(" "))
    t = list("Government College of Engineering & Textile Technology Berhampore".lower().split(" "))
    flag = True
    for i in range(len(t)):
        s[i].lower()
        c = 0
        for l in range(len(t[i])):
            if t[i][l] != s[i][l]:
                c += 1
        if c > len(t[i])//2:
            flag = False
            break
    if flag:
        print("accept")
    else:
        print("reject")