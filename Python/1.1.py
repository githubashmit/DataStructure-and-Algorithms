'''Is Unique: Implement an algorithm to determine if a string has all unique characters. What if you
cannot use additional data structures?
Hints: #44, #117, #132'''


def is_unique(string):
    # Iterate through each character in the string
    for i in range(len(string)):
        for j in range(i + 1, len(string)):
            # If any two characters are the same, return False
            if string[i] == string[j]:
                return False
    # If no duplicate characters were found, return True
    return True

# Test cases
strings = ["abcdefg", "hello", "world", "openai", "chatbot"]
for string in strings:
    if is_unique(string):
        print(f"{string} has all unique characters.")
    else:
        print(f"{string} does not have all unique characters.")

