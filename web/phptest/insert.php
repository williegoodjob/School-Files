<?php
$servername = "localhost";
$username = "root";
$password = "********";
$dbname = "DB";

$account = $_POST["account"];
$text = $_POST["text"];

$conn = new mysqli($servername, $username, $password, $dbname);

if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

$sql = "INSERT INTO chat (account, text)" . "VALUES ('$account', '$text')";
$result = $conn->query($sql);

$conn->close();
?>

<!DOCTYPE html>
<html>

<head>
    <title>Chat INSERT</title>
    <meta http-equiv="Refresh" content="0; url='db.php'" />
</head>

<body>
</body>

</html>