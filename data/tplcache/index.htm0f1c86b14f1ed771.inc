<?php
$z[0]=Array("global","",271,297);
$z[0][4]['name']="cfg_webname";
$z[1]=Array("global","",341,371);
$z[1][4]['name']="cfg_description";
$z[2]=Array("global","",408,435);
$z[2][4]['name']="cfg_keywords";
$z[3]=Array("include","",790,825);
$z[3][4]['filename']="head.htm";
$z[4]=Array("global","",1109,1135);
$z[4][4]['name']="cfg_webname";
$z[5]=Array("global","",1227,1253);
$z[5][4]['name']="cfg_webname";
$z[6]=Array("arclist","\r\n        <li> <a href=\"[field:arcurl/]\" class=\"red-jia\"><img src=\"/skin/images/red_jia.png\"  /></a> <a href=\"[field:arcurl/]\" class=\"product-thumbnail\"><img src=\"[field:picname/]\" width=\"198px\" height=\"245px\" /> <span class=\"focus-product-bt\">·&nbsp;&nbsp;[field:title/]</span> <span class=\"focus-product-content\">\r\n          <h2>[field:title/]</h2>\r\n          <p>[field:info/]...</p>\r\n          </span></a> </li>\r\n        ",1710,2207);
$z[6][4]['infolen']="60";
$z[6][4]['row']="4";
$z[6][4]['titlelen']="32";
$z[6][4]['typeid']="3";
$z[7]=Array("type"," <a href=\"[field:typelink/]\">MORE+</a>",2418,2490);
$z[7][4]['typeid']="2";
$z[8]=Array("arclist","\r\n        <li>\r\n          <div class=\"thumbnail\"><img src=\"[field:picname/]\" width=\"154px\" height=\"154px\" /><a href=\"[field:arcurl/]\">FIND OUT MORE</a></div>\r\n          <div class=\"company-news-content\">\r\n            <h2><a href=\"[field:arcurl/]\">[field:title/]</a></h2>\r\n            <p>[field:info/]...</p>\r\n          </div>\r\n        </li>\r\n        ",2518,2939);
$z[8][4]['row']="3";
$z[8][4]['titlelen']="32";
$z[8][4]['typeid']="2";
$z[8][4]['infolen']="60";
$z[9]=Array("sql"," \r\n          [field:content  function='cn_substr(html2text(@me),280)'/]\r\n          ",3218,3372);
$z[9][4]['sql']="Select content from dede_arctype where id=1";
$z[10]=Array("type"," <a href=\"[field:typelink/]\">READ MORE</a>",3386,3462);
$z[10][4]['typeid']="1";
$z[11]=Array("sql"," \r\n      [field:content  function='cn_substr(html2text(@me),326)'/]\r\n      ",3764,3910);
$z[11][4]['sql']="Select content from dede_arctype where id=4";
$z[12]=Array("type"," <a href=\"[field:typelink/]\">READ MORE</a>",3920,3996);
$z[12][4]['typeid']="4";
$z[13]=Array("arclist","\r\n      <li><img src=\"[field:picname/]\" class=\"case_tp\" width=\"233px\" height=\"257px\"/><span><img src=\"/skin/images/jia.png\" /><a href=\"[field:arcurl/]\">MORE</a></span></li>\r\n      ",4229,4455);
$z[13][4]['typeid']="6";
$z[13][4]['row']="4";
$z[14]=Array("include","",4536,4573);
$z[14][4]['filename']="footer.htm";

?>