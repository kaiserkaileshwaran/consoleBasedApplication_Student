# Student Database Management System - C++

## Introduction
The Student Database Management System is a simple and efficient solution for managing student information in an educational institution. This system provides basic CRUD (Create, Read, Update, Delete) operations to handle student records effectively using C++.

## Features
- **Create:** Add new student records with comprehensive details.
- **Read:** Retrieve and view existing student information.
- **Update:** Modify and update student details as needed.
- **Delete:** Remove student records from the database.

## Database Schema
The Student Database Management System contains the following attributes for each student:

- **Student Name:** Full name of the student.
- **Student ID:** Unique identification number assigned to each student.
- **Department:** Academic department to which the student belongs.
- **Section:** Current class enrolled by the student.
- **Batch:** Batch year of admission.
- **Phone Number:** Contact number of the student.
- **Address (City):** Residential city of the student.
- **Day Scholar/Hosteller:** Indicates whether the student is a day scholar or a hosteller.
- **CGPA:** Cumulative Grade Point Average of the student.
- **Arrear:** Number of arrear subjects (if any).

## Usage

### 1. Create
To add a new student record, use the `create` operation by providing the necessary details.

```cpp
// Example
create_student(name, student_id, dept, section, batch, phone_number, address, dayscholar, cgpa, arrear);
```

### 2. Read
Retrieve student information using the `read` operation. You can search by student ID or other criteria.

```cpp
// Example
read_student(student_id);
```

### 3. Update
Modify existing student details with the `update` operation. Provide the student ID and the updated information.

```cpp
// Example
update_student(student_id, new_data);
```

### 4. Delete
Remove a student record using the `delete` operation. Provide the student ID to delete the corresponding entry.

```cpp
// Example
delete_student(student_id);
```

