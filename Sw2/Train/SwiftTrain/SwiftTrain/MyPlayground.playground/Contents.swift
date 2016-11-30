//: Playground - noun: a place where people can play

import Cocoa

var str = "Hello, playground"
print(str);


        /**********************  TUPLES  ********************************/


//You can create a tuples of different types, i mean in one tuple
//...you can have lot of different types of values
//... let myval = (someInt, someString, someInt etc..);

let http404error = (404, "Not Found");
print(http404error);

//Here we divide tuple values into two different variables

let (code, errorName) = http404error;

//(code ->will take first value from http404error tuple
//errorName->will take second value from http404error tuple

print(code);
print(errorName);

//If you need only some part of tuple, lets say only second part
//... you can do something like '_' in variable place which you can to skip

let(_, ama) = http404error;
print(ama);

//What is more, you can acces tuples elements using 'indexes'

print(http404error.0);
print(http404error.1);
print("Not good if value is \(http404error.0)")

//Also You can name tuple values just in time when u initialize a tuple

let http200status = (statuscode: 200, statusName: "Cool");
print(http200status.statuscode);



        /**********************  ASSERTIONS  ********************************/

        /* You use assertions to check whetever the value is true or false
                / Code continues only if assertion is true */

let age = 3;
//b
assert(age >= 0, "A person age cannot be less than zero");