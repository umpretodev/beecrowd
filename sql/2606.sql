SELECT p.id, p.name FROM products p
JOIN categories g ON p.id_categories = g.id
WHERE g.name LIKE 'super%';