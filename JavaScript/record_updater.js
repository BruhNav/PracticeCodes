var collection = {
    "2548": {
        "album": "album1",
        "artist": "artist1",
        "tracks": [
            "let it rock",
            "you give lova a bad name"
        ]
    },
    "2468": {
        "album": "1999",
        "artist": "Prince",
        "tracks": [
            "1999",
            "little red corvette"
        ]
    },
    "1245": {
        "artist": "robert palmer",
        "tracks": []
    },
    "5439": {
        "album": "abba gold"
    }
};

var collectioncopy = JSON.parse(JSON.stringify(collection));

function updaterecords(id, prop, value) {
    if (value === "") {
        delete collection[id][prop];
    } else if (prop === "tracks") {
        collection[id][prop] = collection[id][prop] || [];
        collection[id][prop].push(value);
    } else {
        collection[id][prop] = value;
    }
    return collection;
}

// console.log(updaterecords(5439, "artist", "abba"));

console.log(updaterecords(2468, "tracks", "test"));