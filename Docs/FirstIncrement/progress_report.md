# Progress Report
- Increment 1
- Group #30

## 1. Team Members
- Dion Tryban (dmt22c)
- Jake Younan (jjy22)
- Chris Swezy (cls20f)

## 2. Project Title and Description
Echoes of Babylon

Echoes of Babylon is a mech action game inspired by the souls-like genre and 3D beat-em ups. Our final product will be a single level demo with a fleshed out combat system with multiple enemy types.

## 3. Accomplishments and overall project status during this increment
<!-- Describe in detail what was accomplished during this increment and where your project stands overall compared to the initial scope and functionality proposed. -->

- Set up a working UE5 project with C++ on all of our computers.
- Researched UE5 Gameplay Ability System (GAS) Plugin.
- Researched Enemy AI in UE5.
- Gameplay Ability System (GAS) foundations completed.
    - Created an attribute set and linked it to the player.
    - Created an enemy that can move and follow the player.
- Created a model for the player.
- Created animations for the player and implemented them into the engine.
    - Run, walk, jump, attack, and block animations
    - Created animation blueprint, state machine, and animation blendspace in UE5.
- Created a Input Mapping Context with our input for keyboard/mouse and gamepad actions.

## 4. Challenges, changes in the plan and scope of the project and things that went wrong during this incrmeent
<!-- Please describe here in detail: 

- anything that was challenging during this increment and how you dealt with the challenges 

- any changes that occurred in the initial plan you had for the project or its scope. Describe the reasons for the changes.  

- anything that went wrong during this increment -->

The primary challenge of this increment was learning Unreal, as it is a software that is mostly unfamilar to all of our members. We had to move slower than anticipated in order to thoroughly read through documentation, follow tutorials, and ensure that we were properly implementing concepts to avoid future technical debt.

Our scope had to be narrowed to compensate for this learning time. We decided that the equipment system was lower priority than we initially thought, so we decided to design it in increment 1 and implement it in increment 2. The basics of the combat system also got delayed until increment 2 because we had to make a change in our architecture to implement Unreal's Gameplay Ability System, which proved to be a bottleneck in the short term but will pay off in the long term, as it is the more professional and robust way to implement many of the features we are planning on.

## 5. Team Member Contribution for this increment
<!-- Please list each individual member and their contributions to each of the deliverables in this increment (be as detailed as possible). In other words, describe the contribution of each team member to: 

    the progress report, including the sections they wrote or contributed to 

    the requirements and design document, including the sections they wrote or contributed to 

    the implementation and testing document, including the sections they wrote or contributed to 

    the source code (be detailed about which parts of the system each team member contributed to and how) 

    the video or presentation -->
### Chris Swezy
- Wrote the description, challenges, plans, and stakeholder communications sections of the project report.
- Wrote the design document with input from the rest of the group on wording and design decisions.
- Created the basic enemy class and implemented behavior to allow the enemy to follow the player in the level. Also implemented the GAS system in C++, and connected the attributes set to the player.

### Jake Younan
- Wrote the IT Document
- Contributed to the UML diagrams in the RD document.
- Contributed to the Game Design Document
- Developed the MoodBoard in photoshop and Pinterest
- Modeled the Player in Blender, Textured the player in Substance Painter, and Animated the player using Mixamo
- Created the Animation BluePrint, Animation State Machine, and Animation Blend Space

### Dion Tryban
- Wrote the accomplishments section of the progress report.
- Created the class diagram and wrote the operating environment and assumptions and dependencies in the RD document.
- Contributed to the Game Design Document.
- Detached input handling from C++ and remade it in Blueprints to allow for quicker prototyping.
- Researched, but did not implement, the Gameplay Ability System.

## 6. Plans for the next increment
<!-- If this report if for the first or second increment, describe what are you planning to achieve in the next increment. -->
Next increment, we are planning to finish implementing our basic combat system and equipment system before expanding those systems by adding multiple types of weapons, including ranged weapons, other types of equpment like armor, and our inventory system. We're also planning on adding multiple enemy types.

We believe that development should move much faster because we now have the foundation for many of these systems in place and a better understanding of our tools, the time required to design and implement features should be reduced.

## 7. Stakeholder Communication
<!-- Draft an email communication to the stakeholders of the project succinctly communicating progress and current project status. The email should be intended for a non-technical audience that is expertly aware of the domain your application is designed for. You may not “break the fourth wall” or otherwise refer to the course in the email, instead, you should think about how setbacks or issues you encounter may reflect setbacks that happen in the larger context of production software development and explain them as such. The email should not exceed 500 words. -->
Dear Stakeholders,

Our project is progressing at a reasonable rate, although we are experiencing slight delays. Training our team to use the Unreal Engine has used more of the initial time for our first deadline than we anticipated, but that time will be well spent to ensure a quality project and speedy development later on. We have designed the core systems of game, and laid out a thorough, robust architecture for the software design that will allow us to move quickly as we progress out of training.

Currently, we have our player character with basic abilities and a base enemy that we can easily expand into multiple enemy types. We are about to be finished implementing our system for weapons and attacking after overcoming a delay with Unreal's Gameplay Ability System.

Thank you for your support,
Echoes of Babylon Team

## 8. Link to video
https://drive.google.com/file/d/1ezQLHgHYfX2x5avFp5rOoFI636dMFAnt/view?usp=sharing
