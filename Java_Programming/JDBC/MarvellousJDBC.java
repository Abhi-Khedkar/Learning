import java.sql.*;

public class MarvellousJDBC
{
    public static void main(String A[])
    {
        try
        {
            Class.forName("com.mysql.cj.jdbc.Driver");
            
            Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/PPA55","root","");

            Statement stmt = con.createStatement();
            ResultSet rs = stmt.executeQuery("SELECT * FROM Student1");

            while(rs.next())
            {
                System.out.println("Roll No: "+rs.getInt("Rno"));
                System.out.println("Name : "+rs.getString("Name"));
                System.out.println("City : "+rs.getString("City"));
                System.out.println("Marks : "+rs.getInt("Marks"));
                System.out.println("-----------------------------------");
            }

            rs.close();
            stmt.close();
            con.close();
        }
        catch(Exception e)
        {
            System.out.println("Exception occured : "+e);
        }
    }
}