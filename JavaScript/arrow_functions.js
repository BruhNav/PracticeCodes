// const realNumberArray = [4, 5.6, -9.8, 3.14, 42, 6, 8.34, -2];
// const squareList = arr => {
//     const sqauredIntegers = arr.filter(num => Number.isInteger(num) && num > 0).map(x => x * x);
//     return sqauredIntegers;
// }

// const sqauredIntegers = squareList(realNumberArray);
// console.log(sqauredIntegers);



////... operator
// const sum = (function() {
//     return function sum(...output) {
//         return output.reduce((a, b) => a + b, 0);
//     };
// })();
// console.log(sum(1, 2, 3, 4));

//Destructuring Assignment

// var voxel = { x: 3.6, y: 7.4, z: 6.54 };

// var x = voxel.x
// var y = voxel.y;
// var z = voxel.z;

// const {
//     x: a,
//     y: b,
//     z: c
// } = voxel;

// const AVG_TEMPERATURES = {
//     today: 77.5,
//     tommorrow: 79
// };

// function getTempOfTmrw(avgTemperatures) {
//     "use strict"

//     const { tommorrow: tempOfTomorrw } = avgTemperatures;
//     return tempOfTomorrw;
// }

// console.log(getTempOfTmrw(AVG_TEMPERATURES));
// -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- 
// const LOCAL_FORECAST = {
//     today: { min: 72, max: 83 },
//     tomorrow: { min: 73.3, max: 84.6 }
// };

// function getMaxOfTmrw(forecast) {
//     "use strict";

//     const { tomorrow: { max: maxOfTomorrow } } = forecast;
//     return maxOfTomorrow;
// }

// console.log(getMaxOfTmrw(LOCAL_FORECAST));

// const [z, x, , y] = [1, 2, 3, 4, 5, 6];
// console.log(z, x, y);

// let a = 8,
//     b = 6;
// (() => {
//     "use strict";
//     [a, b] = [b, a];
// })();

// console.log(a);
// console.log(b);
//-------------------------------------------------------------------------------------------
// const source = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

// function removeFirstTwo(list) {
//     const [, , ...arr] = list;
//     return arr;
// }
// const arr = removeFirstTwo(source);
// console.log(arr);
// console.log(source)
// -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -
// const result = {
//     success: ["max-length", "no-amd", "prefer-arrow-function"],
//     failure: ["no-var", "var-on-top", "linebreak"],
//     skipped: ["id-blacklist", "no-dup-keys"]
// };

// function makelist(arr) {
//     const resultDisplayArray = [];


//     for (let i = 0; i < arr.length; i++) {
//         resultDisplayArray.push(`<li class="text-warning">${arr[i]}</li>`)
//     }
//     return resultDisplayArray;
// }
// const resultDisplayArray = makelist(result.failure);
// console.log(resultDisplayArray);
//-----------------------------------------------------------------------------------------


// const createPerson = (name, age, gender) => ({ name, age, gender });
// console.log(createPerson("pranav Jaiswal", "22", "male"))
//------------------------------------------------------------------------------------
// class SpaceShuttle {
//     constructor(targetPlanet) {
//         this.targetPlanet = targetPlanet;
//     }
// }
// var zeus = new SpaceShuttle('Jupiter');
// console.log(zeus.targetPlanet);

// function makeClass() {
//     class Vegetable {
//         constructor(name) {
//             this.name = name;
//         }
//     }
//     return Vegetable;
// }

// const Vegetable = makeClass();
// const carrot = new Vegetable('carrot');
// console.log(carrot.name);
//-----------------------------------------------------------------------------------------
// getters and setters
// class book {
//     constructor(author) {
//             this._author = author;
//         }
//         //getter
//     get writer() {
//             return this._author;
//         }
//         //setter
//     set writer(updatedAuthor) {
//         this._author = updatedAuthor;
//     }
// }