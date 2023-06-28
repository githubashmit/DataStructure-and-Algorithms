# Let us say your expense for every month are listed below,
# January - 2200
# February - 2350
# March - 2600
# April - 2130
# May - 2190
# Create a list to store these monthly expenses and using that find out,
#
# 1. In Feb, how many dollars you spent extra compare to January?
# 2. Find out your total expense in first quarter (first three months) of the year.
# 3. Find out if you spent exactly 2000 dollars in any month
# 4. June month just finished and your expense is 1980 dollar. Add this item to our monthly expense list
# 5. You returned an item that you bought in a month of April and
# got a refund of 200$. Make a correction to your monthly expense list
# based on this

monthly_expenses = [2200, 2350, 2600, 2130, 2190]

# 1. Calculate the extra expenses in February compared to January
extra_expenses = monthly_expenses[1] - monthly_expenses[0]
print("Extra expenses in February compared to January:", extra_expenses)

# 2. Calculate the total expense in the first quarter (first three months)
first_quarter_expenses = sum(monthly_expenses[:3])
print("Total expense in the first quarter:", first_quarter_expenses)

# 3. Check if you spent exactly 2000 dollars in any month
spent_2000 = 2000 in monthly_expenses
print("Did you spend exactly 2000 dollars in any month?", spent_2000)

# 4. Add June's expense to the monthly expense list
monthly_expenses.append(1980)

# 5. Correct April's expense by deducting the refund of 200 dollars
april_index = 3
monthly_expenses[april_index] -= 200

# Print the updated monthly expense list
print("Updated monthly expense list:", monthly_expenses)
