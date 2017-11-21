---
layout: page 
title: Questnet 
permalink: /questnet/
description: This Techzone is manned by Simon, Winnie and Hales from CREATE UNSW.
---

<style>
  h3 {
    margin-top: 3rem;
  }
  img {
    max-width: 100%;
    max-height: 40em;
    height: auto;
    width: auto;
  }
  td,
  th {
    padding: 0.5em;
  }
  table,
  td,
  th {
    border: 1px solid black;
    border-collapse: collapse;
  }
  body {
    counter-reset: h2
  }
  h2 {
    counter-reset: h3
  }
  h3 {
    counter-reset: h4
  }
  h4 {
    counter-reset: h5
  }
  h5 {
    counter-reset: h6
  }
  h2:before {
    counter-increment: h2;
    content: counter(h2) ". "
  }
  h3:before {
    counter-increment: h3;
    content: counter(h2) "." counter(h3) ". "
  }
  h4:before {
    counter-increment: h4;
    content: counter(h2) "." counter(h3) "." counter(h4) ". "
  }
  h5:before {
    counter-increment: h5;
    content: counter(h2) "." counter(h3) "." counter(h4) "." counter(h5) ". "
  }
  h6:before {
    counter-increment: h6;
    content: counter(h2) "." counter(h3) "." counter(h4) "." counter(h5) "." counter(h6) ". "
  }
  h3 {
    border-bottom: 1px solid black;
  }
  .parts img {
    max-width: 15rem;
    height: auto;
  }
</style>

<h1>
  <a class="mozTocH1" name="mozTocId112693"></a>Questnet Techzone - Arduino Projects</h1>
<p>This Techzone is manned by
  <i>Simon</i>,
  <i>Winnie</i> and
  <i>Hales</i>
  from CREATE UNSW.
  <br>
</p>
<p>If your copy of the Arduino software is missing any libraries, they can be found in
  <a href="libraries/">this folder</a>.&nbsp; The Arduino software itself can be downloaded from
  <a href="http://arduino.cc">arduino.cc</a> or
  <a href="http://arduino.org">arduino.org</a>
  <br>
</p>
<h4>
  <a class="mozTocH2" name="mozTocId15543"></a>Parts of Interest in your Kits
  <br>
</h4>
<table class="parts">
  <tbody>
    <tr>
      <td valign="top">Photo
        <br>
      </td>
      <td valign="top">&nbsp;Name
        <br>
      </td>
      <td valign="top">Projects Parts
        <br>
      </td>
    </tr>
    <tr>
      <td valign="top">
        <img alt="" src="/questnet/part_ldr.jpg" height="301" width="555">
        <br>
      </td>
      <td valign="top">LDR - Light Dependant Resistor
        <br> (a light sensor)
        <br>
        <br> Easy to wire up.
        <br>
      </td>
      <td valign="top">
        <ul>
          <li>
            <a href="#mozTocId573562">Light-Operated Buzzer</a>
          </li>
          <li>
            <a href="#mozTocId922852">Light-Operated Motor</a>
          </li>
        </ul>
      </td>
    </tr>
    <tr>
      <td valign="top">
        <img alt="" src="/questnet/part_piezoelectricbuzzer.jpg" height="140" width="200">
        <br>
      </td>
      <td valign="top">Piezoelectric buzzer
        <br> (a simple speaker)
        <br>
        <br> Easy to wire up.
        <br>
      </td>
      <td valign="top">
        <ul>
          <li>
            <a href="#mozTocId573562">Light-Operated Buzzer</a>
          </li>
          <li>
            <a href="#mozTocId627269">Four Note Piano</a>
          </li>
          <li>
            <a href="#mozTocId37362">Game: Simon Says</a>
          </li>
        </ul>
      </td>
    </tr>
    <tr>
      <td valign="top">
        <img alt="" src="/questnet/part_rgbled.jpeg" height="308" width="500">
      </td>
      <td valign="top">RGB LED
        <br>
        <br> (a light that can display any colour you want it to, and can change colours on the fly)
        <br>
        <br> Easy to wire up.
        <br>
      </td>
      <td valign="top">
        <ul>
          <li>
            <a href="#mozTocId893140">Colour-Changing Light</a>
          </li>
        </ul>
      </td>
    </tr>
    <tr>
      <td valign="top">
        <img alt="" src="/questnet/part_servo.jpg" height="400" width="550">
        <br>
      </td>
      <td valign="top">Servo
        <br> (a geared motor)
        <br>
        <br> Easy to wire up.
        <br>
      </td>
      <td valign="top">
        <ul>
          <li>
            <a href="#mozTocId922852">Light-Operated Motor</a>
          </li>
        </ul>
      </td>
    </tr>
    <tr>
      <td valign="top">
        <img alt="" src="/questnet/part_ultrasonic.jpg" height="600" width="600">
        <br>
      </td>
      <td valign="top">Ultrasonic distance sensor
        <br> (measures distances using sound)
        <br>
        <br> Easy to wire up. </td>
      <td valign="top">
        <ul>
          <li>
            <a href="#mozTocId294045">LCD: Ultrasonic Distance Sensor
            </a>
          </li>
        </ul>
      </td>
    </tr>
    <tr>
      <td valign="top">
        <img alt="" src="/questnet/part_LCM1602.jpg" height="94" width="200">
      </td>
      <td valign="top">LCD Display
        <br> (displays two lines of text)
        <br>
        <br> Easy to wire up.
        <br>
      </td>
      <td valign="top">
        <ul>
          <li>
            <a href="#mozTocId852979">LCD: Pre-Defined Message</a>
          </li>
          <li>
            <a href="#mozTocId967939">LCD: Temperature Sensor</a>
          </li>
          <li>
            <a href="#mozTocId294045">LCD: Ultrasonic Distance Sensor
            </a>
          </li>
        </ul>
      </td>
    </tr>
    <tr>
      <td valign="top">
        <img alt="" src="/questnet/part_humid.jpeg" height="135" width="339">
        <br>
      </td>
      <td valign="top">Humidity and temperature sensor
        <br>
        <br> Easy to wire up.
        <br>
      </td>
      <td valign="top">
        <ul>
          <li>
            <a href="#mozTocId967939">LCD: Temperature Sensor</a>
          </li>
        </ul>
      </td>
    </tr>
    <tr>
      <td valign="top">
        <img alt="" src="/questnet/part_singleseven.jpg" height="400" width="400">
        <br>
      </td>
      <td valign="top">Single digit LED display
        <br>
        <br> Moderately difficult to wire up.
        <br>
      </td>
      <td valign="top">
        <ul>
          <li>
            <a href="#mozTocId656076">Single-Digit Display</a>
          </li>
        </ul>
      </td>
    </tr>
    <tr>
      <td valign="top">
        <img alt="" src="/questnet/part_4digit-led-display.png" height="800" width="800">
        <br>
      </td>
      <td valign="top">Four digit LED display
        <br>
        <br> Warning: difficult and uninspiring to use.&nbsp; Requires many wires and patience.
        <br>
      </td>
      <td valign="top">Extension only!
        <br>
      </td>
    </tr>
    <tr>
      <td valign="top">
        <img alt="" src="/questnet/part_RF-short.jpg" height="451" width="600">
        <br>
      </td>
      <td valign="top">Radio Module
        <br>
        <br> (communicates wirelessly to other identical radio modules)
        <br>
        <br> Note: Requires a second person with a second module to receive/send to.
        <br>
      </td>
      <td valign="top">
        <ul>
          <li>
            <a href="#mozTocId228547">Radio Module Communication</a>
          </li>
        </ul>
      </td>
    </tr>
  </tbody>
