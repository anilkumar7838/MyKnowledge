def gui(temp):
	print("\nBoiler System:\n1. To Increase/Decrease Temperature \n2. To Shut boiler\n3. To cancel Request")
	ch=None
	while not ch:
		try:
			ch = int(input("Enter your option: "))
			if ch not in [1,2,3]:
				raise ValueError("Invalid input")
		except Exception:
			print("\nEnter a valid input!!!\n")
			
	if ch == 1:
		try:
			tempch = int(input("Enter Temperature to raise or fall by (-10/-5/5/10): "))
			if tempch not in [10, 5, -5, -10]:
				raise ValueError("Invalid value")
			return temp+tempch
		except:
			print("Enter a valid input !!!\n")
			return temp
	elif ch == 2:
		temp = 0
		print("\nShutting down boiler.....\n")
		return temp
	elif ch == 3:
		print("\nTemperature not changed\n")
		return temp