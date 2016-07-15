//本地服务
var express = require("express");
var app = express();

app.use(express.static(__dirname + "/bin"));
app.listen(8080);