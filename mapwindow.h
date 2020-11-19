#ifndef SKELD_H
#define SKELD_H

#include <QMainWindow>
#include <QCursor>
#include "crewcolor.h"
#include "mapwidget.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MapWindow;
}
QT_END_NAMESPACE

class MapWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MapWindow(QWidget *parent = nullptr);
    ~MapWindow();

    void registerMainWindow(QMainWindow * m);

    void openSkeld();
    void openMiraHQ();
    void openPolus();

protected:
    void closeEvent(QCloseEvent *event);

private slots:
    void on_exitButton_clicked();

    void on_blackButton_clicked();

    void on_blueButton_clicked();

    void on_brownButton_clicked();

    void on_cyanButton_clicked();

    void on_greenButton_clicked();

    void on_orangeButton_clicked();

    void on_pinkButton_clicked();

    void on_purpleButton_clicked();

    void on_redButton_clicked();

    void on_whiteButton_clicked();

    void on_yellowButton_clicked();

    void on_limeButton_clicked();

    void on_clearButton_clicked();

    void on_blackButton_2_clicked();

    void on_blueButton_2_clicked();

    void on_brownButton_2_clicked();

    void on_cyanButton_2_clicked();

    void on_greenButton_2_clicked();

    void on_orangeButton_2_clicked();

    void on_pinkButton_2_clicked();

    void on_purpleButton_2_clicked();

    void on_redButton_2_clicked();

    void on_whiteButton_2_clicked();

    void on_yellowButton_2_clicked();
    void on_limeButton_2_clicked();

    void on_blackButton_3_clicked();

    void on_blueButton_3_clicked();

    void on_brownButton_3_clicked();

    void on_cyanButton_3_clicked();

    void on_greenButton_3_clicked();

    void on_orangeButton_3_clicked();

    void on_pinkButton_3_clicked();

    void on_purpleButton_3_clicked();

    void on_redButton_3_clicked();

    void on_whiteButton_3_clicked();

    void on_yellowButton_3_clicked();

    void on_limeButton_3_clicked();

private:
    Ui::MapWindow *ui;
    QMainWindow * mainWindow;
    MapWidget * activeMap;
};

#endif // SKELD_H
