<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class Form1
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
        Me.txtOne = New System.Windows.Forms.TextBox()
        Me.txtTwo = New System.Windows.Forms.TextBox()
        Me.txtThree = New System.Windows.Forms.TextBox()
        Me.btnLeft = New System.Windows.Forms.Button()
        Me.btnRight = New System.Windows.Forms.Button()
        Me.SuspendLayout()
        '
        'txtOne
        '
        Me.txtOne.Location = New System.Drawing.Point(12, 12)
        Me.txtOne.Name = "txtOne"
        Me.txtOne.Size = New System.Drawing.Size(100, 20)
        Me.txtOne.TabIndex = 0
        Me.txtOne.Text = "One"
        '
        'txtTwo
        '
        Me.txtTwo.Location = New System.Drawing.Point(12, 38)
        Me.txtTwo.Name = "txtTwo"
        Me.txtTwo.Size = New System.Drawing.Size(100, 20)
        Me.txtTwo.TabIndex = 1
        Me.txtTwo.Text = "Two"
        '
        'txtThree
        '
        Me.txtThree.Location = New System.Drawing.Point(12, 64)
        Me.txtThree.Name = "txtThree"
        Me.txtThree.Size = New System.Drawing.Size(100, 20)
        Me.txtThree.TabIndex = 2
        Me.txtThree.Text = "Three"
        '
        'btnLeft
        '
        Me.btnLeft.Location = New System.Drawing.Point(160, 12)
        Me.btnLeft.Name = "btnLeft"
        Me.btnLeft.Size = New System.Drawing.Size(82, 28)
        Me.btnLeft.TabIndex = 3
        Me.btnLeft.Text = "Left"
        Me.btnLeft.UseVisualStyleBackColor = True
        '
        'btnRight
        '
        Me.btnRight.Location = New System.Drawing.Point(160, 56)
        Me.btnRight.Name = "btnRight"
        Me.btnRight.Size = New System.Drawing.Size(82, 28)
        Me.btnRight.TabIndex = 4
        Me.btnRight.Text = "Right"
        Me.btnRight.UseVisualStyleBackColor = True
        '
        'Form1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(254, 108)
        Me.Controls.Add(Me.btnRight)
        Me.Controls.Add(Me.btnLeft)
        Me.Controls.Add(Me.txtThree)
        Me.Controls.Add(Me.txtTwo)
        Me.Controls.Add(Me.txtOne)
        Me.Name = "Form1"
        Me.Text = "One, Two, Three"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents txtOne As TextBox
    Friend WithEvents txtTwo As TextBox
    Friend WithEvents txtThree As TextBox
    Friend WithEvents btnLeft As Button
    Friend WithEvents btnRight As Button
End Class
