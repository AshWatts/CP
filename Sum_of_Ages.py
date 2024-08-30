import datetime

def calculate_age(dob):
    today = datetime.date.today()
    age = today.year - dob.year
    if today < datetime.date(today.year, dob.month, dob.day):
        age -= 1
    return age

# Get the date of birth for person 1
dob1 = datetime.date(1990, 5, 15)  # Replace with the actual date of birth

# Get the date of birth for person 2
dob2 = datetime.date(1985, 10, 20)  # Replace with the actual date of birth

# Calculate the ages
age1 = calculate_age(dob1)
age2 = calculate_age(dob2)

# Print the sum of the ages
print("Sum of ages:", age1 + age2)