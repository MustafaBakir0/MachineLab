
# Journal

### 21/01/2026

I just enrolled in the class. I had to miss the first lecture because I enrolled after the first lecture took place. 

### 01/02/2026

<img width="300" height="400" alt="image" src="https://github.com/user-attachments/assets/f492f3ed-07c9-4c28-a8b3-053931a3cfdf" />

I personally hate resistors, so I used an internal pull up resistor to avoid using phyiscal ones. I didn't run into many issues but one that stood out was potnetiometer giving weird and inconsistent values making the servo go crazy. I experimented with another servo and another potentiometer and even different wirings, but the problem was i had the grn and 5v wires inverted apparently. I also utilized the serial monitor to basically verify and debug all my inputs and outputs. It helped with reading inputs from the button, reading inputs from the potentiometer, and seeing how the potentiometer values are mapped to the servo values.

https://github.com/MustafaBakir0/MachineLab/blob/main/servowithbutton..ino
https://github.com/MustafaBakir0/MachineLab/blob/main/servowithpot.ino



## Homework 3

Here's my moodboard
<img width="300" height="400" alt"MINECRAFT" src="https://github.com/user-attachments/assets/6d8aeba7-aea3-40db-b6d1-8d345ac1f6e5" />

<img width="300" height="400" alt="New Project" src="https://github.com/user-attachments/assets/cadb676a-a868-4293-a12e-4fdb23d5fce3" />

my idea for the project here is to have mobs like creepers and zombies wandering around. they could be hung with strings and a dc or stepper motor on top that moves them around. we can also add a villager behind the zombie to make it look like th villager is chasing the zombie. I also can attacha  pickacke to a servo motor. the pickaxe can be 3d printed and assembeled. it acn be attached to the servo from the middle to make it rotate. One of the machines from the last project has something similar on top with mtoors and metal bars connecting the motors to make things move around. my biggest worry hoenstly is fabrication because i am not very good at fabrication. but the good thing about choosnig minecraft is that everything is blocky so 3d desgining and printing the objects shouldnt be as hard and shouldnt require a lot of percision since everything is mostly blocks. even circles are made out of tiny blocks. The thing i can't think of though is music, like we can have minecraft music but it doesn't stand out. I want something that reaaaally stands out.

## feedback on last class project
<img width="300" height="400" alt="image" src="https://github.com/user-attachments/assets/7e103ba1-3574-4874-a859-44af5d6be237" />


For the first project from the left, it was the sea and pirate ship project. I don't like that there are two buttons and I personally would have liked to see consistency accross the project such that all of them have one button, this one kind of ruined that flow.

The screw that holds the ship to the giant servo that moves it came off, and the ship stopped rotating because of that. To avoid this issue, i suggesting in class that the screws should have split washers on both sides to make sure they stay in place better. What i love about this project is the clever way it moves the waves. each wave is connected to a servo with chains on one end and a spring on the other end to create an effect that simulates waves going back and fourth, this was really really clever and I love it. I wish the project had more going on though, like it was a little bit underwhelming. But I liked the mechanism that uses strings to open and close shells, I took a note of that and I want to implement somehting similar in my project. Overall, I want to learn how to move things with servos and strings because that seems like such a good skill to have, to I will definitely start learning that.

<img width="300" height="400" alt="image" src="https://github.com/user-attachments/assets/c17aba42-5a3b-4af3-89ab-c2710ca9da7b" />


for the second project, the one with the horses, a lot of things were broken. Their only thing to show was the horses and the rotating base, and the base was not rotating so that's half of the project not working. The horses were working though, they were going up and down and honestly I really like how most of the wiring and all the motors are hidden on the top. I like when wiring is hidden. But as we can see that's a nightmare to debug if sealed, so points taken off for that, but still rewarded for hiding things haha.



The third project, the candy shop, I love the music. I would really like to know why one of the bunnies broke but I don't think it was a design issue. overall this project has the best fabrication, its really eye catching and really really well put together. One thing I like is their clever use of neopixels and using their sign as a diffuuser because neopixel lght can be very very very bright. I also like how they used the same wired for the first and the second sign, in contrast to the next project that we will cover in a bit


<img width="300" height="400" alt"image" src="https://github.com/user-attachments/assets/403c5ca9-bc04-48b8-8881-122103e8131e" />

For the fourth project, the gluinng was bad in my opinion, a lot of things were unglued. But i really love the clouds, my biggest issue about this project is using a blllion wires for the neopixels, and the wires are all out and as a multimedia designer this really maeks me uncomfortable. each cloud had its own pin and its own 5 volts and ground wires, i really spend 2 days trying to figure out why that was needed and I still cant find the answer. I unfortuntely dont have a picture for the wires but u can zoom in on the picture and see.


For the last project, MISSED OPPORTUNITY. they really could have made their neopixels in the fireworks flash, but they stay as a constant color.also the ferris where doesn't rotate anymore but I love the project honestly. I saw in one of the ferris wheel cabins a couple kissing and thats a cute detail to add. overall I like this project but they also had really bad gluing.

