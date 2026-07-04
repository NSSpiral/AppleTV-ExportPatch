/* Runtime dump - EKPersistentSource
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPersistentSource : EKPersistentObject
{
    EKSourceConstraints * _constraints;
}

@property (nonatomic) NSString * UUID;
@property (nonatomic) int sourceType;
@property (copy, nonatomic) NSString * title;
@property (copy, nonatomic) NSNumber * defaultAlarmOffset;
@property (copy, nonatomic) NSString * externalID;
@property (copy, nonatomic) NSString * externalModificationTag;
@property (nonatomic) char enabled;
@property (nonatomic) char onlyCreatorCanModify;
@property (nonatomic) int preferredEventPrivateValue;
@property (nonatomic) int strictestEventPrivateValue;
@property (readonly, nonatomic) EKSourceConstraints * constraints;

+ (EKPersistentSource *)defaultPropertiesToLoad;
+ (NSMutableDictionary *)relations;
+ (int)_calEventPrivacyLevelToEKPrivacyLevel:(int)arg0;
+ (int)_ekPrivacyLevelToCalEventPrivacyLevel:(int)arg0;

- (void)setExternalID:(NSString *)arg0;
- (NSString *)externalID;
- (char)refresh;
- (NSString *)externalModificationTag;
- (void)setExternalModificationTag:(NSString *)arg0;
- (int)preferredEventPrivateValue;
- (int)strictestEventPrivateValue;
- (char)onlyCreatorCanModify;
- (NSNumber *)defaultAlarmOffset;
- (void)setDefaultAlarmOffset:(NSNumber *)arg0;
- (void)setOnlyCreatorCanModify:(char)arg0;
- (void)setPreferredEventPrivateValue:(int)arg0;
- (void)setStrictestEventPrivateValue:(int)arg0;
- (void)dealloc;
- (EKPersistentSource *)init;
- (void)setTitle:(NSString *)arg0;
- (NSString *)description;
- (NSString *)title;
- (void)reset;
- (void)setEnabled:(char)arg0;
- (char)isEnabled;
- (EKSourceConstraints *)constraints;
- (NSString *)UUID;
- (int)sourceType;
- (void)setSourceType:(int)arg0;
- (int)entityType;
- (void)setUUID:(NSSet *)arg0;

@end
