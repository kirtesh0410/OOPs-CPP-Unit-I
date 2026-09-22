# OOPs-CPP-Unit-I
Object Oriented Programming with C++ - Unit I

Student Name :- Kirtesh Bharambe

ZPRN :- 125UET1089

Class/Division :- SY AIDS C

Unit :- I

List of Programs :- 1)Smart Agriculture Sensor Monitor
                    
                    2)Student Attendance Management System
                    
                    3)E-Commerce Product Catalog
                    
                    4)Mini Project :- Smart Home Device Manager
Brief descriptions of each Program :- 

• 1)Smart Agriculture Sensor Monitor :-

This C++ program simulates a Smart Agriculture Sensor Monitor that stores and monitors soil-moisture readings from multiple sensors.

SoilSensor class represents an individual soil sensor.
Private data members (sensorId, moistureLevel, and timestamp) provide encapsulation.
A parameterized constructor initializes each sensor object.
The readSensor() function updates the sensor's moisture reading and timestamp.
The displayData() function displays the current sensor information.
A vector of objects stores multiple sensors (S001, S002, and S003).
A range-based for loop displays the readings of all sensors.
Finally, the reading of sensor S001 is updated from 45.2% at 08:00 to 47.5% at 09:00.

In short: The program demonstrates how OOP can be used to represent real-world agricultural sensors, store their individual states, and update their readings in real time.

• 2)Student Attendance Management System :-

This C++ program implements a **Student Attendance Management System** to track the attendance of students and calculate their attendance percentage automatically.

* **`Student` class** represents an individual student.
* Private data members such as `rollNo`, `name`, `totalDays`, and `presentDays` demonstrate **encapsulation**.
* A **parameterized constructor** initializes the student's roll number and name.
* The `markAttendance()` function records whether a student is present or absent.
* The `getAttendancePercentage()` function calculates the attendance percentage using the number of classes attended and total classes.
* **Conditional logic** is used to increase `presentDays` only when the student is present and to avoid division by zero.
* The `display()` function shows the student's roll number, name, and attendance percentage.
* Two student objects, **Rahul** and **Priya**, are created and their attendance records are displayed.

**In short:** The program demonstrates how OOP can be used to manage student attendance, hide internal data through encapsulation, and automatically calculate attendance percentages.

• 3)E-Commerce Product Catalog :-

This C++ program implements an **E-Commerce Product Catalog** to store and manage product information such as product ID, name, price, and stock quantity.

* **`Product` class** represents an individual product.
* Private data members demonstrate **encapsulation** by restricting direct access to product details.
* A **parameterized constructor** initializes each product and increases the static product count.
* The **static data member `totalProducts`** keeps track of the number of active product objects.
* **Inline accessor functions** (`getId()`, `getName()`, and `getPrice()`) provide quick access to product information.
* The `updateStock()` function allows the stock quantity to be changed.
* The **static member function `getTotalProducts()`** returns the current number of product objects.
* The **destructor** decreases `totalProducts` when a product object is destroyed.
* The `display()` function shows the details of each product.

**In short:** The program demonstrates how OOP concepts such as **static members, constructors, destructors, encapsulation, and inline functions** can be used to manage products in an e-commerce system.

• 4)Mini Project :- Smart Home Device Manager :-

### Brief Description of the Mini-Project

This C++ mini-project implements a **Smart Home Device Manager** to monitor and control different smart devices such as **lights, thermostats, cameras, and door locks**.

* A **class** represents each smart device.
* Each device stores a **device ID, location, status, and last-updated time**.
* **Encapsulation** is used to protect the device data from direct access.
* Member functions are used to **switch devices ON/OFF and change their status**.
* The system can **display an overall home dashboard** showing the current state of all connected devices.
* Multiple device objects can be maintained to represent different devices in the home.

**In short:** The mini-project demonstrates how OOP concepts can be used to create a simple **smart home management system** that monitors, controls, and displays the status of multiple devices.
