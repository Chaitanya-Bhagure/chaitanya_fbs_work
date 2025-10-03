package P1;

class InvalidMarksException extends Exception {
    public InvalidMarksException(String message) {
        super(message);
    }
}

class Student {
    int marks;

    public Student(int marks) {
        this.marks = marks;
    }

    public void evaluate() throws InvalidMarksException {
        if (marks > 100) {
            throw new InvalidMarksException("Invalid marks! Marks cannot exceed 100.");
        } else if (marks < 35) {
            System.out.println("Result: Fail");
        } else if (marks < 50) {
            System.out.println("Result: Pass");
        } else if (marks < 70) {
            System.out.println("Result: Second Class");
        } else {
            System.out.println("Result: First Class");
        }
    }
}

public class TestExceptionStu {
    public static void main(String[] args) {
        Student s1 = new Student(35);  // Try values like 25, 45, 60, 80, 105

        try {
            s1.evaluate();
        } catch (InvalidMarksException ime) {
            System.out.println("Exception caught: " + ime.getMessage());
        }
    }
}
