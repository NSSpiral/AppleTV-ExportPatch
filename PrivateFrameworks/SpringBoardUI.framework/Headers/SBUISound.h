/* Runtime dump - SBUISound
 * Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBUISound : NSObject
{
    int _soundType;
    unsigned long _systemSoundID;
    unsigned long _resolvedSystemSoundID;
    unsigned int _soundBehavior;
    NSString * _ringtoneName;
    AVItem * _avItem;
    NSDictionary * _vibrationPattern;
    char _repeats;
    double _maxDuration;
    NSDictionary * _controllerAttributes;
    int _alertType;
    NSString * _accountIdentifier;
    NSString * _toneIdentifier;
    NSString * _vibrationIdentifier;
    NSString * _resolvedToneIdentifier;
    id _completionBlock;
    NSString * _songPath;
}

@property (nonatomic) int soundType;
@property (nonatomic) unsigned long systemSoundID;
@property (nonatomic) unsigned int soundBehavior;
@property (retain, nonatomic) NSString * ringtoneName;
@property (retain, nonatomic) AVItem * avItem;
@property (retain, nonatomic) NSDictionary * vibrationPattern;
@property (nonatomic) char repeats;
@property (nonatomic) double maxDuration;
@property (retain, nonatomic) NSDictionary * controllerAttributes;
@property (nonatomic) int alertType;
@property (copy, nonatomic) NSString * accountIdentifier;
@property (copy, nonatomic) NSString * toneIdentifier;
@property (copy, nonatomic) NSString * vibrationIdentifier;
@property (copy, nonatomic) NSString * songPath;
@property (nonatomic) unsigned long _resolvedSystemSoundID;

- (NSDictionary *)vibrationPattern;
- (void)setVibrationPattern:(NSDictionary *)arg0;
- (double)maxDuration;
- (void)setMaxDuration:(double)arg0;
- (void)setAccountIdentifier:(NSString *)arg0;
- (void)dealloc;
- (NSString *)description;
- (id /* block */)_completionBlock;
- (void)stop;
- (void)setSoundType:(int)arg0;
- (int)soundType;
- (SBUISound *)initWithSystemSoundID:(unsigned long)arg0 behavior:(unsigned int)arg1 vibrationPattern:(NSDictionary *)arg2;
- (SBUISound *)initWithSystemSoundPath:(NSString *)arg0 behavior:(unsigned int)arg1 vibrationPattern:(NSDictionary *)arg2;
- (void)setSongPath:(NSString *)arg0;
- (void)setSystemSoundID:(unsigned long)arg0;
- (void)setSoundBehavior:(unsigned int)arg0;
- (void)setRingtoneName:(NSString *)arg0;
- (void)setToneIdentifier:(NSString *)arg0;
- (void)setVibrationIdentifier:(NSString *)arg0;
- (unsigned long)systemSoundID;
- (NSString *)songPath;
- (unsigned int)soundBehavior;
- (NSString *)ringtoneName;
- (char)isRepeating;
- (NSString *)toneIdentifier;
- (NSString *)vibrationIdentifier;
- (AVItem *)avItem;
- (NSString *)accountIdentifier;
- (void)setAlertType:(int)arg0;
- (int)alertType;
- (void)setRepeats:(char)arg0;
- (char)playInEvironments:(int)arg0 completion:(id /* block */)arg1;
- (void)setControllerAttributes:(NSDictionary *)arg0;
- (void)setAvItem:(AVItem *)arg0;
- (NSDictionary *)controllerAttributes;
- (SBUISound *)initWithRingtone:(id)arg0 vibrationPattern:(NSDictionary *)arg1 repeats:(char)arg2 maxDuration:(double)arg3 controllerAttributes:(NSDictionary *)arg4;
- (SBUISound *)initWithAVItem:(NSObject *)arg0 vibrationPattern:(NSDictionary *)arg1 repeats:(char)arg2 maxDuration:(double)arg3 controllerAttributes:(NSDictionary *)arg4;
- (SBUISound *)initWithToneAlert:(int)arg0 accountIdentifier:(NSString *)arg1 toneIdentifier:(NSString *)arg2 vibrationIdentifier:(NSString *)arg3;
- (SBUISound *)initWithSong:(MPSong *)arg0 vibrationPattern:(NSDictionary *)arg1 repeats:(char)arg2 maxDuration:(double)arg3 controllerAttributes:(NSDictionary *)arg4;
- (void)_setCompletionBlock:(id /* block */)arg0;
- (NSString *)_resolvedToneIdentifier;
- (void)_setResolvedToneIdentifier:(NSString *)arg0;
- (unsigned long)_resolvedSystemSoundID;
- (void)_setResolvedSoundID:(unsigned long)arg0;
- (char)isPlaying;

@end
