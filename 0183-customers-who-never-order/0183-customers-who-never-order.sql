SELECT Customers.name as Customers from Customers where Customers.id NOT IN (SELECT Orders.customerId from Orders);