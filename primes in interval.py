
def primes_in_interval():
	number1 = int(input('give number1: '))
	number2 = int(input('give number2: '))
	list1 = list()
	
	for prime in range(number1, number2+1):
		if prime > 1:
			for i in range(2,prime):
				if prime % i == 0:
					break
			else:
				list1.append(prime)
	print(f'Prime numbers between the two numbers you have given: {", ".join(str(x) for x in list1)}')				
	
primes_in_interval()