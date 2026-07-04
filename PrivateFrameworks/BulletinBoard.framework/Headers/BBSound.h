/* Runtime dump - BBSound
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBSound : NSObject <BBUniquableObject, NSCopying, NSSecureCoding>
{
    int _soundType;
    unsigned long _systemSoundID;
    unsigned int _soundBehavior;
    NSString * _audioCategory;
    NSString * _ringtoneName;
    char _repeats;
    NSDictionary * _vibrationPattern;
    int _alertType;
    NSString * _accountIdentifier;
    NSString * _toneIdentifier;
    NSString * _vibrationIdentifier;
    double _maxDuration;
    NSString * _songPath;
}

@property (nonatomic) int soundType;
@property (nonatomic) unsigned long systemSoundID;
@property (nonatomic) unsigned int soundBehavior;
@property (copy, nonatomic) NSString * ringtoneName;
@property (nonatomic) char repeats;
@property (copy, nonatomic) NSDictionary * vibrationPattern;
@property (copy, nonatomic) NSString * audioCategory;
@property (nonatomic) double maxDuration;
@property (nonatomic) int alertType;
@property (copy, nonatomic) NSString * accountIdentifier;
@property (copy, nonatomic) NSString * toneIdentifier;
@property (copy, nonatomic) NSString * vibrationIdentifier;
@property (copy, nonatomic) NSString * songPath;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)supportsSecureCoding;
+ (BBSound *)_possiblyCachedAlertSoundForInitializedSound:(id)arg0;
+ (void)_removeCachedSound:(id)arg0;
+ (NSObject *)alertSoundWithSystemSoundID:(unsigned long)arg0;
+ (NSString *)alertSoundWithSystemSoundPath:(NSString *)arg0;

- (NSDictionary *)vibrationPattern;
- (void)setVibrationPattern:(NSDictionary *)arg0;
- (double)maxDuration;
- (void)setMaxDuration:(double)arg0;
- (void)setAccountIdentifier:(NSString *)arg0;
- (void)dealloc;
- (BBSound *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (BBSound *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)uniqueIdentifier;
- (void)setSoundType:(int)arg0;
- (int)soundType;
- (BBSound *)initWithSystemSoundID:(unsigned long)arg0 behavior:(unsigned int)arg1;
- (BBSound *)initWithSystemSoundPath:(NSString *)arg0 behavior:(unsigned int)arg1;
- (BBSound *)initWithSystemSoundID:(unsigned long)arg0 behavior:(unsigned int)arg1 vibrationPattern:(NSDictionary *)arg2;
- (BBSound *)initWithSystemSoundID:(unsigned long)arg0 soundPath:(NSString *)arg1 behavior:(unsigned int)arg2 vibrationPattern:(NSDictionary *)arg3;
- (BBSound *)initWithSystemSoundPath:(NSString *)arg0 behavior:(unsigned int)arg1 vibrationPattern:(NSDictionary *)arg2;
- (void)setSongPath:(NSString *)arg0;
- (void)setSystemSoundID:(unsigned long)arg0;
- (void)setSoundBehavior:(unsigned int)arg0;
- (BBSound *)initWithRingtone:(id)arg0 vibrationPattern:(NSDictionary *)arg1 repeats:(char)arg2 audioCategory:(NSString *)arg3;
- (BBSound *)initWithRingtone:(id)arg0 vibrationPattern:(NSDictionary *)arg1 repeats:(char)arg2 audioCategory:(NSString *)arg3 maxDuration:(double)arg4;
- (void)setRingtoneName:(NSString *)arg0;
- (void)setAudioCategory:(NSString *)arg0;
- (BBSound *)initWithToneAlert:(int)arg0 accountIdentifier:(NSString *)arg1;
- (void)setToneIdentifier:(NSString *)arg0;
- (void)setVibrationIdentifier:(NSString *)arg0;
- (BBSound *)initWithSong:(MPSong *)arg0 vibrationPattern:(NSDictionary *)arg1 repeats:(char)arg2 maxDuration:(double)arg3;
- (BBSound *)initWithSong:(MPSong *)arg0 vibrationPattern:(NSDictionary *)arg1 repeats:(char)arg2 audioCategory:(NSString *)arg3 maxDuration:(double)arg4;
- (unsigned long)systemSoundID;
- (NSString *)songPath;
- (unsigned int)soundBehavior;
- (NSString *)ringtoneName;
- (char)isRepeating;
- (NSString *)audioCategory;
- (NSString *)toneIdentifier;
- (NSString *)vibrationIdentifier;
- (BBSound *)initWithRingtone:(id)arg0 vibrationPattern:(NSDictionary *)arg1 repeats:(char)arg2;
- (BBSound *)initWithToneAlert:(int)arg0;
- (BBSound *)initWithToneAlert:(int)arg0 toneIdentifier:(NSString *)arg1 vibrationIdentifier:(NSString *)arg2;
- (BBSound *)initWithSong:(MPSong *)arg0 vibrationPattern:(NSDictionary *)arg1;
- (NSString *)accountIdentifier;
- (void)setAlertType:(int)arg0;
- (int)alertType;
- (void)setRepeats:(char)arg0;

@end
