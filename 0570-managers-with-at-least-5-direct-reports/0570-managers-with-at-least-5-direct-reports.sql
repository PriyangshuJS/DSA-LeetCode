# Write your MySQL query statement below
SELECT
    m.name
FROM
    Employee m
JOIN
    Employee e ON m.id = e.managerId
GROUP BY
    m.name, m.id
HAVING
    COUNT(e.id) >= 5;
