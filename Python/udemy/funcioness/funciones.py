
def estudiantes ():
    print("Mensaje 1")

estudiantes()

def tabla_del_siete():
    for x in range(10):
        print("7 * {} = {}".format(x,x*7))

tabla_del_siete()

def advierto():
    global variable
    variable = 'alvaro'
    print(variable)

advierto()

variable = 'benitez'

advierto()
print(variable)