<?php 
    include 'flag.php';
	if(@$_GET['name'])
    {
        @$get=$_GET['name'];
        if(@strcmp($get, $flag)==0)
        {
            echo $flag;
        }
        else
        {
            header('Location: you_should_not_pass.php');
        }
        fclose($file);
    }
	highlight_file('PHPstrcmp.php');
?>