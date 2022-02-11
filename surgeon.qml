import QtQuick 2.12
import QtQuick.Controls 2.12

Item {
    Image {
        id: surgeonBackground
        source: "files/surgeon2.jpg"
        anchors.fill: parent
        fillMode: Image.PreserveAspectCrop
    }

    Column {
        id: surgeon_details
        spacing: 10
        x: 50
        y: 50
        Label{
            text: "مشخصات جراح"
            font.pixelSize: 30
            color: "white"
        }

        Label {
            font.pixelSize: 20
            text: "نام "
            anchors.right: surgeon_name.right
        }
        Label {
            id: namevalidation
            font.pixelSize: 15
            text: ""
            anchors.right: surgeon_name.right
            color: "red"
        }
        TextField {
            id: surgeon_name
            placeholderText: "نمونه : فاطمه"
            font.pixelSize: 15
            maximumLength: 15
        }
        Label {
            font.pixelSize: 20
            text: "نام خانوادگی"
            anchors.right: surgeon_name.right
        }
        Label {
            id: lnamevalidation
            font.pixelSize: 15
            text: ""
            anchors.right: surgeon_name.right
            color: "red"
        }
        TextField {
            id: surgeon_lastname
            placeholderText: "نمونه : سعدابادی"
            font.pixelSize: 15
            maximumLength: 15

        }
        Label {
            font.pixelSize: 20
            text: "سن"
            anchors.right: surgeon_name.right
        }
        Label {
            id: agevalidation
            font.pixelSize: 15
            text: ""
            anchors.right: surgeon_name.right
            color: "red"
        }
        TextField {
            id: surgeon_age
            placeholderText: "نمونه : 18"
            font.pixelSize: 15
            maximumLength: 2
        }
        Label {
            font.pixelSize: 20
            text: "کد پرسنلی"
            anchors.right: surgeon_name.right
        }
        Label {
            id: codevalidation
            font.pixelSize: 15
            text: ""
            anchors.right: surgeon_name.right
            color: "red"
        }
        TextField {
            id: surgeon_personalCode
            placeholderText: "نمونه : 123456"
            font.pixelSize: 15
            maximumLength: 6
        }
        Label{
            id: message
            text: ""
            font.pixelSize: 16
            color: "limegreen"
        }

    }
    Row{
        anchors.horizontalCenter: surgeon_details.horizontalCenter
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 40
        spacing: 10
        Button{
            text: "بازگشت"
            font.pixelSize: 20
            onClicked: {
                stack.pop()
            }

        }
        Button{
            text: "ثبت اطلاعات"
            font.pixelSize: 20
            onClicked: {
                switch(bknd.add_surgeon(surgeon_name.text, surgeon_lastname.text, surgeon_age.text, surgeon_personalCode.text))
                {
                case 1:
                    namevalidation.text = "نام درست وارد کنید"
                    lnamevalidation.text = ""
                    agevalidation.text = ""
                    codevalidation.text = ""
                    break;
                case 2:
                    namevalidation.text = ""
                    lnamevalidation.text = "نام خانوادگی را درست وارد کنید"
                    agevalidation.text = ""
                    codevalidation.text = ""
                    break;
                case 3:
                    namevalidation.text = ""
                    lnamevalidation.text = ""
                    agevalidation.text = "سن را درست وارد کنید"
                    codevalidation.text = ""
                    break;
                case 4:
                    namevalidation.text = ""
                    lnamevalidation.text = ""
                    agevalidation.text = ""
                    codevalidation.text = "کد پرسنلی را درست وارد کنید"
                    break;
                case 5:
                    namevalidation.text = ""
                    lnamevalidation.text = ""
                    agevalidation.text = ""
                    codevalidation.text = ""
                    message.text = "اطلاعات جراح با موفقیت در سرور ثبت شد"
                    break;
                }

            }

        }


    }
}
