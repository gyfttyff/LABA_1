import math

def rectangle():
    try:
        a = float(input("Введите длину первой стороны a : "))
        b = float(input("Введите длину второй стороны a : "))
        if a <= 0 or b <= 0:
            print("Ошибка: Стороны прямоугольника должны быть больше нуля")
            return
        P = 2 * (a + b)
        S = a * b
        d = math.sqrt(a**2 + b**2)
        
        print(f"Периметр: {P:.2f}")
        print(f"Площадь:  {S:.2f}")
        print(f"Диагональ: {d:.2f}")
        
    except ValueError:
        print("Ошибка: Пожалуйста, введите корректные числа!")

rectangle()
