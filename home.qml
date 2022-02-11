import QtQuick 2.12
import QtQuick.Controls 2.12

Item {
    Image {
        id: background
        source: "files/surgeon.jpg"
        fillMode: Image.PreserveAspectCrop
        anchors.fill: parent
    }

    Column{
        x: 50
        y: 100

        spacing: 10
        Button{
            font.pixelSize: 20
            text: "شروع"
            width: 150
            height: 50
            onClicked: {
                stack.push("surgeon.qml")
            }
        }
        Button{
            font.pixelSize: 20
            text: "خروج"
            width: 150
            height: 50
            onClicked: {
                Qt.quit()
            }
        }
    }
}
