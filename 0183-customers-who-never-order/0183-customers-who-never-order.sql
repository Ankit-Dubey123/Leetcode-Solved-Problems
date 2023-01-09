# Write your MySQL query statement below
SELECT A.name as Customers  FROM Customers A where A.id NOT IN (SELECT B.customerId FROM Orders B);