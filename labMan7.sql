INSERT INTO product_order_info(
    product_no,
    product_name,
    product_type,
    product_price,
    product_quantity
)
VALUES(
    101,
    'Laptop',
    'electronics',
    67000,
    1
),(
    NULL,
    'Mobile',
    'electronics',
    23500,
    1
),(
    NULL,
    'Watch',
    'electronics',
    8650,
    2
),(
    NULL,
    'Butter',
    'stationary',
    50,
    5
),(
    NULL,
    'Coca-cola',
    'beverage',
    35,
    2
),(
    NULL,
    'Seven-Up',
    'beverage',
    55,
    1
);


SELECT COUNT(product_no) AS total_order FROM product_order_info;

SELECT COUNT(*) AS product_count, product_name, product_price 
FROM product_order_info 
WHERE product_type = 'electronics';

SELECT product_no, 
       product_name, 
       product_price, 
       product_quantity, 
       SUM(product_price * product_quantity) AS total_per_product 
FROM product_order_info 
GROUP BY product_no, product_name, product_price, product_quantity;



SELECT MAX(product_price) AS max_price 
FROM product_order_info;

