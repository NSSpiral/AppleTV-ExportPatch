/* Runtime dump - BRSoundHandler
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRSingleton.h>
@interface BRSoundHandler : BRSingleton
{
    char _isSoundPrefEnabled;
    char _soundSuppressed;
    id _soundIDs;
}

+ (void)playSound:(int)arg0;
+ (BRSoundHandler *)singleton;
+ (void)setSingleton:(NSObject *)arg0;
+ (void)reloadSoundPreference;
+ (void)setSoundSuppressed:(char)arg0;

- (void)_playSound:(int)arg0;
- (void)_setSoundSuppressed:(char)arg0;
- (void)_reloadSoundPreference;
- (char)_allowedToPlaySound;
- (unsigned long)_actionIDForAlertSound:(int)arg0;
- (void)dealloc;
- (BRSoundHandler *)init;

@end
