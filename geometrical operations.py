
flag = True

while flag:

	print("**** WELCOME TO GEOMETRICAL OPERATIONS ****")
	print("1-) SQUARE")
	print("2-) RECTANGLE")
	print("3-) TRIANGLE")
	print("4-) CIRCLE")
	print("5-) EXIT")
	print("*******************************************")

	choice = int(input("Which geometric shape would you like to use? : "))
	print("\n1")

	
	if choice == 1:
		side = int(input("enter the size of the square: "))
		print("--- MENU ---")
		print("1-) AREA")
		print("2-) PERIMETER")
		print("3-) MAIN MENU")
		print("-------------",end="\n")

		choice_s = int(input("What operation would you like to do? : "))
		print("\n")
		
		if choice_s == 1:
			print(f"Area of the square: {side*side}")
			print("\n")

		if choice_s == 2:
			print(f"Perimeter of the square: {side*4}")
			print("\n")
			
		
		if choice_s == 3:
			continue
	
	
	
	elif choice == 2:
		l = int(input("enter length for rectangle: "))
		w = int(input("enter width for rectangle: "))
		print("--- MENU ---")
		print("1-) AREA")
		print("2-) PERIMETER")
		print("3-) MAIN MENU")
		print("-------------",end="\n")
		
		choice_r = int(input("What operation would you like to do? : "))
		print("\n")
		
		if choice_r == 1:
			print(f"Area of the rectangle: {l*w}")
			print("\n")

		if choice_r == 2:
			print(f"Perimeter of the rectangle: {2*(l+w)}")
			print("\n")
		
		if choice_r == 3:
			continue

	
	
	elif choice == 3:
		print("--- MENU ---")
		print("1-) TRIANGLE WITH DIFFERENT SIDES")
		print("2-) RIGHT TRIANGLE")
		print("3-) MAIN MENU")
		print("-------------",end="\n")
		choice_t = int(input("Which geometric shape would you like to use? : "))
		print("\n")

		if choice_t == 1:
			print("--- MENU ---")
			print("1-) AREA")
			print("2-) PERIMETER")
			print("3-) MAIN MENU")
			print("-------------",end="\n")
			choice_t1 = int(input("What operation would you like to do? : "))
			print("\n")

			if choice_t1 == 1:
				print("Enter the sides of the triangle with spaces next to each other:")
				a,b,c = map(int,input().split())
				u = (a+b+c)/2
				area = "%.2f"%(u*(u-a)*(u-b)*(u-c))**0.5
				print(f"Area of the triangle with different side: {area}")
				print("\n")
			
			if choice_t1 == 2:
				print("Enter the sides of the triangle with spaces next to each other:")
				a,b,c = map(int,input().split())
				print(f"Perimeter of the triangle with different sides: {a+b+c}")
				print("\n")

			if choice_t1 == 3:
				continue
		
		if choice_t == 2:
			print("--- MENU ---")
			print("1-) AREA")
			print("2-) PERIMETER")
			print("3-) MAIN MENU")
			print("-------------",end="\n")
			choice_t2 = int(input("What operation would you like to do? : "))
			print("\n")

			if choice_t2 == 1:
				height = int(input("enter for the height of the right triangle: "))
				base = int(input("enter for the base of the right triangle: "))
				print(f"Area of the right triangle: {(height*base)/2}")
				print("\n")

			if choice_t2 == 2:
				print("Enter the sides of the triangle with spaces next to each other:")
				a,b,c = map(int,input().split())
				print(f"Perimeter of the right triangle: {a+b+c}")
				print("\n")
			
			if choice_t2 == 3:
				continue
	
	
	
	elif choice == 4:
		print("--- MENU ---")
		print("1-) AREA")
		print("2-) CIRCUMFERENCE")
		print("3-) MAIN MENU")
		print("-------------",end="\n")
		choice_c = int(input("What operation would you like to do? : "))
		print("\n")

		if choice_c == 1:
			pi = 3.14
			radius = int(input("enter for radius: "))
			area = "%.2f"%(pi*(radius**2))
			print(f"Area of the circle: {area}")
			print("\n")
		
		if choice_c == 2:
			pi = 3.14
			radius = int(input("enter for radius: "))
			circumference = "%.2f"%(2*pi*radius)
			print(f"Circumference of the circle: {circumference}")
			print("\n")
		
		if choice_c == 3:
				continue

	
	
	elif choice == 5:
		print("PROGRAM IS TERMINATED")
		flag = False		



	

































# def area_of_triangle():
# 	print("Enter the sides of the triangle with spaces next to each other:")
# 	a,b,c = map(int,input().split())
# 	u = (a+b+c)/2
# 	print("%.2f" % ((u*(u-a)*(u-b)*(u-c))**0.5))

	
# area_of_triangle()