/* Runtime dump - QuietHoursStateController
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface QuietHoursStateController : NSObject
{
    unsigned int _mode;
    NSArray * _overrides;
    unsigned int _privilegeTypes;
    int _recordID;
    NSDateComponents * _fromComponents;
    NSDateComponents * _toComponents;
    BBSettingsGateway * _bbGateway;
    unsigned int _overrideType;
    char _valid;
    char _isEffectiveWhileUnlocked;
    NSArray * _behaviorOverrides;
    int _overrideStatus;
}

@property (nonatomic) char valid;
@property (nonatomic) unsigned int mode;
@property (copy, nonatomic) NSArray * behaviorOverrides;
@property (copy, nonatomic) NSArray * overrides;
@property (nonatomic) char isEffectiveWhileUnlocked;
@property (nonatomic) unsigned int privilegeTypes;
@property (nonatomic) int recordID;
@property (retain, nonatomic) NSDateComponents * fromComponents;
@property (retain, nonatomic) NSDateComponents * toComponents;
@property (readonly, nonatomic) BBSettingsGateway * bbGateway;
@property (nonatomic) unsigned int overrideType;
@property (nonatomic) int overrideStatus;

+ (QuietHoursStateController *)sharedController;
+ (char)isDNDScheduled;
+ (void)setManualEnabled:(char)arg0;
+ (void)setScheduledEnabled:(char)arg0;
+ (void)setScheduledRangeFrom:(NSObject *)arg0 to:(NSObject *)arg1;

- (void)dealloc;
- (QuietHoursStateController *)init;
- (void)setMode:(unsigned int)arg0;
- (unsigned int)mode;
- (char)valid;
- (int)recordID;
- (void)setRecordID:(int)arg0;
- (void)setValid:(char)arg0;
- (BBSettingsGateway *)bbGateway;
- (void)setOverrides:(NSArray *)arg0;
- (NSDateComponents *)fromComponents;
- (NSDateComponents *)toComponents;
- (NSArray *)overrides;
- (void)setOverrideStatus:(int)arg0;
- (void)setFromComponents:(NSDateComponents *)arg0;
- (void)setToComponents:(NSDateComponents *)arg0;
- (unsigned int)privilegeTypes;
- (unsigned int)overrideType;
- (int)overrideStatus;
- (void)setPrivilegeTypes:(unsigned int)arg0;
- (void)resetToFallbackRange;
- (char)repeatedCalls;
- (char)manualModeEnabled;
- (void)setRepeatedCalls:(char)arg0;
- (unsigned int)allowedGroupType;
- (int)userSelectedGroupID;
- (void)setAllowedGroup:(NSObject *)arg0 recordID:(int)arg1 groupName:(NSString *)arg2;
- (NSArray *)behaviorOverrides;
- (void)setBehaviorOverrides:(NSArray *)arg0;
- (char)isEffectiveWhileUnlocked;
- (void)setIsEffectiveWhileUnlocked:(char)arg0;
- (void)setOverrideType:(unsigned int)arg0;

@end
