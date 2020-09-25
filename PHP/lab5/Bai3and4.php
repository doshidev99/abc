<?php
    if(isset($_POST['username']) && isset($_POST['email']) && isset($_POST['password'])){
        $name = $_POST['username'];
        $email = $_POST['email'];
        $password = $_POST['password'];
        if($name == ""){
            echo "<script>alert('Không được để trống họ tên')</script>";
        }
        if($email == ""){
            echo "<script>alert('Không được để trống email')</script>";
        }
        if($password == ""){
            echo "<script>alert('Không được để trống pass')</script>";
        }

    }
?>

<!doctype html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Register.Php</title>
</head>
<body>
<form action="" method="post">
    <label for="">Username</label>
    <input type="text" name="username">
    <label for="">Email</label>
    <input type="text" name="email">
    <label for="">Password</label>
    <input type="text" name="password">
    Checkbox: <input type="checkbox" id="myCheck" onclick="myFunction()">

    <p id="text" style="display:none">Bạn đã hiểu nội quy . Tiếp tục chương trình !!</p>
    <input type="submit" value="Register" >

</form>
<script>
    function myFunction() {
        // Get the checkbox
        var checkBox = document.getElementById("myCheck");
        // Get the output text
        var text = document.getElementById("text");

        // If the checkbox is checked, display the output text
        if (checkBox.checked == true){
            text.style.display = "block";
        } else {

            text.style.display = "none";
            alert("bạn chưa hiểu nội quy");
        }
    }



</script>
</body>
</html>