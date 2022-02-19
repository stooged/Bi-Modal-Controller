# Bi-Modal Controller

`Archiving old project`

this is a project to control the electronic bi modal valve controllers in the vf commodore using arduino.<br>
it uses 10v PWM at 200hz to control the valve state<br>

I just went with a simple momentary switch to toggle the valves but you could use a remote relay or you could add a Bluetooth module to the Arduino project and use a mobile phone to toggle the valves.<br>

depending on the parts you use it will cost anywhere between $60 to $100.<br>

I used a <a href=https://www.arduino.cc/en/pmwiki.php?n=Main/ArduinoBoardNano>nano</a> board in the project<br>

<img src=https://github.com/stooged/Bi-Modal-Controller/blob/main/Pictures/schematic.jpg><br>


I used a fuse tap to get 12v ignition switched power from the fusebox above the battery<br>
<img src=https://github.com/stooged/Bi-Modal-Controller/blob/main/Pictures/fuse_tap.jpg><br>
<img src=https://github.com/stooged/Bi-Modal-Controller/blob/main/Pictures/fuse_diag.jpg><br>

there is a unused bung under the battery tray that can be used to run the wires for the valve controllers<br>
<img src=https://github.com/stooged/Bi-Modal-Controller/blob/main/Pictures/bung_under_battery.jpg><br>

in the box<br>
<img src=https://github.com/stooged/Bi-Modal-Controller/blob/main/Pictures/my_build_in_box.jpg><br>
top<br>
<img src=https://github.com/stooged/Bi-Modal-Controller/blob/main/Pictures/my_build_top.jpg><br>
bottom<br>
<img src=https://github.com/stooged/Bi-Modal-Controller/blob/main/Pictures/my_build_bottom.jpg><br>




<b>Needed parts</b>:<br>
1x <a href=https://www.jaycar.com.au/duinotech-nano-board-arduino-compatible/p/XC4414>https://www.jaycar.com.au/duinotech-nano-board-arduino-compatible/p/XC4414</a>  -  $29.95<br>
1x <a href=https://www.jaycar.com.au/1k-ohm-0-5-watt-metal-film-resistors-pack-of-8/p/RR0572>https://www.jaycar.com.au/1k-ohm-0-5-watt-metal-film-resistors-pack-of-8/p/RR0572</a>  -  $0.55<br>
1x <a href=https://www.jaycar.com.au/1-5k-ohm-0-5-watt-metal-film-resistors-pack-of-8/p/RR0576>https://www.jaycar.com.au/1-5k-ohm-0-5-watt-metal-film-resistors-pack-of-8/p/RR0576</a>  -  $0.55<br>
1x <a href=https://www.jaycar.com.au/10k-ohm-0-5-watt-metal-film-resistors-pack-of-8/p/RR0596>https://www.jaycar.com.au/10k-ohm-0-5-watt-metal-film-resistors-pack-of-8/p/RR0596</a>  -  $0.55<br>
1x <a href=https://www.jaycar.com.au/7812-12v-1a-voltage-regulator-to-220/p/ZV1512>https://www.jaycar.com.au/7812-12v-1a-voltage-regulator-to-220/p/ZV1512</a>  -  $1.85<br>
1x <a href=https://www.jaycar.com.au/bc639-npn-transistor/p/ZT2179>https://www.jaycar.com.au/bc639-npn-transistor/p/ZT2179</a>  -  $0.95<br>
1x <a href=https://www.jaycar.com.au/double-mini-blade-fuse-socket-wire-tap/p/SF5125>https://www.jaycar.com.au/double-mini-blade-fuse-socket-wire-tap/p/SF5125</a>  -  $4.95<br>

you can use any "<b>momentary</b>" switch you like<br>
1x <a href=https://www.jaycar.com.au/ip67-rated-dome-pushbutton-switch-black/p/SP0656>https://www.jaycar.com.au/ip67-rated-dome-pushbutton-switch-black/p/SP0656</a>  -  $4.95<br>

Total for needed parts: <b>$44.30<br>


Optional parts</b>:<br>
1x <a href=https://www.jaycar.com.au/bulkhead-black-88-x-69-x-33mm/p/HB6075>https://www.jaycar.com.au/bulkhead-black-88-x-69-x-33mm/p/HB6075</a>  -  $3.75<br>
2x <a href=https://www.jaycar.com.au/small-breadboard-layout-prototyping-board/p/HP9570>https://www.jaycar.com.au/small-breadboard-layout-prototyping-board/p/HP9570</a>  -  $4.95<br>
2x <a href=https://www.jaycar.com.au/2-way-pcb-mount-screw-terminals-5mm-pitch/p/HM3172>https://www.jaycar.com.au/2-way-pcb-mount-screw-terminals-5mm-pitch/p/HM3172</a>  -  $1.20<br>

Total for all parts i used: <b>$60.35</b><br>

this total does not include the wire, you can source that pretty much anywhere you like used or new.


<b>Plugs for controllers</b><br>
if you want plugs for the valve controllers you can get these ones that john revill linked from aliexpress<br>
according to the listing there are 4pcs in the lot so you will get 4 plugs in the one purchase.<br>

1x: <a href=https://www.aliexpress.com/item/4pcs-lot-5-Pin-Way-Nitrox-Sensor-Plug-Mass-Air-Flow-Sensor-Meter-MAF-Connector-Socket/32850617234.html>https://www.aliexpress.com/item/4pcs-lot-5-Pin-Way-Nitrox-Sensor-Plug-Mass-Air-Flow-Sensor-Meter-MAF-Connector-Socket/32850617234.html</a>  -  $21.40<br>


Total for all parts i used including the plugs: <b>$81.75</b><br>
