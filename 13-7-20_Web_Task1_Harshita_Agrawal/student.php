<?php
session_start();
include('db.php');
    if(isset($_POST['submit']))
    {
        $id=$_POST['stud_id'];
        $query="SELECT * FROM `student` WHERE `stud_id`='$id'";
        $run=mysqli_query($con,$query);
        $row=mysqli_num_rows($run);
        if($row == 1){
            $_SESSION['stud_id']=$id;
            echo "Login Successful". "<br>";
            $stud_row=mysqli_fetch_assoc($run);
            echo "Welcome, ".$stud_row['stud_name']. "<br>";
            echo "Student Id = ".$stud_row['stud_id']. "<br>";
            echo "Student name = ".$stud_row['stud_name']. "<br>";
            echo "Student Branch = ".$stud_row['branch']. "<br>";
            echo "Student CGPA = ".$stud_row['cgpa']. "<br>";
        }
        else{
            echo "Login Failed". "<br>";
            echo "Student Id does not exist.";
        }
    }
?>