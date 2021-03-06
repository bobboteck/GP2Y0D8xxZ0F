# GP2Y0D8xxZ0F
A board designed with KiCAD for Sharp sensor GP2Y0D805Z0F, GP2Y0D810Z0F and GP2Y0D815Z0F

I had bought some of these sensors with a friend, without taking them with boards that are easily found on the online store, because we had the need for stable fixing points, that these models did not guarantee.
Then we decided to create a board for PTH components, but on the way, thanks to some of KiCAD libraries and others that I have modified, I have designed the board so it could also be assembled with SMD components.

## The circuit diagram
![Schema](https://github.com/bobboteck/GP2Y0D8xxZ0F/blob/master/images/schema.png "Schema")

How you can see on the schema, there are another difference with the commercial solution, the connector have four pin (the commercial product have only 3). The fourth pin is used to command the Enable pin of Sharp sensor, in this way you can activate the sensor only when you need to use it, and conseguently save power.
Typically the current consumption is between 6 and 10 mA, when the Enable pin is put to 0V consumption drops to 8uA. When the Enable pin is put to 5V, it takes about 2 mS to obtain a valid measurement.
On the board is present a solder Jumper (JP1), you can close it with solder to set the Enable always active, **but REMEBER not to use the connector Enable pin**.

## PCB design
![View of Front Board](https://github.com/bobboteck/GP2Y0D8xxZ0F/blob/master/images/scheda-sensore-top.png "View of Front PCB")

How explained before, the PCB design was tinked not for a small possible size (approximately 24x27 mm), but to leave, to those who will have to mount it, the freedom to choose whether to use SMD or PTH components.
The following picture is a 3D render of PCB, not all component have a 3D module, but you can see the board design.

![3D render](https://github.com/bobboteck/GP2Y0D8xxZ0F/blob/master/images/GP2Y0D8xxZ0F.jpg "3D render")

## Board support
I have designed a specific support for this card, to be printed with a 3D printer, to achieve a stable fixing of the sensor. You can see it on [Tinkercad](https://www.tinkercad.com/things/4nSgSBEPW0j).

![Board support](https://github.com/bobboteck/GP2Y0D8xxZ0F/blob/master/images/GP2Y0D8xxZ0F-3D-Support.png "Board support")

***Warning!*** *Currently I have not yet done a 3D printing test*
