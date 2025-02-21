cousins = [] 

years = str(input()).split()

for i, year in enumerate(years):
    name = ''

    if i == 0: name = 'huguinho'
    if i == 1: name = 'zezinho'
    if i == 2: name = 'luisinho'

    cousins.append({ 'name': name, 'years': year })

sorted_cousins = sorted(cousins, key=lambda dict: dict['years'])
middle_cousin = sorted_cousins[1]

print(middle_cousin.get('name'))