# Write your MySQL query statement below
SELECT employee_id , department_id
from Employee
WHERE primary_flag = 'Y'
UNION
SELECT employee_id , department_id
from Employee
GROUP BY employee_id
HAVING COUNT(*) = 1;
