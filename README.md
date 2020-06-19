# AccessBellAppleSDK
IOS SDK for AccessBell video conferencing

The following is a guide on how to set up the sdk in an existing Apple project.

Copy AccessbellMeet.framework and WebRTC.framework into the project directory (preferably in the root directory in a Frameworks folder).

Open the project settings and add these two frameworks to be used by the application. Clean the xcode workspace and add 'import AccessbellMeet'
in the respective files to the respective files in which you want to display your video conference.
