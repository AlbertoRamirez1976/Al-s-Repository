' Project: Traffic Light
' Programmer Alberto Ramirez
' Date: August 31, 2022
' Description: A form with three Text boxes that simulate a traffic light

Public Class frmTrafficLight

    Private Sub txtGreen_Enter(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles txtGreen.Enter
        txtGreen.BackColor = Color.Green
        txtRed.BackColor = Color.DarkGray
        txtYellow.BackColor = Color.DarkGray
    End Sub

    Private Sub txtRed_Enter(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles txtRed.Enter
        txtRed.BackColor = Color.Red
        txtYellow.BackColor = Color.DarkGray
        txtGreen.BackColor = Color.DarkGray
    End Sub

    Private Sub txtYellow_Enter(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles txtYellow.Enter
        txtYellow.BackColor = Color.Yellow
        txtGreen.BackColor = Color.DarkGray
        txtRed.BackColor = Color.DarkGray
    End Sub

End Class
