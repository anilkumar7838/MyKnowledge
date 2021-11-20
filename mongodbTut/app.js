const express = require('express');
const mongoose = require('mongoose')
const app = express();

mongoose.connect("mongodb://localhost:27017/NewDatabase", { useNewUrlParser: true, useUnifiedTopology: true }).then(() => console.log("Connection SucessFull....")).catch((err) => console.log(err));

//Schema
const DataSchema = mongoose.Schema({
    name: {
        type: String,
        required: true
    },
    ctype: String,
    videos: Number,
    author: String,
    active: Boolean,
    // data: new Date()
    date: {
        type: Date,
        default: Date.now
    }
})

//Mongoose model
const Model_Class = new mongoose.model("Playlist", DataSchema); // byDefault Collection is create Plural

// createDocument or insert

const createDoc = async() => {
    try {
        const Document2 = new Model_Class({
            name: "express",
            ctype: "Back End",
            videos: 23,
            author: "Anil Kumar",
            active: true
        })
        const Document3 = new Model_Class({
            name: "JS",
            ctype: "Object",
            videos: 76,
            author: "Anil Kumar",
            active: true
        })
        const Document4 = new Model_Class({
            name: "mongodb",
            ctype: "Bison",
            videos: 34,
            author: "Anil Kumar",
            active: true
        })
        const result = await Model_Class.insertMany([Document2, Document3, Document4]);
        console.log(result);
    } catch (err) {
        console.log(err);
    }
};
// createDoc();
const getDocument = async() => {
    try {
        const result = await Model_Class.find({ videos: { $gt: 45 } }).select({ name: 1 });
        console.log(result);

    } catch (err) {
        console.log(err);
    }
}
getDocument();