object FormMain: TFormMain
  Left = 0
  Top = 0
  Caption = 'FormMain'
  ClientHeight = 299
  ClientWidth = 663
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 24
    Top = 27
    Width = 82
    Height = 13
    Caption = 'Configuration file'
  end
  object edNameIni: TEdit
    Left = 128
    Top = 24
    Width = 425
    Height = 21
    TabOrder = 0
    Text = 'edNameIni'
  end
  object btSave: TButton
    Left = 568
    Top = 22
    Width = 75
    Height = 25
    Caption = 'Save'
    TabOrder = 1
    OnClick = btSaveClick
  end
end
