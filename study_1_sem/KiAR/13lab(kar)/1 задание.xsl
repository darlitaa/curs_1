<?xml version = "1.0" encoding = "UTF-8"?>
<xsl:stylesheet version = "1.0" 
xmlns:xsl = "http://www.w3.org/1999/XSL/Transform">   

   <xsl:template match = "/"> 
		
      <html>
      <head>
      <title>задание 1</title>
      </head>
         <body bgcolor="bisque"> 

            <table border = "1"> 

               <tr bgcolor = "cornsilk"> 
                  <th>name</th>
                  <th>book</th>
               </tr> 

               <xsl:for-each select="books/book">
                <xsl:sort select="contant" order="ascending"/>

                  <tr>
                     <td><xsl:value-of select = "name"/></td> 
                     <td width = "700px"><xsl:value-of select = "contant"/></td> 
                  </tr> 
               </xsl:for-each> 
	
            </table> 
             <h2><xsl:value-of select = "books/author"/></h2>

         </body> 
      </html> 
   </xsl:template>  
</xsl:stylesheet>