<?xml version = "1.0" encoding = "UTF-8"?>
<xsl:stylesheet version = "1.0" 
xmlns:xsl = "http://www.w3.org/1999/XSL/Transform">   

   <xsl:template match = "/"> 
		
      <html>
      <head>
      <title>задание 2</title>
      </head>
         <body bgcolor="bisque">
            <h2><xsl:value-of select = "accreditation/student_list"/></h2>

            <table border = "1">
                <tr bgcolor = "#9acd32">
                  <th>№</th> 
                  <th>Student</th>
                  <th>KYaR</th>
                  <th>OAiP</th>
                  <th>OPI</th>
               </tr>
               <xsl:for-each select="accreditation/student">

                  <tr> 
                    <td width="60px" align="center"><xsl:value-of select = "@rollno"/></td>
                    <td width="200px" align ="left"><xsl:value-of select = "name"/></td>

                    <xsl:choose>
                    <xsl:when test="kyar &lt; 4"><td width="70px" align="center" bgcolor="red"><xsl:value-of select = "kyar"/></td></xsl:when>
                    <xsl:when test="kyar &gt; 8"><td width="70px" align="center" bgcolor="green"><xsl:value-of select = "kyar"/></td></xsl:when>
                    <xsl:otherwise>
                    <td width="70px" align="center"><xsl:value-of select = "kyar"/></td></xsl:otherwise>
                    </xsl:choose>

                    <xsl:choose>
                    <xsl:when test="oaip &lt; 4"><td width="70px" align="center" bgcolor="red"><xsl:value-of select = "oaip"/></td></xsl:when>
                    <xsl:when test="oaip &gt; 8"><td width="70px" align="center" bgcolor="green"><xsl:value-of select = "oaip"/></td></xsl:when>
                    <xsl:otherwise>
                    <td width="70px" align="center"><xsl:value-of select = "oaip"/></td></xsl:otherwise>
                    </xsl:choose>
                    
                    <xsl:choose>
                    <xsl:when test="opi &lt; 4"><td width="70px" align="center" bgcolor="red"><xsl:value-of select = "opi"/></td></xsl:when>
                    <xsl:when test="opi &gt; 8"><td width="70px" align="center" bgcolor="green"><xsl:value-of select = "opi"/></td></xsl:when>
                    <xsl:otherwise>
                    <td width="70px" align="center"><xsl:value-of select = "opi"/></td></xsl:otherwise>
                    </xsl:choose>
                  </tr>
               </xsl:for-each>
            </table> 

         </body> 
      </html> 
   </xsl:template>  
</xsl:stylesheet>