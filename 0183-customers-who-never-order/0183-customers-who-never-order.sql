# Write your MySQL query statement below
SELECT name Customers from Customers where id not in(select customerId from orders);