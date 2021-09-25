//inserting data in mongo
db
use anil
db.items.insertOne({ name: "Samsung 30s", price: 22500, rating: 4.5, qty: 233, sold: 98 })

db.items.insertMany([{ name: "Moto 30s", price: 29000, rating: 3.5, qty: 133, sold: 598 }, { name: "redmi 12pro", price: 33000, rating: 4.0, qty: 300, sold: 270 }, { name: "realme 80", price: 103000, rating: 4.5, qty: 390, sold: 570, isBig: true }])

// Searching data in mongo
use anil
db.items.find({ rating: 3.5 }) //{ price: 3.5 } filter object
db.items.find({ rating: { $gte: 3.5 } })
    //AND Opreator
db.items.find({ rating: { $gte: 3.5 }, price: { $gte: 30000 } })
db.items.find({ rating: { $lte: 4 }, price: { $gt: 30000 } })
db.items.find({ $or: [{ rating: { $lte: 4 }, price: { $gt: 30000 } }] })
    // To view only useful data
db.items.find({ rating: { $gt: 3.5 } }, { rating: 1 })
db.items.find({ rating: { $gt: 3.5 } }, { rating: 1, qty: 1 })

// Deleting data in mongo/*same as searching */
db.items.deleteOne({ price: 22500 })
db.items.deleteMany({ price: 22500 })
    // Updating data in mongo
db.items.updateOne({ name: "Moto 30s" }, { $set: { rating: "3" } })
db.items.updateMany({ name: "Moto 30s" }, { $set: { rating: "3" } })