mysql> select * from demand2;
+------+------+
| day  | qty  |
+------+------+
|    1 |   10 |
|    2 |    6 |
|    3 |   21 |
|    4 |    9 |
|    6 |   12 |
|    7 |   18 |
|    8 |    3 |
|    9 |    6 |
|   10 |   23 |
+------+------+
9 rows in set (0.00 sec)

mysql> select * from demand;
+---------+------+------+
| product | day  | qty  |
+---------+------+------+
| A       |    1 |   10 |
| A       |    2 |    6 |
| A       |    3 |   21 |
| A       |    4 |    9 |
| A       |    5 |   19 |
| B       |    1 |   12 |
| B       |    2 |   18 |
| B       |    3 |    3 |
| B       |    4 |    6 |
| B       |    5 |   23 |
+---------+------+------+
10 rows in set (0.00 sec)

mysql> select * from salesdata
    -> ;
+---------+----------+-------+---------+
| product | location | sales | refunds |
+---------+----------+-------+---------+
| A       | Pune     |   100 |      10 |
| A       | Mumbai   |   150 |      15 |
| A       | Nashik   |   120 |       8 |
| B       | Pune     |   200 |      20 |
| B       | Mumbai   |   180 |      12 |
| B       | Nashik   |   160 |      10 |
+---------+----------+-------+---------+



/*

1. Write a query to display the day and qty from the demand2 table along with the
previous day's quantity using a window function.

*/

select day, qty, lead(qty,1) over () as "prev_day_qty" from demand2;


/*

2. Write a query to display the day, qty, and the next day's quantity using a window
function. 

*/

select day, qty, lead(qty,1) over () as "next day" from demand;

/*

3. Write a query to display the day, qty, and the difference between the current day's
quantity and the previous day's quantity. 

*/

select day, qty, abs(qty - lag(qty) over()) as "diff in qty" from demand;


/*

4. Write a query to display the product, day, qty, and the previous day's quantity for
each product using a window function. 

*/


select product, day, qty,lag(qty,1) over () as "prev day qty" from demand;


/*

5. Write a query to display the product, day, qty, and the next day's quantity for each
product. 

*/

select product, day, qty, lead(qty,1) over (PARTITION BY product) as "next day qty" from demand;


/*

6. Write a query to display the product, day, qty, and the difference between the
current day's quantity and the previous day's quantity for each product.

*/


select product, day, qty, qty - lag(qty,1) over (PARTITION BY product) as "diff" from  demand;


/*look for this question again as gpt is givingg the differnt*/


/*

7. Write a query to display the day, qty, and the cumulative sum of quantity using a
window function. 

*/







select day, qty,sum(qty) over () as "cumulative sum" from demand;




















