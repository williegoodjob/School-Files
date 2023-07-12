<html>
<head>
    <title>Chat</title>
</head>
<body>
    <?php
    $servername = "localhost";
    $username = "root";
    $password = "******";
    $dbname = "DB";

    $conn = new mysqli($servername, $username, $password, $dbname);

    if ($conn->connect_error) {
        die("Connection failed: " . $conn->connect_error);
    }
    $noSelect = false;
    if (!empty($_POST) && isset($_POST['insert'])) {
        $account = $_POST['account'];
        $text = $_POST['text'];
        $sql = "INSERT INTO chat (account, text) VALUES ('$account', '$text')";
        $noSelect = true;
    } elseif (!empty($_POST) && isset($_POST['search'])) {
        $search = $_POST['account'];
        $sql = "SELECT * FROM chat WHERE BINARY account = '$search'";
    } elseif (!empty($_POST) && isset($_POST['delete'])) {
        $delete = $_POST['delete'];
        $sql = "DELETE FROM chat WHERE time = '$delete'";
        $noSelect = true;
    } else {
        $sql = "SELECT * FROM chat";
    }

    if ($noSelect == true) {
        $conn->query($sql);
        $sql = "SELECT * FROM chat";
    }
    $result = $conn->query($sql);


    if ($result->num_rows > 0) {
        echo "<table border=\"1\">" . "<tr>" . "<td>time</td>" . "<td>account</td>" . "<td>text</td>" . "<td>delete</td>" . "</tr>";
        while ($row = $result->fetch_assoc()) {
            echo "<tr>" . "<td>" . $row["time"] . "</td>" . "<td>" . $row["account"] . "</td>" . "<td>" . $row["text"] . "</td>" . "<td>" . "<form action=\"#\" method=\"post\"><input type=\"hidden\" name=\"delete\" value=\"" . $row["time"] . "\"/><input type=\"submit\" value=\"刪除\"></form>" . "</td>" . "</tr>";
        }
    } else {
        echo "no data found";
    }
    $conn->close();
    ?>
    </table>

    <form action="#" method="post">
        <label>your name:<input type="text" name="account"></label><br />
        <label>say:<input type="text" name="text"></label><br />
        <input type="submit" value="送出">
        <input type="hidden" name="insert" />
    </form>

    <form action="#" method="post">
        <input type="submit" value="all user">
    </form>

    <form action="#" method="post">
        <label>search:<input type="text" name="account"></label><br />
        <input type="submit" value="送出">
        <input type="hidden" name="search" />
    </form>

</body>