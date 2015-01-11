#include "updatedialog.h"
#include "ui_updatedialog.h"
#include "clientmodel.h"
#include "util.h"
#include "guiutil.h"
#include "guiconstants.h"
#include "version.h"

using namespace GUIUtil;

bool updateAccepted = false;

UpdateDialog::UpdateDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UpdateDialog)
{
    this->setStyleSheet(GUIUtil::veriStyleSheet);
    this->setFont(veriFont);

    std::string title = GetArg("-vTitle", "Update Available") + "\n";
    std::string description = GetArg("-vDescription", "A new software update is available.").c_str();
    std::string version = "NEW " + GetArg("-vVersion", "1.0.0.0");
    std::string postreq = std::string("\n\nPost-Install Notes: ").append((GetBoolArg("-vBootstrap") ? "Auto Bootstrap will run after the installation." : "Bootstrap is not required."));
    ui->setupUi(this);

    ui->title->setFont(veriFontLarge);
    ui->title->setText(title.c_str());
    ui->description->setFont(veriFont);
    ui->description->setText(version.append(": ").append(description).append(postreq).append("\n\nPress OK to download the update.").c_str());
}

void UpdateDialog::setModel(ClientModel *model)
{
    if(model)
    {
        ui->versionLabel->setText(model->formatFullVersion());
    }
}

UpdateDialog::~UpdateDialog()
{
    delete ui;
}

void UpdateDialog::on_buttonBox_accepted()
{
    updateAccepted = true;
    close();
}

void UpdateDialog::on_buttonBox_rejected()
{
    updateAccepted = false;
    close();
}
