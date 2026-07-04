/* Runtime dump - EKAlarm
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKAlarm : EKObject <NSCopying>
{
    EKObjectToOneRelation * _locationRelation;
}

@property (nonatomic) double relativeOffset;
@property (copy, nonatomic) NSDate * absoluteDate;
@property (copy, nonatomic) EKStructuredLocation * structuredLocation;
@property (nonatomic) int proximity;
@property (readonly) char isAbsolute;
@property (readonly, nonatomic) NSString * UUID;
@property (retain, nonatomic) EKCalendarItem * owner;
@property (copy, nonatomic) NSDate * acknowledgedDate;
@property (readonly, nonatomic) NSString * externalID;
@property (nonatomic) char defaultAlarm;
@property (retain, nonatomic) EKAlarm * originalAlarm;
@property (copy, nonatomic) NSArray * snoozedAlarms;
@property (readonly, nonatomic) char isSnoozedAlarm;
@property (retain, nonatomic) EKObjectToOneRelation * locationRelation;

+ (EKAlarm *)alarmWithRelativeOffset:(double)arg0;
+ (int)_currentAuthorizationStatus;
+ (char)areLocationsAllowedWithAuthorizationStatus:(int)arg0;
+ (char)areLocationsAvailable;
+ (EKAlarm *)alarmWithAbsoluteDate:(NSDate *)arg0;
+ (char)areLocationsAllowed;
+ (char)areLocationsCurrentlyEnabled;
+ (double)defaultGeofencedReminderRadius;

- (NSString *)externalID;
- (NSString *)lazyLoadRelationForKey:(NSString *)arg0;
- (EKStructuredLocation *)structuredLocation;
- (void)setAcknowledgedDate:(NSDate *)arg0;
- (void)setOriginalAlarm:(EKAlarm *)arg0;
- (char)isAbsolute;
- (char)rebase;
- (EKAlarm *)initWithAbsoluteDate:(NSDate *)arg0;
- (EKAlarm *)initWithRelativeOffset:(double)arg0;
- (void)setAbsoluteDate:(NSDate *)arg0;
- (NSDate *)absoluteDate;
- (int)proximity;
- (EKObjectToOneRelation *)_locationRelation;
- (id)_originalAlarmRelation;
- (id)_snoozedAlarmsRelation;
- (EKAlarm *)originalAlarm;
- (void)setStructuredLocation:(EKStructuredLocation *)arg0;
- (void)setProximity:(int)arg0;
- (NSDate *)acknowledgedDate;
- (id)ownerUUID;
- (char)isDefaultAlarm;
- (void)setDefaultAlarm:(char)arg0;
- (NSArray *)snoozedAlarms;
- (void)setSnoozedAlarms:(NSArray *)arg0;
- (void)addSnoozedAlarm:(id)arg0;
- (void)removeSnoozedAlarm:(id)arg0;
- (char)isSnoozedAlarm;
- (EKObjectToOneRelation *)locationRelation;
- (void)setLocationRelation:(EKObjectToOneRelation *)arg0;
- (void)setRelativeOffset:(double)arg0;
- (double)relativeOffset;
- (void)dealloc;
- (EKAlarm *)init;
- (NSString *)description;
- (EKAlarm *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)UUID;
- (EKCalendarItem *)owner;
- (char)validate:(id *)arg0;

@end
