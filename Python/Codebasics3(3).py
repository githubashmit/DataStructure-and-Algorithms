#
# Create a list of all odd numbers between 1 and a max number. Max number is something you need to take from a user using input() function

max_number = int(input("Enter the maximum number: "))

odd_numbers = [num for num in range(1, max_number + 1) if num % 2 != 0]

print("List of odd numbers:")
print(odd_numbers)
