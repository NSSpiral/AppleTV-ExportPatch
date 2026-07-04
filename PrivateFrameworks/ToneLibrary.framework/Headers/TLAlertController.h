/* Runtime dump - TLAlertController
 * Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLAlertController : NSObject
{
    TLAccessQueue * _accessQueue;
    NSMutableDictionary * _alertsBySoundIDs;
    TLAlert * _repeatedlyPlayingAlert;
}

@property (readonly, nonatomic) char _hasVibratorCapability;
@property (retain) TLAccessQueue * _accessQueue;
@property (retain, nonatomic) NSMutableDictionary * _alertsBySoundIDs;
@property (retain, nonatomic) TLAlert * _repeatedlyPlayingAlert;

+ (TLAlertController *)sharedAlertController;

- (void)dealloc;
- (TLAlertController *)init;
- (TLAccessQueue *)_accessQueue;
- (void)_setAccessQueue:(NSObject *)arg0;
- (char)_hasVibratorCapability;
- (char)_playAlert:(id)arg0 completionHandler:(id /* block */)arg1 targetQueue:(/* block */ id)arg2;
- (void)_startPlayingAlertRepeatedly:(id)arg0;
- (void)_stopAlert:(id)arg0 withFadeOutDuration:(double)arg1 options:(unsigned int)arg2 completionHandler:(id /* block */)arg3 targetQueue:(/* block */ id)arg4;
- (NSMutableDictionary *)_alertsBySoundIDs;
- (void)_removeSoundID:(unsigned long)arg0 shouldStopSound:(char)arg1 fireCompletionHandler:(char)arg2;
- (void)_setAlertsBySoundIDs:(id)arg0;
- (TLAlert *)_repeatedlyPlayingAlert;
- (void)_stopRepeatedlyPlayingAlert:(id)arg0 withFadeOutDuration:(double)arg1 options:(unsigned int)arg2 completionHandler:(id /* block */)arg3 targetQueue:(/* block */ id)arg4;
- (void)_setRepeatedlyPlayingAlert:(id)arg0;
- (char)_stopAllAlerts;
- (unsigned long)_soundIDForAlert:(id)arg0;
- (void)_didReachTimeoutForSystemSound:(id)arg0;
- (char)stopAllAlerts;
- (void)_systemSoundDidFinishPlaying:(unsigned long)arg0;

@end
