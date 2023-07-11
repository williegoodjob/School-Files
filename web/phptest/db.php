<html>

<head>
    <title>Chat</title>
</head>

<body>
    <table border="1">
        <?php
        $servername = "localhost";
        $username = "root";
        $password = "123456";
        $dbname = "DB";

        // Create connection
        $conn = new mysqli($servername, $username, $password, $dbname);
        // Check connection
        if ($conn->connect_error) {
            die("Connection failed: " . $conn->connect_error);
        }

        if (!empty($_POST) && isset($_POST['account'])) {
            $search = $_POST['account'];
            $sql = "SELECT * FROM chat WHERE account = '$search'";
        }else{
            $sql = "SELECT * FROM chat";
        }

        $result = $conn->query($sql);
        
        if ($result->num_rows > 0) {
            // output data of each row
            echo "<tr>" . "<td>time</td>" . "<td>account</td>" . "<td>text</td>" . "</tr>";
            while ($row = $result->fetch_assoc()) {
                echo "<tr>" . "<td>" . $row["time"] . "</td>" . "<td>" . $row["account"] . "</td>" . "<td>" . $row["text"] . "</td>" . "</tr>";
            }
        } else {
            echo "no data found";
        }
        $conn->close();
        ?>
    </table>
    <form action="insert.php" method="post">
        <label>your name:<input type="text" name="account"></label><br />
        <label>say:<input type="text" name="text"></label><br />
        <input type="submit" value="送出">
    </form>

    <!-- all user -->
    <form action="#" method="post">
        <input type="submit" value="all user">
    </form>
    <!-- search username -->
    <form action="#" method="post">
        <label>search:<input type="text" name="account"></label><br />
        <input type="submit" value="送出">
    </form>

</body>