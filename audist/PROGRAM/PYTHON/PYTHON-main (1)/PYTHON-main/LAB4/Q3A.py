pi=22/7
def s_area(radian):
    sur_area = 4 * pi * radian ** 2
    return sur_area

def vol(radian):
    volume = (4 / 3) * (pi * radian ** 3)
    return volume

radian = float(input('Radius of sphere: '))

print("Surface Area is: %.2f"%s_area(radian))
print("Volume is: %.2f"%vol(radian))
