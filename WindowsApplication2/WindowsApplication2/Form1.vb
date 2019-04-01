Public Class Form1
    Dim g As Graphics
    Dim pt1 As Point
    Dim pt2 As Point
    Dim pt3 As Point
    Dim pt4 As Point
    Dim pt5 As Point
    Dim ptctr As Point
    Dim mypoly As Point()


    ' Dim str As String = "C:\Users\IIT\Desktop\hmr1."
    'Dim extension As String = Path.GetExtension(str)
    Private Sub Form1_Paint(sender As Object, e As PaintEventArgs) Handles MyBase.Paint
        
    End Sub

    Private Sub Form1_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        'Dim ms As New System.IO.MemoryStream(My.Resources.hmr1)
        Dim ms As New System.IO.MemoryStream(My.Resources.oth441)
        Me.Cursor = New Cursor(ms)
        g = Me.CreateGraphics
        Timer1.Start()

    End Sub

    Private Function cirpt(ByVal p1 As Point, ByVal p As Point, ByVal r As Double) As Integer
        Dim cen As Point = New Point(p1.X + r / 2, p1.Y + r / 2)
        Dim x As Double
        Label7.Text = cen.X
        Label8.Text = cen.Y

        x = (cen.X - p.X) * (cen.X - p.X) + (cen.Y - p.Y) * (cen.Y - p.Y)
        Label10.Text = CStr(cen.X - p.X)
        Label11.Text = CStr(cen.Y - p.Y)
        Label12.Text = CStr(r / 2)
        Label9.Text = CStr(x)
        If x < (r / 2) * (r / 2) Then
            Return 0
        Else
            Return 1
        End If
    End Function

    Private Function tript(ByVal p1 As Point, ByVal p2 As Point, ByVal p3 As Point, ByVal p As Point) As Integer
        Dim arr As Double
        arr = area(p1, p2, p3)
        Dim ar1 As Double
        ar1 = area(p, pt1, pt2)
        Dim ar2 As Double
        ar2 = area(p, pt2, pt3)
        Dim ar3 As Double
        ar3 = area(p, pt3, pt1)
        Dim a As Double = ar1 + ar2 + ar3
        If arr = a Then
            Return 0
        Else
            Return 1
        End If



    End Function

    Public Function area(ByVal p1 As Point, ByVal p2 As Point, ByVal p3 As Point) As Double
        Dim ar As Double
        ar = p1.X * (p2.Y - p3.Y) + p2.X * (p3.Y - p1.Y) + p3.X * (p1.Y - p2.Y)
        If ar < 0 Then
            ar = -1 * ar
        End If
        Return ar
    End Function




    Private Sub Form1_MouseClick(sender As Object, e As MouseEventArgs) Handles MyBase.MouseClick
        Label1.Text = e.X
        Label2.Text = e.Y
    End Sub

    Private Sub Timer1_Tick(sender As Object, e As EventArgs) Handles Timer1.Tick
        pt1 = New Point(1, 290)
        pt2 = New Point(150, 290)
        pt3 = New Point(81, 410)
        mypoly = {pt1, pt2, pt3}
        g.DrawPolygon(Pens.Black, mypoly)

        Dim i As Integer = 230
        Dim j As Integer = 290

        ptctr = New Point(i, j)
        g.DrawEllipse(Pens.Black, i, j, 150, 150)
        pt4 = New Point(CInt(Label1.Text), CInt(Label2.Text))
        Dim y As Integer = tript(pt1, pt2, pt3, pt4)
        If y = 0 Then
            Label13.Text = "yes"
        Else
            Label13.Text = ""
        End If
        Label5.Text = pt4.X
        Label6.Text = pt4.Y
        Dim x As Integer = cirpt(ptctr, pt4, 150)
        Label4.Text = CStr(x)
        If x = 0 Then
            Label3.Text = "yes"
        Else
            Label3.Text = ""
        End If

    End Sub

    
    Private Sub Label7_Click(sender As Object, e As EventArgs) Handles Label7.Click
       
    End Sub
End Class
