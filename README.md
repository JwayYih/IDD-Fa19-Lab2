# Digital Timer
 
Include your responses to the bold questions below. Include snippets of code that explain what you did. Deliverables are due next Tuesday. Post your lab reports as README.md pages on your GitHub, and post a link to that on your main class hub page.

## Part A. Solder your LCD panel

![Soldering](https://github.com/JwayYih/IDD-Fa19-Lab2/blob/master/Soldering.jpg)

## Part B. Writing to the LCD
 
**a. What voltage level do you need to power your display?**

5V

**b. What voltage level do you need to power the display backlight?**

3V
   
**c. What was one mistake you made when wiring up the display? How did you fix it?**

It worked the first time around!

**d. What line of code do you need to change to make it flash your name instead of "Hello World"?**

  lcd.print("Johnway Yih");
 
**e. Include a copy of your Lowly Multimeter code in your lab write-up.**

[Lowly Multimeter](https://github.com/JwayYih/IDD-Fa19-Lab2/blob/master/Lab_2_-_Lowly_Multimeter.ino)

## Part C. Using a time-based digital sensor

**Upload a video of your working rotary encoder here.**

[Rotary Encoder](https://photos.app.goo.gl/cfFdARcMkSB3WoUW7)

## Part D. Make your Arduino sing!

**a. How would you change the code to make the song play twice as fast?**
 
 Change noteDuration from 1000 to 500
 
     int noteDuration = 500 / noteDurations[thisNote];

**b. What song is playing?**

[Star Wars](https://photos.app.goo.gl/FgiUhXLyHuL5ZsqM6)

## Part E. Make your own timer

**a. Make a short video showing how your timer works, and what happens when time is up!**

[My Star Wars Timer](https://photos.app.goo.gl/NBcgwZctPK6dyjKDA)

**b. Post a link to the completed lab report your class hub GitHub repo.**

[My Star Wars Timer Code](https://github.com/JwayYih/IDD-Fa19-Lab2/blob/master/MyTimer.ino)
