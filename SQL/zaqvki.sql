USE MobileOperatorDemo;
#1
SELECT *
FROM Employees
WHERE Salary > 3000;
#2
SELECT FirstName, LastName, JobTitle
FROM Employees
WHERE JobTitle = 'Sales Specialist'
  AND TownID = 2;
#3
SELECT *
FROM Customers
WHERE TownID IN (1, 2);
#4
SELECT *
FROM Customers
WHERE SubscriptionPlanID IN (1, 3, 5);
#5
SELECT *
FROM Employees
WHERE Salary BETWEEN 2000 AND 4000;
#6
SELECT *
FROM Customers
WHERE FirstName LIKE 'M%';
#7
SELECT *
FROM Employees
ORDER BY Salary DESC;
#8
SELECT *
FROM Employees
WHERE HireDate > '2015-01-01'
ORDER BY HireDate ASC;
#9
UPDATE Employees
SET Salary = Salary * 1.10
WHERE JobTitle = 'Technician';



