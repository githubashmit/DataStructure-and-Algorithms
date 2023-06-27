# You have a list of your favourite marvel super heros.
# heros=['spider man','thor','hulk','iron man','captain america']
# Using this find out,
#
# 1. Length of the list
# 2. Add 'black panther' at the end of this list
# 3. You realize that you need to add 'black panther' after 'hulk',
#    so remove it from the list first and then add it after 'hulk'
# 4. Now you don't like thor and hulk because they get angry easily :)
#    So you want to remove thor and hulk from list and replace them with doctor strange (because he is cool).
#    Do that with one line of code.
# 5. Sort the heros list in alphabetical order (Hint. Use dir() functions to list down all functions available in list)



heros = ['spider man', 'thor', 'hulk', 'iron man', 'captain america']

# 1. Find the length of the list
length_of_list = len(heros)
print("Length of the list:", length_of_list)

# 2. Add 'black panther' at the end of the list
heros.append('black panther')
print("List after adding 'black panther' at the end:", heros)

# 3. Remove 'black panther' from the list and add it after 'hulk'
heros.remove('black panther')
heros.insert(heros.index('hulk') + 1, 'black panther')
print("List after moving 'black panther' after 'hulk':", heros)

# 4. Replace 'thor' and 'hulk' with 'doctor strange'
heros[heros.index('thor') : heros.index('hulk') + 1] = ['doctor strange']
print("List after replacing 'thor' and 'hulk' with 'doctor strange':", heros)

# 5. Sort the list in alphabetical order
heros.sort()
print("List after sorting in alphabetical order:", heros)
