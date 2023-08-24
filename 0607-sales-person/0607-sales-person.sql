# Write your MySQL query statement below

SELECT DISTINCT sp.name
FROM SalesPerson sp
WHERE NOT EXISTS (
    SELECT 1
    FROM Orders o
    JOIN Company c ON o.com_id = c.com_id
    WHERE c.name = 'RED' AND sp.sales_id = o.sales_id
);
