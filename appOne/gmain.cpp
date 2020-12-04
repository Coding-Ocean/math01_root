#include"libOne.h"
void gmain() {
    window(1000, 1000);
    let area = 4;
    let length = 0;
    while (notQuit) {
        if (isTrigger(KEY_D)) {
            ++area;
        }
        if (isTrigger(KEY_A)) {
            --area;
            if (area < 0)area = 0;
        }
        length = sqrt(area);

        clear(160);
        mathAxis(4.1);
        stroke(160, 200, 255);
        strokeWeight(4);
        fill(255, 200, 200);
        mathRect(0, 0, length, -length);

        fill(255, 255, 200);
        let tsize = 60;
        textSize(tsize);
        text("–ÊÏ" + area, 0, tsize);
        text("sqrt(" + area + ")=" + length, 0, tsize * 2);
    }
}