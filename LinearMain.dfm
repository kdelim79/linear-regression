object Form1: TForm1
  Left = 0
  Top = 0
  Caption = #928#961#972#947#961#945#956#956#945' '#933#960#959#955#959#947#953#963#956#959#973' '#913#960#955#942#962' '#915#961#945#956#956#953#954#942#962'  '#928#945#955#953#957#948#961#972#956#951#963#951#962
  ClientHeight = 478
  ClientWidth = 704
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Icon.Data = {
    0000010001002020100000000000E80200001600000028000000200000004000
    0000010004000000000080020000000000000000000000000000000000000000
    000000008000008000000080800080000000800080008080000080808000C0C0
    C0000000FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF000000
    0000000000000000000000000000000000000000000000000000000000000000
    000B3B3B3B33330000BB3B3000000000B3B3B3B3333333030BB3303300000003
    3330000000000030BB0B3B3330000003333B8B8383333033BBBB333330000000
    3333333333330B3B3BB33B3B3B0000000B3B3B3333330B3B33B3BBB3330000B3
    B3B3B3B333330B3B333BBB333B0003333000000000000B3B33BBBBB3B3000300
    000B3B3B33330B3B333BB0B33B000030B3B3B3B3B3330B3B333BBBB3B3000303
    3333333333330B33333BBB3B3B000003000B888383830BB33333333BB0000000
    33330000000000B33B3333BB300000033000B3B3B3B3B0BB33330BBB00000000
    0B3B3B3B3B3B3B0BB33B3BB00000000033333333333333300B33330000000000
    3000BBB838383830003000000000000003333380000000000000000000000000
    3338000B3B3B3B3B3B000000000000000330B3B3B3B3B3B3B3B3300000000000
    0003333FFFFFF33333333300000000000003088BBBB3B3B3B300030000000000
    000033333BBBBB3B3B33300000000000000333B3B3BBBBB3B3B3330000000000
    0000333B3BBBBBBB333330000000000000000003B3B3BFFFFB00000000000000
    0000000000000000000000000000000000000000000000000000000000000000
    000000000000000000000000000000000000000000000000000000000000FFFF
    FFFFFE003C1FF000000FE0000007C0000003C0000003C0000001C00000018000
    00010000000100000001000000010000000180000003C0000003C0000007E000
    000FE000001FE00000FFE00000FFE000007FF000003FF800001FFC00001FFC00
    001FFC00001FFE00003FFF00007FFFE003FFFFFFFFFFFFFFFFFFFFFFFFFF}
  Menu = MainMenu1
  OldCreateOrder = False
  Position = poScreenCenter
  OnCreate = FormCreate
  DesignSize = (
    704
    478)
  PixelsPerInch = 96
  TextHeight = 13
  object Bevel1: TBevel
    Left = 288
    Top = 368
    Width = 421
    Height = 110
    Anchors = [akLeft, akTop, akRight, akBottom]
    Shape = bsFrame
    ExplicitWidth = 401
    ExplicitHeight = 70
  end
  object gridValues: TStringGrid
    Left = 0
    Top = 0
    Width = 289
    Height = 478
    Align = alLeft
    ColCount = 3
    RowCount = 101
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlue
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    GridLineWidth = 2
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goRowSizing, goColSizing, goEditing, goTabs, goThumbTracking]
    ParentFont = False
    TabOrder = 0
    ColWidths = (
      87
      90
      64)
  end
  object memResults: TMemo
    Left = 288
    Top = 0
    Width = 415
    Height = 409
    Anchors = [akLeft, akTop, akRight, akBottom]
    BevelKind = bkFlat
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlue
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
  end
  object btCalculate: TButton
    Left = 328
    Top = 415
    Width = 137
    Height = 55
    Anchors = [akLeft, akBottom]
    Caption = #933#960#959#955#959#947#953#963#956#972#962
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlue
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 2
    OnClick = btCalculateClick
  end
  object btExport: TButton
    Left = 528
    Top = 415
    Width = 137
    Height = 55
    Anchors = [akLeft, akBottom]
    Caption = #917#958#945#947#969#947#942' '#913#960#959#964#949#955#949#963#956#940#964#969#957' '#963#949' '#913#961#967#949#943#959' '#922#949#953#956#941#957#959#965'...'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlue
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 3
    WordWrap = True
    OnClick = btExportClick
  end
  object MainMenu1: TMainMenu
    Left = 328
    Top = 8
    object N1: TMenuItem
      Caption = '&'#913#961#967#949#943#959
      ShortCut = 16449
      object N7: TMenuItem
        Caption = #925#941#959' '#913#961#967#949#943#959' '#916#949#948#959#956#941#957#969#957
        OnClick = N7Click
      end
      object N4: TMenuItem
        Caption = #902#957#959#953#947#956#945' '#913#961#967#949#943#959#965' '#916#949#948#959#956#941#957#969#957'...'
        ShortCut = 16463
        OnClick = N4Click
      end
      object N5: TMenuItem
        Caption = #913#960#959#952#942#954#949#965#963#951' '#913#961#967#949#943#959#965' '#916#949#948#959#956#941#957#969#957'...'
        ShortCut = 16467
        OnClick = N5Click
      end
      object N6: TMenuItem
        Caption = #904#958#959#948#959#962
        OnClick = N6Click
      end
    end
    object N2: TMenuItem
      Caption = '&'#914#959#942#952#949#953#945
      ShortCut = 16450
      object N3: TMenuItem
        Caption = #931#967#949#964#953#954#940' '#956#949' '#964#959' '#960#961#972#947#961#945#956#956#945'...'
        OnClick = N3Click
      end
    end
  end
  object OpenDlg: TOpenDialog
    Left = 408
    Top = 8
  end
  object SaveDlg: TSaveDialog
    Left = 368
    Top = 8
  end
end
