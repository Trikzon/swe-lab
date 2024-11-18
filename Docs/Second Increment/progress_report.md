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

- Created an inventory system with equipable items and a dynamically generated "backpack" screen.
- Created an inheritance based equipment system including `BP_Equipment`, `BP_InHand`, `BP_Armor`, `BP_RangedWeapon`, and `BP_MeleeWeapon`.
- Used the GAS plugin to change the player's attributes based on equipment equipped.
- Created an equation based damage system shared by both the player and enemies to replace the original placeholder system.
- Implemented the enemy attacking behavior and allow for the player to be killed.
- Created the block mechanic for the player.
- Created the beginnings of our game level.

## 4. Challenges, changes in the plan and scope of the project and things that went wrong during this incrmeent
<!-- Please describe here in detail: 

- anything that was challenging during this increment and how you dealt with the challenges 

- any changes that occurred in the initial plan you had for the project or its scope. Describe the reasons for the changes.  

- anything that went wrong during this increment -->

The main challenge during this increment was scheduling. We were at a point in the project where many systems relied on systems that other group members were working on, and we struggled to schedule time to work together. We resolved this by setting aside time later during the increment to work together and catch up. As a result of this problem our scope had to shrink slightly. We decided that a full level was more appropriate for the third increment, as the software development aspect of the project needed more attention. We also decided that the ranged weapon feature could be delayed, as it requires the also delayed camera and targeting features. The camera proved more problematic than anticipated due to some challenges in the engine of determining the locations of enemies relative to the player, and had to be delayed after realizing the time budgeted for the feature was not sufficient.

## 5. Team Member Contribution for this increment
<!-- Please list each individual member and their contributions to each of the deliverables in this increment (be as detailed as possible). In other words, describe the contribution of each team member to: 

    the progress report, including the sections they wrote or contributed to 

    the requirements and design document, including the sections they wrote or contributed to 

    the implementation and testing document, including the sections they wrote or contributed to 

    the source code (be detailed about which parts of the system each team member contributed to and how) 

    the video or presentation -->
### Chris Swezy
- Wrote the progress report
- Helped implement enemy attacks using the GAS system.
- Designed and implemented the damage equation for the attack ability.
- Implemented equipping items to change gameplay attributes.
- Implemented the block mechanic for the player using the GAS system.

### Jake Younan
- Wrote the shareholder email.
- Implemented Enemy AI including tasks, Behavior Tree, and BlackBoard.
- Modeled, Rigged, and Animated Enemy Mech.
- Made the Level Environment with UE5 Landscape Sculpter.

### Dion Tryban
- Designed the inventory UI using UE5 widgets.
- Store an arbitrary number of equipment items on the player.
- Allow for dragging and dropping equipment in the inventory.
- Hooked equipping items into the gameplay attribute system Chris developed.
- Display the live player model inside of the inventory.

## 6. Plans for the next increment
<!-- If this report if for the first or second increment, describe what are you planning to achieve in the next increment. -->
Next incrment, we are planning to further implement the idea of multiple weapons. We currently have the systems in place to switch items and have multiple placeholder weapons, but we need to create final versions of different weapons, and implement more robust combat mechanics to make them more unique using different animations and collisions. We also plan to add ranged weapons and more enemies including a boss. We plan to add a final version of a level for the player to explore. The inventory system requires more work including different tabs per equipment type, item tooltips, properly displaying the equipped equipment on the player, and picking up equipment from the world dropped by enemies.

## 7. Stakeholder Communication
<!-- Draft an email communication to the stakeholders of the project succinctly communicating progress and current project status. The email should be intended for a non-technical audience that is expertly aware of the domain your application is designed for. You may not “break the fourth wall” or otherwise refer to the course in the email, instead, you should think about how setbacks or issues you encounter may reflect setbacks that happen in the larger context of production software development and explain them as such. The email should not exceed 500 words. -->
Dear Stakeholders,

Our project is progressing with great strides, though we have experienced a few hurdles that have put us a bit behind. The reason for this delay is due to the complicated nature of setting up robjust systesms in UE5. However, setting up these complicated systems now ensures we have a strong platform to continue deverlopment at the appropriate pace. We have Implemented enemies who can attack, do doamge based on an equation, and make choices based on a behavior tree. In addition we have laid out and implemented an inventory system. 

We currently have our player character with basic abilities and a base enemy that we will expand into multiple enemy types. We have the enemy decision tree set up to follow the player and attack them. We will soon give our enemy the ability to patrol the area, and attack the player when they get near. We have an inventory system that can equip items, showing the player in a window with their equiptment. We have a basic level that we plan to place our enemies in and populate with more engaing models. 

Thank you for your support,
Echoes of Babylon Team


## 8. Link to video
https://drive.google.com/file/d/1qMIDp4Ia68QCsUdSQL_ZzpLRSVhHhz4x/view?usp=sharing
