# Check Permutation: Given two strings, write a method to decide if one is a permutation of the
# other.
# Hints: ft , #84, #122, #131

# In the context of strings, a permutation refers to rearranging the characters of a string to create a new string. A permutation of a string contains the same characters as the original string, but in a different order.
#
# For example, let's consider the string "abc". The permutations of this string would be:
#
# "abc"
# "acb"
# "bac"
# "bca"
# "cab"
# "cba"

from collections import Counter


def check_permutation(str1, str2):
    # Check if the lengths of the strings are equal
    if len(str1) != len(str2):
        return False

    # Count the characters in both strings
    counter1 = Counter(str1)
    counter2 = Counter(str2)

    # Compare the character counts
    return counter1 == counter2

string1 = "abcd"
string2 = "dcba"

if check_permutation(string1, string2):
    print("The strings are permutations of each other.")
else:
    print("The strings are not permutations of each other.")
