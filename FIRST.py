print("введите длину нижнего основания")
a = float(input())
print("введите длину верхнего основания")
b = float(input())
print("введите длину первой боковой строны")
c = float(input())
print("введите длину второй боковой строны")
d = float(input())
print("введите длину высоты")
h = float(input())
if a > b:
    def Trapecia():
        Sr = (a + b) / 2
        S = Sr * h
        P = a + b + c + d
        print("средняя линия:", Sr)
        print("площадь:", S)
        print("периметр:", P)
else:
    print("ошибка: a >= b")

Trapecia()
