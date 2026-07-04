/* Runtime dump - TLAlert
 * Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLAlert : NSObject
{
    char _shouldOverrideMasterSwitches;
    int _type;
    NSString * _accountIdentifier;
    NSString * _toneIdentifier;
    NSString * _vibrationIdentifier;
    NSObject<OS_dispatch_queue> * _targetQueue;
    id _completionHandler;
    NSTimer * _completionFallbackTimer;
}

@property (nonatomic) int type;
@property (copy, nonatomic) NSString * accountIdentifier;
@property (copy, nonatomic) NSString * toneIdentifier;
@property (copy, nonatomic) NSString * vibrationIdentifier;
@property (copy, nonatomic) id _completionHandler;
@property (nonatomic) NSObject<OS_dispatch_queue> * _targetQueue;
@property (retain, nonatomic) NSTimer * _completionFallbackTimer;
@property (nonatomic) char _shouldOverrideMasterSwitches;

+ (void)_playToneAndVibrationForType:(int)arg0 toneIdentifier:(NSString *)arg1 vibrationIdentifier:(NSString *)arg2 shouldOverrideMasterSwitches:(char)arg3;
+ (void)playToneAndVibrationForType:(int)arg0;
+ (void)playToneAndVibrationForType:(int)arg0 accountIdentifier:(NSString *)arg1;
+ (void)playToneAndVibrationForType:(int)arg0 toneIdentifier:(NSString *)arg1 vibrationIdentifier:(NSString *)arg2;
+ (char)_watchPrefersSalientToneAndVibration;
+ (void)_setWatchPrefersSalientToneAndVibration:(char)arg0;

- (TLAlert *)initWithType:(int)arg0 accountIdentifier:(NSString *)arg1;
- (char)playWithCompletionHandler:(id /* block */)arg0 targetQueue:(/* block */ id)arg1;
- (void)dealloc;
- (NSString *)description;
- (int)type;
- (void)stop;
- (void)_setCompletionHandler:(id /* block */)arg0;
- (TLAlert *)initWithType:(int)arg0;
- (id /* block */)_completionHandler;
- (void)_setType:(int)arg0;
- (NSString *)toneIdentifier;
- (NSString *)vibrationIdentifier;
- (NSString *)accountIdentifier;
- (TLAlert *)initWithType:(int)arg0 toneIdentifier:(NSString *)arg1 vibrationIdentifier:(NSString *)arg2;
- (void)_setShouldOverrideMasterSwitches:(char)arg0;
- (void)_setAccountIdentifier:(NSString *)arg0;
- (void)_setToneIdentifier:(NSString *)arg0;
- (void)_setVibrationIdentifier:(NSString *)arg0;
- (void)_setTargetQueue:(NSObject *)arg0;
- (void)_setCompletionFallbackTimer:(NSObject *)arg0;
- (void)stopWithFadeOutDuration:(double)arg0;
- (void)startPlayingRepeatedly;
- (void)stopPlayingRepeatedlyWithOptions:(unsigned int)arg0 completionHandler:(id /* block */)arg1 targetQueue:(/* block */ id)arg2;
- (char)_shouldOverrideMasterSwitches;
- (NSObject<OS_dispatch_queue> *)_targetQueue;
- (NSTimer *)_completionFallbackTimer;

@end
