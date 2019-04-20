# Utility Mod

You can download a compiled modloader and mod version in the release tab.

## Installation

1. Put the xinput dll in path\to\satisfactory\FactoryGame\Binaries\Win64
2. Create a folder named 'mods'
3. Put the UtilityMod dll into the mods folder
4. Start the game

This mod is under development!

## Commands

**CC: Compatible as client in multiplayer**  
**SC: Semi-compatible as client in multiplayer**  
**NC: Not compatible as client in multiplayer**  
**HC: Host must activate it**  
**TT: Toggleable command**  

#### /help  (CC)
It shows a list of commands.  

#### /fly  (CC TT)
It will give you the ability to fly.  

#### /flyspeed (CC)
Sets the fly speed.  
The default speed is 1.   

#### /god  (NC TT)
You will take no more damage.  

#### /settimedilation <dilation>  (SC)
It speeds up/slows down everything (movement, factory, etc.)  
The default dilation is 1.  
Note: A dilation over 10 is not recommended

#### /creative  (CC TT)
You can build what you want without having to collect resources.  
Including unlimited item/equipment crafting.  

#### /creativepower  (HC TT)
Every machine will have power.  

#### /unlockall  (NC)
It unlocks all schematics.  
You cannot undo it!  

#### /togglebuildrestriction  (HC TT)
It toggles the build restriction.  
For example: cost, terrain collision, building collision, valid shape  

#### /noclip  (CC TT)
Player collision checks are ignored.  

#### /setdismantledelay <delay>  (CC)
It sets the dismantle delay.  
The default delay is 0.75.  

#### /time [set/add] [day/night/minutes]  (SC)
It changes/displays time.  

##### /time  (CC)
It sends the current time in chat with the `hh:mm` format.  

##### /time set <day/night/minutes>  (NC)
It sets the time to the specified parameter.  
Day is 0 o'clock a.m. and night is 0 o'clock p.m.  

##### /time add <minutes>  (NC)
Adds minutes to the current time.  

#### /locktime  (NC TT)
Locks the current time. (only the sky)  

#### /heal  (NC)
It heals you to maximum health.  

#### /resizeinv <size>  (NC)
It resizes your inventory.  

#### /clearinv  (CC)
It empties your inventory.  

### WIP

#### /give <itemname> <amount>  (NC)
Adds the specified item to your inventory.
Note: append `_C` to the itemname e.g. IronRod_C

## Credits

#### GFX Design
  * Diesel Dieter (snatchpix.com)