CREATE TABLE product_order_info (
    product_no INT(11) NOT NULL AUTO_INCREMENT,
    product_name VARCHAR(255) NOT NULL,
    product_type ENUM('electronics', 'stationary', 'food', 'beverage') DEFAULT NULL,
    product_price FLOAT(10, 2) NOT NULL,
    product_quantity SMALLINT NOT NULL,
    order_date DATETIME DEFAULT CURRENT_TIMESTAMP NOT NULL,
    PRIMARY KEY (product_no)
);


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


SELECT
    product_no,
    product_name,
    product_price,
    MID(product_type, 3, 3)
FROM
    product_order_info;
