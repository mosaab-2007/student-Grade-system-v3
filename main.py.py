def analyze_grades(grades):
    # Print all grades
    print("Grades list:")
    print(grades)
    
    # Simple calculations
    average = sum(grades) / len(grades)
    highest = max(grades)
    lowest = min(grades)
    
    # Print results
    print("Results:")
    print("Average:", average)
    print("Highest:", highest)
    print("Lowest:", lowest)

def main():
    # Names of students
    print("Project by: Mosaab, Abdulrahman")
    
    # Input part
    num = int(input("Enter number of students: "))
    
    all_grades = []
    
    for i in range(num):
        g = float(input("Enter grade: "))
        all_grades.append(g)
    
    # Call function
    analyze_grades(all_grades)
if __name__ == "__main__:s
# Start the program
    main()