# Multiplayer Plugin for Unreal Engine (C++)

Welcome to the Multiplayer Plugin for Unreal Engine 5+! This plugin provides a comprehensive framework for implementing multiplayer functionality in your Unreal Engine projects. Whether you're creating a competitive multiplayer game or a cooperative multiplayer experience, this plugin has got you covered.

## Features

- **Client-Server Architecture:** Implement a robust client-server architecture for multiplayer gameplay, allowing multiple players to connect and interact in your game world.

- **Steam Integration:** Utilize the power of Steamworks to enable seamless connectivity between players. Leverage Steam's matchmaking, lobby, and voice chat features to enhance the multiplayer experience.

- **Game Modes and Sessions:** Manage game modes, sessions, and matchmaking to enable players to join specific game sessions and play with others based on their preferences.

- **Player Input and Actions:** Handle player input and actions across the network, ensuring that all players' actions are correctly replicated and applied in a multiplayer environment.

- **Network Events and Notifications:** Implement network events and notifications to provide real-time updates to players about game state changes, such as player joining or leaving the game.

## Getting Started

To use the Multiplayer Plugin in your Unreal Engine project, follow these steps:

1. Clone or download the plugin repository: `git clone https://github.com/il-Grigio/OnlineFPSPlugin.git`.

2. Copy the plugin folder into the `Plugins` directory of your Unreal Engine project.

3. Open your project in Unreal Engine Editor.

4. Enable the Multiplayer Plugin in the Plugins section of the editor.

5. Enable the online subsystem Steam plugin: Edit -> Plugins -> Online Subsystem Steam -> Enabled = true.

6. Restart Unreal

7. Open Config foulder, change DefaultEngine.ini by adding the finished settings in https://docs.unrealengine.com/4.27/en-US/ProgrammingAndScripting/Online/Steam/

8. Open DefaultGame.ini and add:

   ```
   [/Scripts/Engine.GameSession]
   MaxPlayers=100
   ```
   
9. Build solution in Visual Studio

10. Regenerate the project files, remember to delete Binaries, Intermediate, Saved, Plugins/MultiplayerSessions/Binaries and Plugins/MultiplayerSessions/Intermediate first.

11. Open Settings in the Content Browsere and click Show Plugin Content, to see the plugin.

12. Open the level blueprint, and Create Widget of class WBP_Menu in BeginPlay, attach to it the blueprint Menu Setup.

13. Set the lobby level map path in the blueprint (Create one if needed).

14. Add the Third Person Template if not yet added.

15. Open the lobby level, and override the GameMode with ThirdPersonGameMode.

16. Open Steam

17. Build and run your game on different PCs with different Steam accounts and with the same Steam Download Reagion (settings -> Downloads) to test the multiplayer features.

## Steam Integration

The Multiplayer Plugin utilizes the Steamworks API to enable players to connect with each other seamlessly. With Steam integration, you can create lobbies for players to join and communicate with each other and  start a game session.

---
