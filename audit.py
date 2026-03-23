import random

def program():
    l = ["OCaml", "C", "Python"]
    index = random.random() + random.random()
    return l[index]

t = []
for i in range(4):
    t.append(program())

for i in range(4):
    if t[i] == t[i+1]:  # Si deux fois le même language
        t.remove(i+1)  # On enleve dupliqués

for i in range(4):
    print("Exo {i} : {t[i]}")