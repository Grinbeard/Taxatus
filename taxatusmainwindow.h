#ifndef TAXATUSMAINWINDOW_H
#define TAXATUSMAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class TaxatusMainWindow; }
QT_END_NAMESPACE

class TaxatusMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    TaxatusMainWindow(QWidget *parent = nullptr);
    ~TaxatusMainWindow();

private:
    Ui::TaxatusMainWindow *ui;
};
#endif // TAXATUSMAINWINDOW_H
