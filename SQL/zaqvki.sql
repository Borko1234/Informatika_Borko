USE MobileOperatorDemo;
GO

-- 1
SELECT *
FROM Employees
WHERE Salary > 3000;
GO

-- 2
SELECT FirstName, LastName, JobTitle
FROM Employees
WHERE JobTitle = 'Sales Specialist'
  AND TownID = 2;
GO

-- 3
SELECT *
FROM Customers
WHERE TownID IN (1, 2);
GO

-- 4
SELECT *
FROM Customers
WHERE SubscriptionPlanID IN (1, 3, 5);
GO

-- 5
SELECT *
FROM Employees
WHERE Salary BETWEEN 2000 AND 4000;
GO

-- 6
SELECT *
FROM Customers
WHERE FirstName LIKE 'M%';
GO

-- 7
SELECT *
FROM Employees
ORDER BY Salary DESC;
GO

-- 8
SELECT *
FROM Employees
WHERE HireDate > '2015-01-01'
ORDER BY HireDate ASC;
GO

-- 9
UPDATE Employees
SET Salary = Salary * 1.10
WHERE JobTitle = 'Technician';
GO
