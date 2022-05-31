var contacts = [{
    "firstname": "akira",
    "lastname": "toriyama",
    "number": "7974659860",
    "likes": ["pizza", "coding", "brownie Points"]

}, {
    "firstname": "Harry",
    "lastname": "potter",
    "number": "9926133642",
    "likes": ["hogwards", "magic", "hagrid"]
}, {
    "firstname": "sherlock",
    "lastname": "holmes",
    "number": "4654654654",
    "likes": ["classes", "violin"]
}, {
    "firstname": "kristian",
    "lastname": "vos",
    "number": "unknown",
    "likes": ["js", "gaming", "foxes"]
}];

function lookupprofile(name, prop) {
    for (var i = 0; i < contacts.length; i++) {
        if (contacts[i].firstname == name) {
            return contacts[i][prop] || "no such property"
        }
    }
    return "no such contacts"
}

var data = lookupprofile("sherlock", "lastname")

console.log(data);