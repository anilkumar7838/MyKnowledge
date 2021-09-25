from gui import gui
from saved_values import saved

Temperature = 0
mode = "GUI"
choice = -1

while choice != 4:
	print(f"\nBoiler System:\n1. Control System (current mode: {mode})\n2. Change mode\n3. Display CurrentTemperature \n4. Exit\n")

	try:
		choice = int(input("Enter your choice: "))
	except Exception:
		print("\nEnter a valid input\n")
		continue

	if choice == 1:
		if mode == "GUI":
			Temperature = gui(Temperature)
		elif mode == "Saved Values":
			Temperature = saved(Temperature)
	
	elif choice == 2:
		print("Give method of input: \n1. GUI \n2. Saved Values")
		try:
			ch = int(input("Enter your choice: "))
		except Exception:
			print("\nEnter a valid input\n")
			continue

		if(ch==1 ): 
			mode ="GUI"
		elif(ch==2):
			mode="Saved Values"
		else:
			print("Invalid choice!!\n")

	elif choice == 3:
		print("\nCurrent Temperature  of a boiler is: ", Temperature)

	elif choice==4:
		print("\n******Thank you for using this boiler system*****\n")
  
	else:
		print("Invalid option!!!")