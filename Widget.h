#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui
{
class Widget;
}

class DuColorPickerForm;
class QVBoxLayout;
class QMenu;

class Widget : public QWidget
{
    Q_OBJECT
public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();
private:
    Ui::Widget *ui;
    DuColorPickerForm *mColorPicker;
    QVBoxLayout *mLayout;
    QMenu *mMenu;
    QColor mColor;

    void updateRGB();
};

#endif // WIDGET_H
