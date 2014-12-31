#include "rescandialog.h"
#include "ui_rescandialog.h"
#include "clientmodel.h"
#include "util.h"
#include "guiutil.h"
#include "guiconstants.h"

bool rescanAccepted = false;

RescanDialog::RescanDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RescanDialog)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: white; color: " + STRING_VERIFONT + ";");
    this->setFont(veriFont);

    ui->statusLabel->setFont(veriFont);
    ui->statusLabel->setText("Please confirm rescanning the blockchain. This process may take as much as 10 to 20 minutes to complete.\n\nYour wallet will restart to begin scanning.");
}

void RescanDialog::setModel(ClientModel *model)
{
    if(model)
    {
    }
}

RescanDialog::~RescanDialog()
{
    delete ui;
}

void RescanDialog::on_buttonBox_accepted()
{
    rescanAccepted = true;
    close();
}

void RescanDialog::on_buttonBox_rejected()
{
    rescanAccepted = false;
    close();
}
