<?php

    if(!isset($_POST['username'])){
        $_POST['username'] = '';
    }
    $_trueusername = "Longtuongbuilong";
    if($_POST['username'] == $_trueusername){
        echo "<script>alert('Đăng nhập thành công')</script>";

    }
    else{
        echo "<script>alert('Đăng nhập thất bại')</script>";

    }

?>

<!doctype html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport"
          content="width=device-width, user-scalable=no, initial-scale=1.0, maximum-scale=1.0, minimum-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>Document</title>
</head>
<body>
<form action="Bai1.php" method="post">
    <label for="">Username</label>
    <input type="text" name="username">
    <input type="submit" value="Check Your Username">
</form>
</body>
</html>
