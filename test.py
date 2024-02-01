import random

# Set the size of the list
list_size = 30000

# Generate a list of 1000 random elements with some repetition
random_elements = [random.randrange(-100, 100) for _ in range(list_size)]

# Print the first 20 elements as an example
print(sorted(random_elements))
print(len(random_elements))


print(len(li))