/* Runtime dump - EKPersistentAlarm
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPersistentAlarm : EKPersistentObject <NSCopying>

@property (copy, nonatomic) NSDate * absoluteDate;
@property (copy, nonatomic) NSTimeZone * timeZone;
@property (nonatomic) double relativeOffset;
@property (readonly, nonatomic) char isAbsolute;
@property (nonatomic) int alarmType;
@property (copy, nonatomic) NSString * externalID;
@property (copy, nonatomic) NSData * externalData;
@property (readonly, nonatomic) NSString * UUID;
@property (copy, nonatomic) EKPersistentLocation * location;
@property (nonatomic) int proximity;
@property (copy, nonatomic) NSDate * acknowledgedDate;
@property (nonatomic) char defaultAlarm;
@property (retain, nonatomic) EKPersistentAlarm * originalAlarm;
@property (copy, nonatomic) NSSet * snoozedAlarms;

+ (EKPersistentAlarm *)defaultPropertiesToLoad;
+ (NSMutableDictionary *)relations;

- (void)setExternalID:(NSString *)arg0;
- (NSString *)externalID;
- (void)setAcknowledgedDate:(NSDate *)arg0;
- (void)setOriginalAlarm:(EKPersistentAlarm *)arg0;
- (char)isAbsolute;
- (void)setAbsoluteDate:(NSDate *)arg0;
- (NSDate *)absoluteDate;
- (int)proximity;
- (EKPersistentAlarm *)originalAlarm;
- (void)setProximity:(int)arg0;
- (NSDate *)acknowledgedDate;
- (char)isDefaultAlarm;
- (void)setDefaultAlarm:(char)arg0;
- (NSSet *)snoozedAlarms;
- (void)setSnoozedAlarms:(NSSet *)arg0;
- (NSData *)externalData;
- (void)setExternalData:(NSData *)arg0;
- (int)alarmType;
- (void)setAlarmType:(int)arg0;
- (void)setRelativeOffset:(double)arg0;
- (double)relativeOffset;
- (EKPersistentAlarm *)init;
- (NSString *)description;
- (void)setTimeZone:(NSTimeZone *)arg0;
- (EKPersistentAlarm *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)UUID;
- (EKPersistentLocation *)location;
- (NSTimeZone *)timeZone;
- (NSString *)owner;
- (char)validate:(id *)arg0;
- (int)entityType;
- (void)setLocation:(EKPersistentLocation *)arg0;
- (void)setOwner:(NSObject *)arg0;

@end