## Homework 4
<img width="300" height="400" alt="image" src="https://github.com/user-attachments/assets/7ce204e4-60ed-4cd7-b20d-68597215acc6" />

The first mechanism is two conveyer strings attached to two wheeels that spin using motors. Two strings come out of those to create an effect of a zombie chasing a villager and they follow the path of the wheels.

The second is a simple rotating pickaxe mounted on a servo motor.

The third is a pulley attached to a motor that opens and shuts a trapdoor. I want to have this because I want to create layers. the first layer is the overworld. the second is a cave. and the third is the underworld.



## Homework 5 - V8 Engine Mechanism


<img width="300" height="400" alt="image" src="https://github.com/user-attachments/assets/2f595460-1488-45b3-8d16-2dbc04d12793" />


We finally started working on our first mechanism for the need for speed project. We 3D printed a V8 cylinder engine, and honestly it took us a few tries to get it right.
Our initial print didn't work because we messed around with the scale a little bit. The proportions were off and the pistons didn't fit into the cylinders properly at all. We went back, adjusted the scale, and reprinted everything. The last print actually worked and we were really happy with how it came out. It's funny because the fix was so simple but we spent a while just staring at the first failed print trying to figure out what went wrong before we realized it was just the sizing.
The engine has a full crank and shaft system with piston heads that move up and down to mimic how a real engine looks when it's running. Seeing all eight pistons fire in sequence is so satisfying, it genuinely looks like a real engine. We connected the pistons to the crankshaft and the whole system moves together, which is the part we were most unsure about going into this. We weren't sure if the tolerances would be tight enough for everything to actually mesh and move the way it should, but it did.

Fabrication was our biggest worry going into this project and this was honestly a good confidence boost. If we can get a V8 engine working on the first week of building, the rest should be manageable. We're excited to keep going.

 im glad i changed my project idea and going for need for speed instead. 
The V8 engine we printed fits perfectly into this new direction. In Need for Speed the whole aesthetic is fast cars, neon lights, garages, and racing culture, and our engine mechanism already looks the part. We're thinking about building around that, like having the engine as a centerpiece with other elements around it that sell the Need for Speed world.
We're still early in figuring out what the full project looks like but the direction feels a lot more exciting. The Minecraft idea was fun on paper but the fabrication was going to be tricky and the theme was honestly a little all over the place. Need for Speed gives us a cleaner visual language to work with, everything is cars and speed and that's it. It's focused.
We're going to start thinking about what other mechanisms make sense for this theme. A rotating car, tire elements, maybe neon lighting with neopixels to sell the nighttime garage vibe. The music situation that was worrying us with Minecraft is also solved because Need for Speed has iconic soundtracks that would really really stand out and set the mood immediately. We're genuinely more excited about this direction and we think it's going to come together better than the original idea.



## Midterm progress

We decided to make a V8 or a V4 engine and put it inside of a half-car with the hood open. the car would be in a garage so it wouldn't show that it's only half a car. I am very excited for the fabrication of the car because we will use neopixels with diffusers and I love working with neopixels as I am quite experienced with them having worked with strips and neopixel matrices before. The idea of the whole project is to have the garage in the bakcground with th car inside of it and a small round track in front of the car with half of the road rotating so we can stick mini hot-wheel like cars on it so they look like they are racing. we also want to have another car parked in next to the track which will be a bigger car and we will create a mechanism using two wheels and a pulley inside the car to make the tires appear moving.
<img width="300" height="400" alt="image" src="https://github.com/user-attachments/assets/2c22818c-9fd4-4ad6-8d7d-437bfab30975" />


