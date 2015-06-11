#include "DuColorPickerForm.h"
#include "ui_DuColorPickerForm.h"

DuColorPickerForm::DuColorPickerForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::DuColorPickerForm)
{
    ui->setupUi(this);
    setMaximumSize(size());
    setMinimumSize(size());
    ui->R_Slider->setMaximum(255);
    ui->G_Slider->setMaximum(255);
    ui->B_Slider->setMaximum(255);
}

DuColorPickerForm::~DuColorPickerForm()
{
    delete ui;
}

void DuColorPickerForm::on_R_Slider_valueChanged(int value)
{
    emit R_Changed(value);
    ui->R_Label->setText(QString::number(value));
}

void DuColorPickerForm::on_G_Slider_valueChanged(int value)
{
    emit G_Changed(value);
    ui->G_Label->setText(QString::number(value));
}

void DuColorPickerForm::on_B_Slider_valueChanged(int value)
{
    emit B_Changed(value);
    ui->B_Label->setText(QString::number(value));
}
