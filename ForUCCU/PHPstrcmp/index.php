<?php 
	if(@$_GET['name'])
    {
        @$get=$_GET['name'];
        $file = fopen("flag.php", "r") or die("Unable to open flag!");
        $flag = fread($file,filesize("flag.php"));
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