We tried starting with the garage by making a prototype by trying to saw some plywood but honestly that took ages and we stopped mid way. We decided using a laser cutter is easier and we waited for the nexxt day to do that because we had to book the cutter 1 hour in advance and honestly this whole thing with connect2 having to book things 1 hour in advance is just annoying and doesn't make sense but oh well thats life.
![WhatsApp Image 2026-02-24 at 1 00 42 AM (1)](https://github.com/user-attachments/assets/27c46d0c-1cdf-4326-9243-514a5c79b431)




# Transition to online instruction

## 07/04/2026
I had my first individual meeting with professor michael on the 3rd of april. During this meeting, we explored options to move forward with projects for this class. We talked about available resources in Abu Dhabi and found Make which is near in the port area, relatively close to my house. I also epxressed interest in working with robotics stuff which is likely what I will be doing.

Make Abu Dhabi has basically almost every machine I could need and a variety of scrap material I could use for prototying which are also free from my understanding. the membership fee is 300 Dh a month for students which is really good for our budget. I will need to complete basic assessments to use the equiptment and machines like soldering but the assessments are free and they also provide paid workshops if I need something like a CNC machine for example.

My next steps will be settling on a project which I will reserach a little bit to find something interesting enough for both me and the professor to work on.

## Project proposal
This project is inspired both by the giant robotic found in professor michaels office that drags itself on the ground to move and also this youtube video
[https://www.youtube.com/shorts/fipPXjG9ERs](https://www.youtube.com/shorts/fipPXjG9ERs)

The approach I will take for this is to prototype each joint of the robotic arm first with cardboard. The approach I am thinking of is working on joints in a stack / LIFO manner (this is the first analogy that came to my head).

for example: 
Base servo -> code
then
Servo joint into carboard -> code -> calibrate values
then
Servo joint into carboard -> code -> calibrate values
so on until I create the movement I want.

then I will attach an arduino or a piece of cardboard and might need a shield for the servos. I will then insert a wooden stick through the piece of cardboard and stick wheels to it and make sure everything is sturdy and try to move it with hand. then I will glue a piece of wood to the cardboard piece and drill holes for the to screw the servos on the wooden base then I will test the movements all together.

Thats it for the prototype, I plan on enhancing the aesthetics later but now I want to focus on the mechanism, then upgrade the materials, then comes the aesthetics.




### resources

[https://www.amazon.ae/EKIND-Universal-Furniture-Appliance-Lightweight/dp/B0FVF9V6BT/ref=sr_1_9?crid=2MHIPTLQ1ZIO4&dib=eyJ2IjoiMSJ9.wEyNHf_559TI6jH3C0N5pyGPt_zclg1cGaPXC_EY3jB2s7XmdtcearGE-6ICZLggP4gYvGf-AVS04vHA75AFlF9lamN-LnAnZSIjNfoj1OQFVf6ILs8V8-UcnvhI_2H_BzVzDCx7kACEdfbr_CMjXFp7SIhIMe96kmsfBh8Wq6geO1Qr4JVMErPwQPoS16gV2XEL8kN5QTWLUx8aEZdKFdRkKF52E9xbZjuuYl_B95ZMUI6LkjU2NMppi9UwcaDsqd044MgPjyUXBt9aMpXXxM1SKixWnXA3B1aire6k0WE.1UXayq3ZtVFCvupcDtvtRmZpk4v2OKLX4olLYjsFUzQ&dib_tag=se&keywords=small+caster+wheels&qid=1775843012&sprefix=small+caster+wheels%2Caps%2C232&sr=8-9](url)

[https://www.amazon.ae/gp/bestsellers/toys/12123482031/ref=pd_zg_hrsr_toys](url)


## 16/04/2026

I ordered the parts that I need and I will be documenting my journey 


[I also found this awesome mdoel that I probably will be using for this project]([url](https://cults3d.com/en/3d-model/gadget/grippy-bot))
<img width="1233" height="807" alt="image" src="https://github.com/user-attachments/assets/0b1c3fc7-e564-4a0d-816a-6f61c031af27" />

I will utilize the makerspace's 3d printer to print this mdoel

## 21/04/2026

I went to campus and got the parts that I am going to need which are:
- A handful of servos
- a breadboard
- Zip ties
- some servo horns

And I orderd cardboard, wires, and some other tools to help me with the prototyping like scissors and a screwdriver.

I started with prototyping but the problem is I got high torque servos instead of microservos which could be a mistake because those servos are actually heavier than I excpectec. The cardboard I have is also literally too heavy and too light at the same time, I am still waiting on my shipment for the more reinforced cardboard because the oner I have right now is bending a lot.

I found a temporary fix for the bending. I started attaching something stiff and straight along the cardboard pieces to keep them upright, kind of like how people stake metal rods next to young saplings to make them grow straight. I used pen caps for this. It is a janky solution but it is working for now and it lets me keep moving until the better cardboard shows up.



<img width="300" height="400" alt="image" src="https://github.com/user-attachments/assets/1d23c1fd-3023-4922-9515-09ec556c3302" />


## 22/04/2026

So I bought a subscription to the makerspace and now I have access to wood and more tools that I can utilize for this project. 
I was looking for some wood and didn't really have my expectations up just so I don't tunnel vision on something that I may not have and look here what I found. 

<img width="300" height="400" alt="image" src="https://github.com/user-attachments/assets/5ecc47f5-3369-4986-9e97-02e1bc8618ff" />

So I immediately got the idea to cut some pieces and use them instead of what my peers suggested which is popsicle sticks. Which I still think would work brilliantly I just am more comfortable with working with this approach right now. I am also gonna 3d print the gripper and see how that's going to work for now.

Here's an image of my workspace with the wood cut
<img width="300" height="400" alt="image" src="https://github.com/user-attachments/assets/ac3feef6-8231-408f-ab2c-e99427611f5f" />

and I want to have more joins so I cam gonna segment one of the pieces more and cut it in half
<img width="300" height="400" alt="image" src="https://github.com/user-attachments/assets/7b717ef7-51b0-4dd5-bde1-d2dc7a62c1b7" />


