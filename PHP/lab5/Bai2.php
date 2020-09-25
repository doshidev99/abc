<?php
if(!isset($_POST['username']) && !isset($_POST['password'])){
    $_POST['username'] = '';
    $_POST['password'] = '';
}

if( $_POST['username'] == 'user' || $_POST['username'] == 'admin' && $_POST['password'] == '123' || $_POST['password'] == '123456'){
    echo "<script>alert('Đăng nhập thành công')</script>";
}
else{
    echo "<script>alert('Đăng nhập thất bại')</script>";

}
?>

<!DOCTYPE html>
<!-- Created By CodingNepal -->
<html lang="en" dir="ltr">
<head>
    <meta charset="utf-8">
    <title>Transparent Login Form UI</title>
    <link rel="stylesheet" href="style.css">
    <script src="https://kit.fontawesome.com/a076d05399.js"></script>
    <link rel="stylesheet" href="Bai2.css">
</head>
<body>
<div class="bg-img">
    <div class="content">
        <header>Login Form</header>
        <form action="#" method="post">
            <div class="field">
                <span class="fa fa-user"></span>
                <input type="text" required placeholder="Username" name="username">
            </div>
            <div class="field space">
                <span class="fa fa-lock"></span>
                <input type="password" class="pass-key" required placeholder="Password" name="password">
                <span class="show">SHOW</span>
            </div>
            <div class="pass">
                <a href="#">Forgot Password?</a>
            </div>
            <div class="field">
                <input type="submit" value="LOGIN">
            </div>
        </form>
        <div class="login">
            Or login with</div>
        <div class="links">
            <div class="facebook">
                <i class="fab fa-facebook-f"><span>Facebook</span></i>
            </div>
            <div class="instagram">
                <i class="fab fa-instagram"><span>Instagram</span></i>
            </div>
        </div>
        <div class="signup">
            Don't have account?
            <a href="#">Signup Now</a>
        </div>
    </div>
</div>
<script>
    const pass_field = document.querySelector('.pass-key');
    const showBtn = document.querySelector('.show');
    showBtn.addEventListener('click', function(){
        if(pass_field.type === "password"){
            pass_field.type = "text";
            showBtn.textContent = "HIDE";
            showBtn.style.color = "#3498db";
        }else{
            pass_field.type = "password";
            showBtn.textContent = "SHOW";
            showBtn.style.color = "#222";
        }
    });
</script>
</body>
</html>
