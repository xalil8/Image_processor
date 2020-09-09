#ifndef OPENCVQT_H
#define OPENCVQT_H

#include <QMainWindow>
#include <QDialog>
#include <QMessageBox>
#include <QFile>
#include <string>
#include <QFileDialog>
#include <QDebug>


#include"opencv2/core/core.hpp"
#include"opencv2/highgui/highgui.hpp"
#include"opencv2/imgproc/imgproc.hpp"

QT_BEGIN_NAMESPACE
namespace Ui { class opencvqt; }
QT_END_NAMESPACE

class opencvqt : public QMainWindow
{
    Q_OBJECT

public:
    opencvqt(QWidget *parent = nullptr);
    ~opencvqt();
    signals:


private slots:
    void on_pushButton_clicked();
    void yazici(QString &veli);
    void filter_2d(cv::Mat src,cv::Mat& dst);
    void filter_2d_back(cv::Mat src, cv::Mat &dst);
    void on_comboBox_activated(int index);

    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    signals:


private:

    Ui::opencvqt *ui;
};
#endif // OPENCVQT_H
