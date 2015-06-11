#include "Widget.h"
#include "ui_Widget.h"
#include "DuColorPickerForm.h"
#include <QVBoxLayout>
#include <QMenu>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    mColorPicker = new DuColorPickerForm(this);
    mLayout = new QVBoxLayout;
    mMenu = new QMenu("RGB", this);

    mLayout->addWidget(mColorPicker);
    mLayout->setMargin(0);
    mMenu->setLayout(mLayout);
    ui->RGB_PushButton->setMenu(mMenu);
    updateRGB();

    connect(mColorPicker, &DuColorPickerForm::R_Changed, [&](int value) {
        mColor.setRed(value);
        updateRGB();
    });

    connect(mColorPicker, &DuColorPickerForm::G_Changed, [&](int value) {
        mColor.setGreen(value);
        updateRGB();
    });

    connect(mColorPicker, &DuColorPickerForm::B_Changed, [&](int value) {
        mColor.setBlue(value);
        updateRGB();
    });
}

Widget::~Widget()
{
    delete ui;
}

void Widget::updateRGB()
{
    auto p = palette();
    p.setColor(QPalette::Window, mColor);
    setPalette(p);
}
