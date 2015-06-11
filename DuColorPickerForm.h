#ifndef DUCOLORPICKERFORM_H
#define DUCOLORPICKERFORM_H

#include <QWidget>

namespace Ui
{
class DuColorPickerForm;
}

class DuColorPickerForm : public QWidget
{
    Q_OBJECT
public:
    explicit DuColorPickerForm(QWidget *parent = nullptr);
    ~DuColorPickerForm();
signals:
    void R_Changed(int);
    void G_Changed(int);
    void B_Changed(int);
private slots:
    void on_R_Slider_valueChanged(int value);
    void on_G_Slider_valueChanged(int value);
    void on_B_Slider_valueChanged(int value);
private:
    Ui::DuColorPickerForm *ui;
};

#endif // DUCOLORPICKERFORM_H
