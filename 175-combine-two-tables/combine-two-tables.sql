# Write your MySQL query statement below
select Person.firstName , Person.lastName, address.city, address.state
from Person
left join address 
on person.personId=address.personId