<script type="text/javascript" src="aes.js"></script>
        <script type="text/javascript" src="sha256.js"></script>
<script> 

var user = "\x68\x34\x78\x30\x72";
var k = CryptoJS.SHA256("\x93\x39\x02\x49\x83\x02\x82\xf3\x23\xf8\xd3\x13\x37");
var key = CryptoJS.enc.Hex.parse(k.toString().substring(0,32));
var iv = CryptoJS.enc.Hex.parse(k.toString().substring(32,64));
var encrypted = "ob1xQz5ms9hRkPTx+ZHbVg==";

p = CryptoJS.AES.decrypt(encrypted, key, {iv: iv})

k = '' + p;

function hex_to_ascii(str1) {  
    var hex  = str1.toString();  
    var str = '';  
    for (var n = 0; n < hex.length; n += 2) {  
        str += String.fromCharCode(parseInt(hex.substr(n, 2), 16));  
    }  
    return str;  
} 

console.log(user, hex_to_ascii(k));
</script>
