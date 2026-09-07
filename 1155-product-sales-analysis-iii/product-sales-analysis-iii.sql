# Write your MySQL query statement below
Select  s.product_id , s.year as first_year,
s.quantity , s.price FROM Sales s
JOIN(SELECT product_id , MIN(year) AS first_year
FROM SALES
group by product_id) f
ON s.product_id = f.product_id
AND s.year = f.first_year;