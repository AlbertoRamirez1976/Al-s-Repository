' Project: Instructions
' Programmer Alberto Ramirez
' Date: August 30, 2022
' Description: A form with two Text boxes and one large label between them with no preset caption. 
'Once the program runs, and the first text box receives the focus, the label between the two 
'textboxes reads "Enter your full name," then "Enter your phone number, including area code."


Public Class frmInstructions

    Private Sub TextBox1_GotFocus(sender As Object, e As EventArgs) Handles TextBox1.GotFocus
        'The first textbox receives the focus, the label reads the message.
        Label1.Text = "Enter your full name."
    End Sub

    Private Sub TextBox2_GotFocus(sender As Object, e As EventArgs) Handles TextBox2.GotFocus
        'The first textbox receives the focus, the label reads the message.
        Label1.Text = "Enter your phone number, " & vbNewLine & "including area code."
    End Sub

End Class
