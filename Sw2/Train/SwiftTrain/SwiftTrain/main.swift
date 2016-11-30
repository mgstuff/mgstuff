//
//  main.swift
//  SwiftTrain
//
//  Created by Michał Grycki on 03.07.2016.
//  Copyright © 2016 Michał Grycki. All rights reserved.
//

import Foundation

var proflaot: Float = 30;
let superint: Int = 30;


/* Including numeric values inside a string variable
 * First is by using \(valname) inside the string
 * Second is to make type conversion String(numericValue)
*/

let label = "The width is \(superint)";
let width = 34;



// Use \() to include a floating-point calculation in a string and to include someone’s name in a greeting

var cal: Float = 4;
var fal: Float = 4;
var cfal: String = "You have to pay \(cal + fal)";


/*
 * Arrays
 * Dictionares
*/

var shoppingArray = ["oranges", "apples", "bananas", "milk"];

print(shoppingArray[0]);
print(shoppingArray[1]);

shoppingArray[0] = "nuddles";
print(shoppingArray[0]);

var shopDic = [

    "Name" : "Michal",
    "Surname" : "Grycki",

];

shopDic["Age"] = "22";

//To print dictionary element without "Optional()" wrapper you must put '!' after element which you are accessing

print(shopDic["Name"]!);
print(shopDic["Age"]!);

// for-in loop usage

var wynik = [70, 30, 40];
var teamscore: Int = 0;

for score in wynik {
    print(wynik[teamscore]);
    teamscore += 1;
    if(teamscore == 3){
        break;
    }
}


//Using optionals values '?'

var optionalString: String? = "Hello";
print(optionalString == nil); //Compare if optionalString variable is equal to null

var optionalName: String? = "John Doe";
var greetings = "Hello!";

if let name = optionalName {
    greetings = "Hello, \(name)";
    print(greetings);
}

//Assign default value to some variable using '??'

var nickName: String? = nil;
var fullName: String = "Jon tra volta";


//if nickName is equal to nil then fullName is assigned to informalGreeting
let informalGreeting = "Hi \(nickName ?? fullName)";

print(informalGreeting);


//Switch
var vegetable = "red pepper";

switch(vegetable) {
    case "rzodkiew":
        print("Dont eat me pleaseee");
    case var x where x.hasSuffix("pepper"): //hasSuffix("what") checks if some variable ends with "what"
        print("Eat me please");
    default:
        print("dont eat anything anymore");
}


// for-in loop for dictionaries
var intNumbers = [
    "Prime": [2,3,5,7,11,13],
    "Fibo":  [1,1,2,3,5,8],
    "Square":[1,4,16,256],
]
var largest = 0;
for(kind, numbers) in intNumbers {
    for var number in numbers {
        if number > largest {
            largest = number;
        }
        print("New Largest Num\n \(largest)");
    }
    
}


//while loop i think is like a C while loop i mean
/*
  do{
 
 }while-condition-
 
 but....
 
 {}in Swift you write....
 
 repeat{
 
 }while-condition-
 
*/

var myNew: String = "POLAND";
var count = 10;

repeat{
    print(myNew);
    count -= 1;
}while count > 0;


//In swift you can arrange a range!@ IMPRESSIVE
// You do 0...4 if you want include 4 too
// You do 0..<4 if u want to take range 0.1.2.3


var total = 0;

for i in 0...4 { //0 -weszlo 1-weszlo 2-weszlo 3-weszlo 4-weszlo
    total += 1;
    print(total);
}


for index in 1...5 {
    print("\(index) times 5 is \(index * 5)");
}

print("\n\n");


/* Arrays
  *
*/

//Declaration of Array
// Array<Element> or just [Element]

var someInts = [Int]();
print("someInts sizeof items \(someInts.count)\n");

//Now array size of 1, with .append(some numeric variable) we add element to array
someInts.append(3);
print("someInts sizeof items \(someInts.count)\n");

//Now our array is empty again
someInts = [];

// Always you can initialize array and auto assign values to it
var threeDoubles = [Double](count: 3, repeatedValue: 0.0);

//Contatencation of arrays

//One Array
var anotherThreeDoubles = [Double](count: 3, repeatedValue: 2.5);

//Print  all values each in array
for val in anotherThreeDoubles {
    print("\(val)\n");
}

//Adding two arrays into one
var sixDoubles = threeDoubles + anotherThreeDoubles;


//Accesing index of array element

var shoppingList: [String] = ["Eggs", "Milk"];

/* BUT ALSO we can declare it as */
var shopList = ["Eggs", "Milk"]; //Swift automatically knows what type is array

// We can Also check if array is empty or no with anyARRAY.isEmpty

if shoppingList.isEmpty {
    print("Array is empty");
} else {
    print("Array is not empty");
}

//Another method to add elements to list
 //Adding one element
    shoppingList += ["Baking Powder"];
 //Adding more than one element
shoppingList += ["Proszek", "Jedzenie", "Cos extra"];













