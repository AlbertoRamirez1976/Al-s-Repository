' Project: One, Two, Three
' Programmer Alberto Ramirez
' Date: August 31, 2022
' Description: A form with a three Text boxes and three Buttons controls. 
'It displays the words in the Text box, after each Button is clicked.
'At run time, When one Of the three text boxes receive the focus, its text becomes red. 
'When it loses the focus, the text returns to black. 
'The buttons located To the right Of the textboxes Set the alignment In the text boxes To LEFT Or Right


Public Class Form1
    Private Sub Form1_Load(sender As Object, e As EventArgs) Handles MyBase.Load

    End Sub

    Private Sub btnLeft_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnLeft.Click
        txtOne.TextAlign = HorizontalAlignment.Left
        txtTwo.TextAlign = HorizontalAlignment.Left
        txtThree.TextAlign = HorizontalAlignment.Left
    End Sub

    Private Sub btnRight_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnRight.Click
        txtOne.TextAlign = HorizontalAlignment.Right
        txtTwo.TextAlign = HorizontalAlignment.Right
        txtThree.TextAlign = HorizontalAlignment.Right
    End Sub

    Private Sub txtOne_Enter(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles txtOne.Enter
        txtOne.ForeColor = Color.Red
    End Sub

    Private Sub txtOne_Leave(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles txtOne.Leave
        txtOne.ForeColor = Color.Black
    End Sub

    Private Sub txtTwo_Enter(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles txtTwo.Enter
        txtTwo.ForeColor = Color.Red
    End Sub

    Private Sub txtTwo_Leave(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles txtTwo.Leave
        txtTwo.ForeColor = Color.Black
    End Sub

    Private Sub txtThree_Enter(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles txtThree.Enter
        txtThree.ForeColor = Color.Red
    End Sub

    Private Sub txtThree_Leave(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles txtThree.Leave
        txtThree.ForeColor = Color.Black
    End Sub
End Class
