# Write your MySQL query statement below
select  u.unique_id ,e.name from Employees AS e left JOIN EmployeeUNI  as u ON e.id = u.id;  