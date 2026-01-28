USE CarsShowroom;

SELECT cl.FirstName, cl.LastName, c.Brand, c.Model, c.Color, c.Price
FROM Clients cl
JOIN Sales s ON cl.ID = s.ClientID
JOIN Cars c ON s.CarID = c.ID
ORDER BY c.Brand, c.Model, c.Price DESC;

SELECT c.Brand, c.Model, c.Year, c.Price, ca.Category
FROM Cars c
JOIN Categories ca ON c.CategoryID = ca.ID
WHERE c.Price BETWEEN 20000 AND 30000
AND ca.Category = 'Джип';

SELECT c.Brand, c.Model, ca.Category, c.Year, c.Price
FROM Cars c
JOIN Categories ca ON c.CategoryID = ca.ID
JOIN Engines e ON c.EngineID = e.ID
WHERE e.Engine = 'Diesel'
AND ca.Category = 'Ван';

SELECT cl.FirstName, cl.LastName, c.Brand, c.Model, c.Color, c.Price
FROM Clients cl
JOIN Sales s ON cl.ID = s.ClientID
JOIN Cars c ON s.CarID = c.ID
WHERE c.Color = 'Черен'
ORDER BY c.Price;

SELECT cl.FirstName, cl.LastName, c.Brand, c.Model, c.Color, c.Price
FROM Clients cl
JOIN Sales s ON cl.ID = s.ClientID
JOIN Cars c ON s.CarID = c.ID
WHERE (c.Brand = 'Audi' OR c.Brand = 'Toyota')
AND c.Price < 30000;

SELECT c.Brand, c.Model, c.Price, cl.FirstName, cl.LastName
FROM Sales s
JOIN Cars c ON s.CarID = c.ID
JOIN Clients cl ON s.ClientID = cl.ID
WHERE s.SaleDate = '2023-05-21';

SELECT ca.Category, c.Brand, c.Model
FROM Categories ca
LEFT JOIN Cars c ON ca.ID = c.CategoryID;

SELECT ca.Category
FROM Categories ca
LEFT JOIN Cars c ON ca.ID = c.CategoryID
WHERE c.ID IS NULL;

SELECT cl.FirstName, cl.LastName, s.SaleDate
FROM Clients cl
LEFT JOIN Sales s ON cl.ID = s.ClientID;

SELECT cl.FirstName, cl.LastName
FROM Clients cl
LEFT JOIN Sales s ON cl.ID = s.ClientID
WHERE s.ID IS NULL;


USE Hotel;

SELECT c.Name, r.Number, rs.Date, rs.StayDuration
FROM Reservations rs
JOIN Clients c ON rs.ClientID = c.ID
JOIN Rooms r ON rs.RoomID = r.ID;

SELECT DISTINCT c.ID, c.Name, c.IDCard, c.Address, c.Phone, c.Nationality
FROM Clients c
JOIN Reservations rs ON c.ID = rs.ClientID
JOIN Rooms r ON rs.RoomID = r.ID
WHERE r.Price > 100;

SELECT c.Name, c.Nationality, r.Number
FROM Clients c
JOIN Reservations rs ON c.ID = rs.ClientID
JOIN Rooms r ON rs.RoomID = r.ID
JOIN Types t ON r.TypeID = t.ID
WHERE t.Name = 'Делукс';

SELECT c.Name, r.Number, t.Name, rs.Date, rs.StayDuration
FROM Reservations rs
JOIN Clients c ON rs.ClientID = c.ID
JOIN Rooms r ON rs.RoomID = r.ID
JOIN Types t ON r.TypeID = t.ID
WHERE c.ID = 3;

SELECT r.ID, r.Beds, t.Name, r.Price
FROM Rooms r
LEFT JOIN Reservations rs ON r.ID = rs.RoomID
JOIN Types t ON r.TypeID = t.ID
WHERE rs.ID IS NULL;



USE TaxiServices;

SELECT c.Brand, c.RegNumber, d.FirstName, d.LastName,
DATE_FORMAT(s.HireDateTime, '%Y-%m-%d'),
s.TraveledKm
FROM Cars c
JOIN Drivers d ON c.DriverID = d.ID
JOIN Services s ON c.ID = s.CarID
WHERE s.TraveledKm < 50;

SELECT c.Brand, c.RegNumber, d.FirstName, d.LastName, s.HireDateTime
FROM Cars c
JOIN Drivers d ON c.DriverID = d.ID
JOIN Services s ON c.ID = s.CarID
WHERE MONTH(s.HireDateTime) = 6;

SELECT c.Brand, c.RegNumber, d.FirstName, d.LastName, s.HireDateTime, s.TraveledKm, s.Downtime
FROM Cars c
JOIN Drivers d ON c.DriverID = d.ID
JOIN Services s ON c.ID = s.CarID
WHERE YEAR(s.HireDateTime) = YEAR(CURDATE());

INSERT INTO Drivers (FirstName, LastName, IDCard, Address, GSM)
VALUES ('Иван', 'Петров', '1234567890', 'София', '0888123456'),
       ('Георги', 'Иванов', '9876543210', 'Пловдив', '0899123456');

INSERT INTO Cars (Brand, RegNumber, Year, Places, InitialFee, PricePerKm, PricePerMinute, DriverID)
VALUES ('Toyota', 'PB9999', 2020, 4, 2.50, 1.20, 0.50, 1),
       ('BMW', 'CA8888', 2019, 4, 3.00, 1.50, 0.60, 2);

SELECT c.Brand, c.RegNumber, d.FirstName, d.LastName
FROM Cars c
JOIN Drivers d ON c.DriverID = d.ID
LEFT JOIN Services s ON c.ID = s.CarID
WHERE s.ID IS NULL;


-- Задача 21
-- Използва се LEFT JOIN, защото трябва да се изведат всички отдели, включително и тези без служители.

-- Задача 22
-- Използва се LEFT JOIN между Clients и Orders.

-- Задача 23
-- Автоматично се извършва INNER JOIN, когато двете таблици имат колона с еднакво име и тип.

-- Задача 24
-- Може да се изтрие запис, ако няма записи в другата таблица, които го използват като външен ключ.
-- Ако има зависими записи, изтриването ще даде грешка или ще зависи от ON DELETE правилото.

-- Задача 25
-- Решението е използване на ON DELETE CASCADE или ON DELETE SET NULL при дефиниране на външния ключ.
 
