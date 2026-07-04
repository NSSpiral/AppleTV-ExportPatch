/* Runtime dump - TPDialerSoundController
 * Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPDialerSoundController : NSObject
{
    struct __CFSet * _inflightSounds;
    id _soundsActivated;
    unsigned int _incompleteSoundCount;
}

@property unsigned int incompleteSoundCount;

+ (void)_delayedDeactivate;

- (void)dealloc;
- (TPDialerSoundController *)init;
- (void)_stopAllSoundsForcingCallbacks:(char)arg0;
- (void)stopSoundForDialerCharacter:(unsigned int)arg0;
- (void)playSoundForDialerCharacter:(unsigned int)arg0;
- (void)applicationSuspendedNotification:(NSNotification *)arg0;
- (void)applicationResumedNotification:(NSNotification *)arg0;
- (void)setSoundsActivated:(char)arg0;
- (unsigned int)incompleteSoundCount;
- (void)setIncompleteSoundCount:(unsigned int)arg0;
- (void)soundCompletedPlaying:(unsigned long)arg0;

@end