</table>
<h2>
  <a class="mozTocH2" name="mozTocId230724"></a>Recommended Projects
</h2>
<h3>
  <a class="mozTocH3" name="mozTocId893140"></a>Colour-Changing Light
</h3>
<img alt="" src="/questnet/wiring_rgbled.png" height="1008" width="1755">
<br>
<a href="code_rgb.ino">code_rgb.ino</a>
<br>
<h3>
  <a class="mozTocH3" name="mozTocId573562"></a>Light-Operated Buzzer
</h3>
<img alt="" src="/questnet/wiring_buzzer.png" height="1254" width="876">
<br>
<a href="code_buzzer.ino">code_buzzer.ino </a>
<br>
<h3>
  <a class="mozTocH3" name="mozTocId922852"></a>Light-Operated Motor
</h3>
<p>
  <img alt="" src="/questnet/wiring_servo.png" height="1254" width="1257">
  <br>
  <a href="code_servo.ino">code_servo.ino</a>
  <br>
</p>
<h3>
  <a class="mozTocH3" name="mozTocId656076"></a>Single-Digit Display
</h3>
<br>
<img alt="" src="/questnet/wiring_singleseg.png" height="1308" width="876">
<br>
<a href="code_digit.ino">code_digit.ino</a>
<br>
<h3>
  <a class="mozTocH3" name="mozTocId852979"></a>LCD: Pre-Defined Message
</h3>
<br>
<img alt="" src="/questnet/wiring_lcd.png" height="864" width="1560">
<br>
<a href="code_lcd_exampleline.ino">code_lcd_exampleline.ino</a>
<br>
<h3>
  <a class="mozTocH3" name="mozTocId967939"></a>LCD: Temperature Sensor
</h3>
<img alt="" src="/questnet/wiring_lcd_temp.png" height="1011" width="2166">
<br>
<a href="code_lcd_temperature.ino">code_lcd_temperature.ino</a>
<br>
<h3>
  <a class="mozTocH3" name="mozTocId294045"></a>LCD: Ultrasonic Distance Sensor</h3>
<img alt="" src="/questnet/wiring_lcd_ultrasonic.png" height="999" width="2247">
<br>
<a href="code_lcd_ultrasonic.ino">code_lcd_ultrasonic.ino</a>
<br>
<h2>
  <a class="mozTocH2" name="mozTocId135364"></a>Advanced Projects</h2>
<h3>
  <a class="mozTocH3" name="mozTocId37362"></a>Game: Simon Says</h3>
<img alt="" src="/questnet/wiring_simon.png" height="1404" width="1053">
<br>
<a href="code_simon.ino">code_simon.ino</a>
<br>
<h3>
  <a class="mozTocH3" name="mozTocId228547"></a>Radio Module Communication
</h3>
<img alt="" src="/questnet/wiring_rf.png" height="981" width="1389">
<br>
<a href="code_rf_chatroom.ino">code_rf_chatroom.ino</a>
<br>
<a href="code_rf_recordedmessage.ino">code_rf_recordedmessage.ino</a>
<br>
<h3>
  <a class="mozTocH3" name="mozTocId627269"></a>Four Note Piano</h3>
<p>Wire your circuit identically to the 'Simon Says' project.
  <br>
</p>
<p>
  <a href="code_piano.ino">code_piano.ino</a>
  <br>
</p>