// Construct a Java class to store some employee details and provide methods to set and get values.

class Employeeinfo {

    int empid,phno,sal;
    String name,address,dept;

    void employeeid(int empid) {     
        System.out.println(" ");                      // Employee Id
        System.out.println("Employee Id: " + empid);
    }
    void employeesal(int sal) {                         // Employee Salary
        System.out.println("Salary: " + sal);
    }
    void employeename(String name) {                    // Employee Name
        System.out.println("Name: " + name);
    }
    void employeephone(int phno) {                     // Employee Phone Number
        System.out.println("Phone number: " + phno);
    }
    void employeeaddress(String address) {              // Employee Address
        System.out.println("Address: " + address);
    }
    void employeedepartment(String dept) {              // Employee department
        System.out.println("Department: " + dept);
    }
}

class Employee {
    public static void main(String args[]) {

        Employeeinfo object = new Employeeinfo();

        object.employeeid(101);
        object.employeename("Peter");
        object.employeesal(50000);
        object.employeedepartment("IT");
        object.employeeaddress("Kochi");
        object.employeephone(12455667);
    }
}
