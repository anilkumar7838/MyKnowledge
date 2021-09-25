def read_saved_values():
	try:
		with open("savedValues.txt","r") as f:
			saved_values = list(map(int,f.readline().split()))
			return saved_values
	except:
		print("\nSome error in fetching the values\n")
		return []

def write_saved_values(values):
	sorted_values = sorted(values)
	sorted_text = ""
	for value in sorted_values:
		sorted_text+=str(value)+" "
	try:
		with open("savedValues.txt","w") as f:
			f.writelines([sorted_text])
	except Exception:
		print("\nError in updating values")
  
def saved(temp):
	print("Saved Values\n1. Use Saved Values \n2. Add to Saved Values\n3. Delete from Saved Values\n4. Exit")
	option = None
	while not option:
		try: 
			option = int(input("Choose Option:"))
			if option not in [1,2,3,4]:
				raise ValueError("Invalid Input")
		except:
			print("\nEnter a valid input i.e 1/2/3/4\n")
	if option==1:
		saved_temp_list = read_saved_values()
		if saved_temp_list==[]:
			print("No values to display\nAdd some values\n")
			return temp
		print("Choose value from list ", saved_temp_list)
		try:
			value = int(input("choose value: "))
			if value not in saved_temp_list:
				raise ValueError("Value is not in list")
			return value
		except ValueError:
			print("Choose a valid option!!!\n")
			return temp
	elif option==2:
		saved_temp_list = read_saved_values()
		try:
			value = int(input("Enter the value to be added: "))
		except:
			print("\nEnter a valid value!!!\n")
			return temp
		saved_temp_list.append(value)
		write_saved_values(saved_temp_list)
		return temp
	elif option==3:
		saved_temp_list = read_saved_values()
		print("Current list is")
		print(saved_temp_list)
		try:
			value = int(input("Enter the value to delete: "))
			if value not in saved_temp_list:
				raise ValueError("Invalid value")
		except Exception:
			print("\nEnter a valid input!!!\n")
			return temp
		saved_temp_list.remove(value)
		write_saved_values(saved_temp_list)
		return temp
	elif option==4:
		return temp
			

			