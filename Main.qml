import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    width: 640
    height: 480
    visible: true
    title: qsTr("Smart Home Project")

    Rectangle{
        anchors.fill: parent
        color: "whitesmoke"

        Column{
            anchors.centerIn: parent
            spacing: 20
            Text {
                text: controller.fanOn ? "Fan is On" : "Fan is off"
                font.pixelSize: 18
                horizontalAlignment: Text.AlignHCenter
                width: parent.width
            }

            Button {
                text: "Toggle Fan"
                width: 150
                height: 40
                onClicked: controller.toggleFan()
            }

            Text {
                text: controller.lightOn ? "Light is On" : "Light is off"
                font.pixelSize: 18
                horizontalAlignment: Text.AlignHCenter
                width: parent.width
            }
            Button {
                text: "Toggle Light"
                width: 150
                height: 40
                onClicked: controller.toggleLight()
            }
        }
    }
}
