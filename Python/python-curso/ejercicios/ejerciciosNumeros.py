
# ax^2 + bx + c = 0

a = 4
b=-6
c=2

x1 = (-b+ (b**2-4*a*c)**(1/2))/(2*a) 

x2 = (-b- (b**2-4*a*c)**(1/2))/(2*a) 

print(x1)
print(x2)

# radio del circulo, area = PI*r^2

radio = 5
PI= 3.141592
areaCirculo = PI*(radio**2)

print(areaCirculo)

# volumen de una esfera

radio = 5

volumenEsfera = (4*PI*radio**3)/3

print(volumenEsfera)

# area de un triangulo 

base = 4
altura = 5 

areaTriangulo = base*altura/2

print(areaTriangulo)

#valor futuro  -> vf = vp(1+i)^n

capital = 10000
interes = 3.5
años = 7

valorFuturo = capital*((1+0.035)**7)

print(valorFuturo)
