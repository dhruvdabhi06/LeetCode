# Write your MySQL query statement below
SELECT firstName,lastName, city, state FROM Person as p left join Address  ON p.personId = Address.personId