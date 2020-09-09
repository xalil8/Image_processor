#include "opencvqt.h"
#include "ui_opencvqt.h"

opencvqt::opencvqt(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::opencvqt)
{
    ui->setupUi(this);
    connect(this,SIGNAL(on_pushButton_clicked()),this,SLOT(yazici(QString &veli )));
}

opencvqt::~opencvqt()
{
    delete ui;
}

void opencvqt::on_pushButton_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this,tr("cchoose"),"",tr("Images(*.png *.jpg *.jpeg *.bmp *.gif"));
    QImage husam;
    husam.load(filename);
    ui->label->setPixmap(QPixmap::fromImage(husam).scaled(ui->label->size(),Qt::KeepAspectRatio));
    emit yazici(filename);
}

void opencvqt::yazici(QString &veli)
{
    ui->textEdit->setText(veli);
}

void opencvqt::filter_2d(cv::Mat src, cv::Mat &dst)
{
    float n =-1;
        //float data[]={1,1,1,1,1,1,1,1,1};
        float data[]={
                        n,n,n,
                        n,8,n,
                        n,n,n}; //-1 8 -1


        cv::Mat kernel(3,3,CV_32F,data);
        cv::filter2D(src,dst,-1,kernel);


}
void opencvqt::filter_2d_back(cv::Mat src, cv::Mat &dst)
{
    float n =1;
        //float data[]={1,1,1,1,1,1,1,1,1};
        float data[]={
                        n,n,n,
                        n,-7,n,
                        n,n,n}; //-1 8 -1


        cv::Mat kernel(3,3,CV_32F,data);
        cv::filter2D(src,dst,-1,kernel);


}

void opencvqt::on_comboBox_activated(int index)
{
//    if(index==0)
//    {   ui->label_3->setText("case 0 calıstı");
//        QString my_data;
//        my_data= ui->textEdit->toPlainText();
//        ui->label_3->setText(my_data);
//    }
//    else if (index==1)
//    {
//        ui->label->clear();
//        ui->label_3->setText("case 1 calıstı");
//    }

}

void opencvqt::on_pushButton_2_clicked()
{   int ali;
    ali= ui->comboBox->currentIndex();
    on_comboBox_activated(ali);
    if(ali==0)
        {
            QString adresofyarrak=ui->textEdit->toPlainText();
            cv::Mat yarrakhusam = cv::imread(adresofyarrak.toStdString());
          //  cv::resize(yarrakhusam,yarrakhusam,cv::Size(720,480),Qt::SmoothTransformation);
            cvtColor(yarrakhusam,yarrakhusam,CV_BGR2RGB);
            filter_2d(yarrakhusam,yarrakhusam);
           // cv::imwrite("/home/aozcan/Desktop/opencv-fotolar/sokucu2.jpg",yarrakhusam);
            QImage img((uchar*)yarrakhusam.data, yarrakhusam.cols, yarrakhusam.rows, QImage::Format_RGB32);

            ui->label_3->setPixmap(QPixmap::fromImage(QImage(yarrakhusam.data, yarrakhusam.cols, yarrakhusam.rows, yarrakhusam.step, QImage::Format_RGB888)).scaled(ui->label_3->size(),
                                                                                                                                                                    Qt::KeepAspectRatio,Qt::SmoothTransformation));
//          ui->label_3->setPixmap(QPixmap::fromImage(QImage(yarrakhusam.data, yarrakhusam.cols, yarrakhusam.rows, yarrakhusam.step, QImage::Format_RGB888)));
            cv::Mat storage;

            yarrakhusam.copyTo(storage);
            cvtColor(storage,storage,CV_BGR2RGB);
            cv::imwrite("/home/aozcan/Desktop/opencv-fotolar/storage.jpg",storage);
        }
//           ui->label->setPixmap(QPixmap::fromImage(husam).scaled(ui->label->size(),Qt::KeepAspectRatio));
//
//    ui->image_lbl->setPixmap(QPixmap::fromImage(QImage(img.data, img.cols, img.rows, img.step, QImage::Format_RGB888)));
    else if(ali==1)
        {
            QString adresofyarrak=ui->textEdit->toPlainText();
            cv::Mat yarrakhusam = cv::imread(adresofyarrak.toStdString());
            //cv::resize(yarrakhusam,yarrakhusam,cv::Size(720,480),Qt::SmoothTransformation);
            cvtColor(yarrakhusam,yarrakhusam,CV_BGR2RGB);
            filter_2d_back(yarrakhusam,yarrakhusam);
            QImage img((uchar*)yarrakhusam.data, yarrakhusam.cols, yarrakhusam.rows, QImage::Format_RGB888);

            ui->label_3->setPixmap(QPixmap::fromImage(QImage(yarrakhusam.data, yarrakhusam.cols, yarrakhusam.rows, yarrakhusam.step, QImage::Format_RGB888)).scaled(ui->label_3->size(),
                                                                                                                                                                    Qt::KeepAspectRatio,Qt::SmoothTransformation));
//          ui->label_3->setPixmap(QPixmap::fromImage(QImage(yarrakhusam.data, yarrakhusam.cols, yarrakhusam.rows, yarrakhusam.step, QImage::Format_RGB888)));
            cv::Mat storage;
            yarrakhusam.copyTo(storage);
            cv::imwrite("/home/aozcan/Desktop/opencv-fotolar/storage.jpg",storage);


        }



//    QImage my_image= QImage::loadFromData(adresofyarrak.toStdString());
//    QPixmap my_pixmap = QPixmap::fromImage(adresofyarrak.toStdString());
}

//QImage Mat2QImage(cv::Mat const& src)
//{
//        cv::Mat temp; // make the same cv::Mat
//        cvtColor(src, temp,CV_BGR2RGB); // cvtColor Makes a copt, that what i need
//        QImage dest((const uchar *) temp.data, temp.cols, temp.rows, temp.step, QImage::Format_RGB888);
//        dest.bits(); // enforce deep copy, see documentation
//        // of QImage::QImage ( const uchar * data, int width, int height, Format format )
//        return dest;
//}



void opencvqt::on_pushButton_3_clicked()
{

    QString adress="/home/aozcan/Desktop/opencv-fotolar/storage.jpg";
    cv::Mat alidesidero= cv::imread("/home/aozcan/Desktop/opencv-fotolar/storage.jpg");
    cvtColor(alidesidero,alidesidero,CV_BGR2RGB);
    QImage ali((uchar*)alidesidero.data, alidesidero.cols, alidesidero.rows, QImage::Format_RGB32);

    ui->label->setPixmap(QPixmap::fromImage(ali).scaled(ui->label_3->size(),Qt::KeepAspectRatio,Qt::SmoothTransformation));
    ui->textEdit->setText(adress);
}

void opencvqt::on_pushButton_4_clicked()
{   QString adres=ui->textEdit->toPlainText();
    cv::Mat kaydet= cv::imread(adres.toStdString());
    cv::imwrite("/home/aozcan/Desktop/opencv-fotolar/newww.jpg",kaydet);
}
