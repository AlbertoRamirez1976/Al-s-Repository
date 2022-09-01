<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class frmTrafficLight
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Required by the Windows Form Designer
    Private components As System.ComponentModel.IContainer

    'NOTE: The following procedure is required by the Windows Form Designer
    'It can be modified using the Windows Form Designer.  
    'Do not modify it using the code editor.
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Me.txtRed = New System.Windows.Forms.TextBox()
        Me.txtGreen = New System.Windows.Forms.TextBox()
        Me.txtYellow = New System.Windows.Forms.TextBox()
        Me.SuspendLayout()
        '
        'txtRed
        '
        Me.txtRed.BackColor = System.Drawing.Color.DarkGray
        Me.txtRed.Location = New System.Drawing.Point(97, 34)
        Me.txtRed.Name = "txtRed"
        Me.txtRed.Size = New System.Drawing.Size(39, 20)
        Me.txtRed.TabIndex = 0
        '
        'txtGreen
        '
        Me.txtGreen.BackColor = System.Drawing.Color.Green
        Me.txtGreen.Location = New System.Drawing.Point(97, 127)
        Me.txtGreen.Name = "txtGreen"
        Me.txtGreen.Size = New System.Drawing.Size(39, 20)
        Me.txtGreen.TabIndex = 1
        '
        'txtYellow
        '
        Me.txtYellow.BackColor = System.Drawing.Color.DarkGray
        Me.txtYellow.Location = New System.Drawing.Point(97, 79)
        Me.txtYellow.Name = "txtYellow"
        Me.txtYellow.Size = New System.Drawing.Size(39, 20)
        Me.txtYellow.TabIndex = 2
        '
        'frmTrafficLight
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(229, 188)
        Me.Controls.Add(Me.txtYellow)
        Me.Controls.Add(Me.txtGreen)
        Me.Controls.Add(Me.txtRed)
        Me.Name = "frmTrafficLight"
        Me.Text = "Traffic Light"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents txtRed As TextBox
    Friend WithEvents txtGreen As TextBox
    Friend WithEvents txtYellow As TextBox
End Class
