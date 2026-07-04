/* Runtime dump - MFSoundController
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFSoundController : NSObject

+ (void)playSentMailSound;
+ (void)_playAlertWithType:(int)arg0 accountIdentifier:(NSString *)arg1;
+ (void)_playNewMailSoundForAccount:(NSObject *)arg0;
+ (void)_playNewMailSoundForSubscribedConversation;
+ (void)_playNewMailSoundForVIP;
+ (void)playNewMailSoundStyle:(unsigned int)arg0 forAccount:(NSObject *)arg1;

@end
