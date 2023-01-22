//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "LinearMain.h"
#include "linreg.h"
#include "About.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
	gridValues->Cols[1]->SetText("X");
	gridValues->Cols[2]->SetText("Y");
	gridValues->ColWidths[0]= 50;
	gridValues->ColWidths[1]= 100;
	gridValues->ColWidths[2]= 100;
	int i = gridValues->RowCount;
	int j;
	for (j = 1; j<=i;  j++)
	{
		gridValues->Rows[j]->SetText(IntToStr(j).c_str());
	}

}
//---------------------------------------------------------------------------


void __fastcall TForm1::N6Click(TObject *Sender)
{
	Application->Terminate();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::N5Click(TObject *Sender)
//APOTHIKEUSI....
{
	try {

		SaveDlg->DefaultExt = "csv";
		//SaveDlg->Filter = "Text files (*.txt)|*.TXT";
		SaveDlg->Filter = "CSV Files (*.csv)|*.csv";
		SaveDlg->Execute();

		if (SaveDlg->FileName == "")
		{
			Application->MessageBox("Παρακαλώ εισάγετε ένα όνομα",
					"Προσοχή", MB_ICONINFORMATION);
			return;
		}
		TStringList *lst = new TStringList();

		int i=1;
		while (gridValues->Cells[1][i] != "" && i <= gridValues->RowCount)
		{
			lst->Add(gridValues->Cells[1][i] + ";" + gridValues->Cells[2][i]);
			i++;
		}
		lst->SaveToFile(SaveDlg->FileName);
		lst->Free();
	}
	catch (...)
	{
		ShowMessage("Παρουσιάστηκε κάποιο σφάλμα!");
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N4Click(TObject *Sender)
//ANOIGMA....
{
	try	{
		memResults->Clear();
		OpenDlg->DefaultExt = "csv";
		OpenDlg->Filter = "CSV Files (*.csv)|*.csv";
		if (OpenDlg->Execute())
		{
			//sto anoigma arxika katharizoume ta periexomena tou grid
			int k = gridValues->RowCount;
			int m;
			for (m = 1; m<=k;  m++)
			{
				gridValues->Cells[1][m] = "";
				gridValues->Cells[2][m] = "";
			}

			//anoigoume to arxeio pou dothike
			FILE *infile;
			char str[81]; int i=0; int j;
			infile = fopen(OpenDlg->FileName.c_str(),"r");
			char tokensep[] = ";";
			char *token;

			//diavazoume ta comma delimited values....
			while (fgets(str,81,infile) != NULL)
			{
				for ( j = 0; j < 81; j++ )
				{
					if ( str[j] == '\n' )
					{
						str[j] = '\0';
						break;
					}
				}

				i++;
				if (i > gridValues->RowCount)
					gridValues->RowCount = gridValues->RowCount + 1;
				token = strtok(str,tokensep);
				gridValues->Cells[1][i] = token;
				token = strtok(NULL,tokensep);
				gridValues->Cells[2][i] = token;
			}

			fclose(infile);
		}
	}
	catch (...)
	{
		ShowMessage("Παρουσιάστηκε κάποιο σφάλμα!");
	}
}
//---------------------------------------------------------------------------



void __fastcall TForm1::N3Click(TObject *Sender)
{
	AboutBox->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::btCalculateClick(TObject *Sender)
{
	memResults->Clear();
	LinearRegression lr;

	int i=1;
	while (gridValues->Cells[1][i] != "" && i <= gridValues->RowCount)
	{
		lr.addXY(gridValues->Cells[1][i].ToDouble(),gridValues->Cells[2][i].ToDouble());
		i++;
	}

	memResults->Lines->Add("Η ΕΞΙΣΩΣΗ ΕΙΝΑΙ ΤΗΣ ΜΟΡΦΗΣ Υ = Α + Β * Χ");
	memResults->Lines->Add("ΟΠΟΥ Α = ");
	memResults->Lines->Add(lr.getA());
	memResults->Lines->Add("ΚΑΙ Β = ");
	memResults->Lines->Add(lr.getB());

	memResults->Lines->Add("");
	memResults->Lines->Add("");
	memResults->Lines->Add("----------ΣΥΝΤΕΛΕΣΤΕΣ---------");
	memResults->Lines->Add("Coefficient of determination (R Square): ");
	memResults->Lines->Add(lr.getCoefDeterm());
	memResults->Lines->Add("Coefficient of correlation: (R)");
	memResults->Lines->Add(lr.getCoefCorrel());
	memResults->Lines->Add("Standard error of estimate: ");
	memResults->Lines->Add(lr.getStdErrorEst());

}
//---------------------------------------------------------------------------

void __fastcall TForm1::N7Click(TObject *Sender)
{
	//katharizoume ta periexomena tou grid
	int k = gridValues->RowCount;
	int m;
	for (m = 1; m<=k;  m++)
	{
		gridValues->Cells[1][m] = "";
		gridValues->Cells[2][m] = "";
	}
	memResults->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::btExportClick(TObject *Sender)
{
	try {

		SaveDlg->DefaultExt = "txt";
		SaveDlg->Filter = "Text files (*.txt)|*.TXT";
		SaveDlg->Execute();

		if (SaveDlg->FileName == "")
		{
			Application->MessageBox("Παρακαλώ εισάγετε ένα όνομα",
					"Προσοχή", MB_ICONINFORMATION);
			return;
		}
		memResults->Lines->SaveToFile(SaveDlg->FileName);
	}
	catch (...)
	{
		ShowMessage("Παρουσιάστηκε κάποιο σφάλμα!");
	}
}
//---------------------------------------------------------------------------

