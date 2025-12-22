USE MobileOperatorDemo;
GO

CREATE TABLE Towns (
    ID INT IDENTITY(1,1) PRIMARY KEY,
    Name NVARCHAR(50) NOT NULL
);
GO

CREATE TABLE SubscriptionPlans (
    ID INT IDENTITY(1,1) PRIMARY KEY,
    Name NVARCHAR(50),
    Price DECIMAL(10,2),
    IncludedMinutes INT,
    IncludedMessages INT,
    IncludedData INT
);
GO

CREATE TABLE Employees (
    ID INT IDENTITY(1,1) PRIMARY KEY,
    FirstName NVARCHAR(50),
    MiddleName NVARCHAR(50),
    LastName NVARCHAR(50),
    EGN CHAR(10),
    JobTitle NVARCHAR(50),
    Salary DECIMAL(18,2),
    HireDate DATE,
    ManagerID INT NULL,
    TownID INT NULL,
    CONSTRAINT FK_Employees_Manager FOREIGN KEY (ManagerID) REFERENCES Employees(ID),
    CONSTRAINT FK_Employees_Towns FOREIGN KEY (TownID) REFERENCES Towns(ID)
);
GO
