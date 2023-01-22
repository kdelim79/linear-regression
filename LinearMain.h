//---------------------------------------------------------------------------

#ifndef LinearMainH
#define LinearMainH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Grids.hpp>
#include <Menus.hpp>
#include <ExtCtrls.hpp>
#include <Dialogs.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TStringGrid *gridValues;
	TMainMenu *MainMenu1;
	TMenuItem *N1;
	TMenuItem *N2;
	TMenuItem *N3;
	TMemo *memResults;
	TBevel *Bevel1;
	TMenuItem *N4;
	TMenuItem *N5;
	TMenuItem *N6;
	TOpenDialog *OpenDlg;
	TSaveDialog *SaveDlg;
	TButton *btCalculate;
	TButton *btExport;
	TMenuItem *N7;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall N6Click(TObject *Sender);
	void __fastcall N5Click(TObject *Sender);
	void __fastcall N4Click(TObject *Sender);
	void __fastcall N3Click(TObject *Sender);
	void __fastcall btCalculateClick(TObject *Sender);
	void __fastcall N7Click(TObject *Sender);
	void __fastcall btExportClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
