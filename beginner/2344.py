rate = int(input())

rates_char = ['E', 'D', 'C', 'B', 'A']
rates_number = [0, 35, 60, 85, 100]

for char, number in zip(rates_char, rates_number):
    if rate <= number: 
        print(char); break

