function animate1() {
    const box1 = document.getElementById("box1");
    const form1 = document.getElementById("content-id");
    const form2 = document.getElementById("sign-id");
    setTimeout(() => {
        box1.classList.add('box_after');
    }, 0);
    setTimeout(() => {
        form1.style.visibility = "visible";
        form2.style.visibility = "visible";

        form1.classList.add('animation');
        form2.classList.add('animation');
        setTimeout(() => {
            form2.style.zIndex = "1";
        }, 1500);
    }, 1200);

}

function animate2() {
    const box1 = document.getElementById("box1");
    const form1 = document.getElementById("sign-id");
    const form2 = document.getElementById("content-id");

    setTimeout(() => {
        box1.classList.remove('box_after');
    }, 0);
    form1.classList.remove('sign_after');
    form2.classList.remove('content_after');
    setTimeout(() => {
        form1.style.right = "250px";
        form2.style.right = "450px";
        let ele1 = document.getElementById("content-id").style.visibility = "visible";
        let ele2 = document.getElementById("sign-id").style.visibility = "visible";
        setTimeout(() => {
            ele2 = document.getElementById("sign-id").style.zIndex = "1";
        }, 1500);
    }, 1450)

}


//first button
function translate1() {
    let doc = document.getElementById("container-id");
    let str = `<div class="box" id="box1">
            <div class="content_after" id="content-id">
            <center>
                <h2>One of us?</h2>
            </center>
            <h4>Already Have an Account</h4>
            <button class="btn" id="btn-primary" onclick="translate2()">SIGN IN</button>
            </div>
        </div>
        <div class="sign_after" id="sign-id">
            <center>
                <h1>Sign up</h1>
            </center>
            <div>
                <i class="fas fa-user"></i>
                <input type="text" id="name" placeholder="Username">
            </div>
            <div>
            <i class="fas fa-key"></i>
            <input type="Password" id ="password" placeholder="Password">
            </div>
            <div>
                <i class="fas fa-envelope"></i>
                <input type="email" id ="email" placeholder="Email">
            </div>
            <button class="btn" id ="btn-secondary" onclick="getsignup()">SIGN UP</button>
            <p>or Sign up with social platforms</p>
            <div class="icon">
                <i class="fab fa-facebook"></i>
                <i class="fab fa-google"></i>
                <i class="fab fa-twitter"></i>
                <i class="fab fa-linkedin-in"></i>
            </div>
        </div>`;
    doc.innerHTML = str;
    let ele1 = document.getElementById("content-id").style.visibility = "hidden";
    let ele2 = document.getElementById("sign-id").style.visibility = "hidden";
    animate1();
}
// second-button
function translate2() {
    let doc = document.getElementById("container-id");
    let str = `<div class=" box_after box" id="box1">
                <div class="content_after content" id="content-id">
                    <center>
                    <h2>New here?</h2>
                    </center>
                    <h4>Doesn't Have an Account yet:</h4>
                    <button class="btn" id="btn-primary" onclick="translate1()">SIGN UP</button>
                </div>
            </div>
            <div class="sign_after sign" id="sign-id">
                <center>
                    <h1>Sign in</h1>
                </center>
                <div>
                    <i class="fas fa-user"></i>
                    <input type="text" id="name" placeholder="Username">
                </div>
                <div>
                    <i class="fas fa-key"></i>
                    <input type="Password" id ="password" placeholder="Password">
                </div>
                <button class="btn" id ="btn-secondary">LOGIN</button>
                <p>or Sign in with social platforms</p>
                <div class="icon">
                    <i class="fab fa-facebook"></i>
                    <i class="fab fa-google"></i>
                    <i class="fab fa-twitter"></i>
                    <i class="fab fa-linkedin-in"></i>
                </div>
            </div>`;
    doc.innerHTML = str;
    const box1 = document.getElementById("box1");
    const form1 = document.getElementById("sign-id").style.right = "950px";
    const form2 = document.getElementById("content-id").style.right = "950px";

    let ele1 = document.getElementById("content-id").style.visibility = "hidden";
    let ele2 = document.getElementById("sign-id").style.visibility = "hidden";

    ele1 = document.getElementById("sign-id").style.zIndex = "-1";

    animate2();
}

function getsignup() {
    let user = document.getElementById('name').value;
    let pass = document.getElementById('password').value;
    let email = document.getElementById('email').value;

    if (localStorage.getItem("details") == null) {
        let jsonArray = [];
        jsonArray.push([user, pass, email]);
        localStorage.setItem("details", JSON.stringify(jsonArray));
    } else {
        obj = localStorage.getItem("details");
        jsonArray = obj;
        jsonArray.push([user, pass, email]);
        localStorage.setItem("details", JSON.stringify(jsonArray));
    }
    console.log(details);
}
// function getLognIn(){
//     let user=document.getElementById('')
// }