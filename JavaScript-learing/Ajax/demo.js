// console.log("Hello World");

// const xhr = new XMLHttpRequest();

// xhr.open('GET','../Ajax/dummy.txt',true);
// xhr.open('GET','http://dummy.restapiexample.com/api/v1/employee/1',true);
// xhr.open('POST','http://dummy.restapiexample.com/api/v1/create',true);
// xhr.getResponseHeader('Content-type','application/JSON');

// xhr.onreadystatechange = function(){
//     /*
//         0 UNSENT
//         1 OPENED 
//         2 HEADERS
//         3 LOADING 
//         4 DONE
    
//     */
//     console.log("Ready State is: "+ xhr.readyState);
// }

// xhr.onprogress= function(){
//     console.log("Spinner");
// }

// xhr.onload=function (){
//     if(this.status==200){
//         // console.log(this.responseText);
//         let obj=JSON.parse(this.responseText);
//         console.log(obj);
//     }
//     else{
//         console.log("Some error Occured");
//     }
// };

// let params= `{'name': "Ak1231",'Age': '20','gender': "male"}`;
// let params= {name: "Ak1231",Age: '20',gender: "male"};
let params=`{"name":"test","salary":"123","age":"23"}`;
// console.log(params);
// xhr.send(params);

// xhr.send();