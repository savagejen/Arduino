The original post about this project was published at: http://www.alphaonelabs.com/sparkl-motion/

---

Sparkl Motion is an arduino powered necklace.
Video: http://www.flickr.com/photos/miserynotes/4448899259/

---

Blinky lights have an amazing ability to catch the eye. Vegas, Times Square, and the high price of certain gem stones all attest to this fact! For my first Arduino project, I wanted to play with using pulse width modulation to make LEDs “sparkle”. Leah Buechley‘s washable version of the arduino, the LilyPad, gave me the idea of creating something wearable.

SparkL Motion is a simple ribbon necklace. The LilyPad is front and center, worn like a Cameo, with a strand of LEDs coming out from either side of it. The electricity is run through conductive thread, so there are no wires that could poke the wearer. The top of the ribbon itself is crimped in place using beads, so that the ribbon falls along the edge of the neckline. This crimping also creates a soft ruffle and helps to distribute the weight of the LilyPad so that it doesn’t tilt forward. Additionally, both a battery source and an accelerometer are hidden behind the LilyPad itself.

Materials:

2 yards 1.5″ width sheer wire edged ribbon
Embroidery floss to match the ribbon
Beads
Beading thread
Big Eye Needle/Beading Needle
Conductive thread
A LilyPad, a breakout board, and a USB cable
A LilyPad Accelerometer
A coin cell battery holder and some coin cell batteries
6 LilyPad Bright White LEDs
Electrical Tape
An embroidery frame, tape measure, paper clips, and a beading mat
Construction:

Affix a section of the ribbon in place using your embroidery frame, so that it is held taught for sewing. Â Use a paperclip to clamp down the Lilypad at the center of the ribbon so that the words “LilyPad Arduino” are front-facing and readable. On either side of the LilyPad, space out the LEDs approximately 1.5 inches away from each other on the length of the ribbon, with 3 on each side of the LilyPad. Be certain to lay the LEDs vertically and center them from the top and bottom of the ribbon by using a ruler to measure how far from the edge they should be sewn in.

Thread a large eye beading needle with a length of conductive thread. Sew a straight line along the length of your ribbon using conductive thread, connecting the positive leads (the + holes) on the LEDs to pins 5 and 13 (the holes marked 5 and 13) on the Lilypad. This should be a single strand connecting across all the holes, making certain that both hole 5 and hole 13 are connected. When the Lilypad sends electricity to the LEDs, it will do so through this line of conductive thread. If you are having trouble sewing a straight line, you can clamp down a length of your tape measure using some paperclips and use it as a guide for your sewing. Then you can use the 1/8th inch markers along the tape measure to make certain that each stitch you sew is the same length. Be certain to loop at least twice through each hole on the LEDs and on the LilyPad.

Next, sew a straight line using the conductive thread to connect the negative leads (the – holes) on the LEDs to the ground (the – hole) on the LilyPad. You can use the same method you used to sew the last line of thread.

If you decide not to use two parallel lines of conductive thread for these connections, just be certain that the length of conductive thread that connects the + leads does not touch with the length of conductive thread that connects the – leads! Although shorting the LEDs does create a nifty effect, it’s not what we’re going for here.

Flip the necklace over so you’re looking at the back/flat side of the LilyPad. Cover the back of the LilyPad with electrical tape over the conductive threads so that it will not cross with future layers of conductive thread. It’s very important that your connections do not cross!

Take your LilyPad accelerometer, place it on the back of the LilyPad over the electrical tape. Be sure to leave enough space next to the accelerometer for the battery holder, which you will be connecting up later. Look for the X, Y, and Z arrows on the accelerometer and rotate the accelerometer until the arrows line up with the X, Y, and Z axis when you are wearing the necklace. Use some conductive thread to connect the X pin on the accelerometer to the a5 pin on the LilyPad, connect the Y pin on the accelerometer to the a1 pin on the LilyPad, connect the Z pin on the accelerometer to the a4 pin on the LilyPad. Then cover the threads with electrical tape. Now look for the tiny + sign on the accelerometer and connect that to the + on the Lilypad using some conductive thread. Connect the remaining empty hole on the accelerometer to the – pin on the LilyPad. Then tape over your connections with electrical tape.

Now it’s time to test out your connections! Download and install the arduino development software. Then plug the breakout board into the Lilypad, and connect the breakout board to your computer using the usb cable. Upload the sparklmotion.ino sketch to the lilypad.

Once you are certain that the code is working and the LEDs are sparkling, you can unplug the breakout board from the LilyPad and begin connecting the battery holder to the LilyPad. Be sure to remove any batteries from the battery holder. Find an empty spot on the back of the LilyPad to put the battery holder on. Run connections from the – on the LilyPad to the – on the battery holder with your conductive thread. Cover the connection with some electrical tape. Then run a connection from the + on the LilyPad to the + on the battery holder. Cover this connection with electrical tape as well. Make sure the electrical tape covers the battery terminals so that the battery holder is held snugly against the back of the LilyPad. Once the connections are secure, you can pop in a battery to see if they work. Your LEDs should begin blinking in the same way they did when the breakout board was connected.

If there is any electrical tape jutting out from the back of the LilyPad that is visible from the front, clip it off carefully. Be sure not to sever any of your conductive thread’s connections when doing so.

As an optional embellishment, you can embroider along the bottom length of your ribbon, into the conductive thread in a modified guilloche stitch. Leave out the stem stitch and french knot between stitches. Guilloche both sides of the sheer ribbon using the existing straight stitches made by the conductive thread rather then looping through blocks of straight stitches. The diameter of the loops does not have to be perfect, since the ruffle on the ribbon will distort the embroidery anyways.

Next, we bead pleat the top edge of the ribbon, which creates the ruffle along the bottom edge. The bead pleat is constructed by placing folds of ribbon between each bead, such that the pleat wraps around the bead rather than the fold being sewn flat into the ribbon. Lace your beading needle with some beading thread and begin by sewing up from underneath the ribbon, place a bead on the strand, then sew down into ribbon again. Place a beading knot on the underside of the ribbon, then bend the wire on the ribbon edge to create a fold and bring the needle up through the inside of the fold to the upside of the ribbon. Repeat this process on both sides of the LilyPad until the top edge of the necklace from the edge of LilyPad to the last LED has been pleated.

As a finishing touch, you can embellish the ends of the ribbon with beads. Roll an end around your finger twice, then use a beading needle, some beading thread, and a some beads to sew it in place. Be sure to tie a beading knot between each bead and use a backstitch, so that the stitches will be sturdy.

Notes:

To wear the necklace, simply tie it around your neck using a bow and pop in a battery.
These coin cell batteries will last approximately 6 hours. When they start to get low, the LEDs will begin sparkling erratically.
If you have any fraying on the conductive thread, you can use a bit of Sobo glue to hold it in place. Not every glue will work for this, so if you don’t have Sobo, be sure to test the resistance of the glue before using it.
Pin 13 is not an analog pin. The only reason we’re setting it to input and connecting it to the main line with pin 5 is because pin 13 has an LED on the LilyPad board that we’re lighting up along with the other LEDs.
There are plenty of possible improvements to the design of this necklace. For one thing, the battery can be replaced with a rechargeable. The “sparkle” effect might be improved with some changes to the code (just be sure to leave pin 13 on Input if you have sewn it into the same line as pin 5). You could also do away with the accelerometer and just read random values from the unused analog inputs to determine changes in the rate of sparkle.
