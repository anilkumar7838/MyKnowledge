# key: value       (pair)
myDict={
    "greet": "Good Morning ",
    'name' : "Ajay kumar",            # single Quotes is also valid
    "marks":[1,5,3,2,4],
    "AnotherDict":{
        "name":"Anil ",
        "Sirname":"Kumar"
    }
}
# print(myDict)
# print(myDict["greet"]+myDict["name"])
# print()
myDict["addEle"]=[12,123,234,345]
myDict["marks"]=[12,123,234,345]  #Change dictationary is Muttable
# print(myDict)

# methods
# print(myDict.keys())
# print()
# print(type(myDict.keys()))
# print()
# print(list(myDict.keys()))
# print()
# print(myDict.values())
# print()
# print(myDict.items())
# print()
updateDict={
    "hello": "anil",
    "Marks":[1,5,3,4,2] #also update previous key
}
print(myDict.update(updateDict)) #return none but update Dict
print(myDict)

# difference
print(myDict.get("heko")) #return None
# print(myDict["heko"])  throws error