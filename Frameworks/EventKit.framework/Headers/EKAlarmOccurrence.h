/* Runtime dump - EKAlarmOccurrence
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKAlarmOccurrence : NSObject
{
    EKObjectID * _alarmID;
    EKObjectID * _ownerID;
    NSDate * _ownerDate;
    NSTimeZone * _ownerTimeZone;
    NSURL * _ownerURI;
    NSDate * _fireDate;
    NSString * _externalID;
    NSDate * _acknowledgedDate;
}

@property (readonly, nonatomic) EKObjectID * alarmID;
@property (readonly, nonatomic) EKObjectID * ownerID;
@property (readonly, nonatomic) NSDate * ownerDate;
@property (readonly, nonatomic) NSTimeZone * ownerTimeZone;
@property (readonly, nonatomic) NSURL * ownerURI;
@property (readonly, nonatomic) NSDate * fireDate;
@property (readonly, nonatomic) NSString * externalID;
@property (readonly, nonatomic) NSDate * acknowledgedDate;

+ (EKAlarmOccurrence *)alarmOccurrenceWithAlarmID:(EKObjectID *)arg0 ownerID:(EKObjectID *)arg1 ownerDate:(NSDate *)arg2 ownerTimeZone:(NSTimeZone *)arg3 ownerURI:(NSURL *)arg4 fireDate:(NSDate *)arg5 externalID:(NSString *)arg6 acknowledgedDate:(NSDate *)arg7;

- (NSString *)externalID;
- (NSDate *)acknowledgedDate;
- (EKObjectID *)ownerID;
- (NSDate *)ownerDate;
- (NSURL *)ownerURI;
- (NSTimeZone *)ownerTimeZone;
- (EKObjectID *)alarmID;
- (EKAlarmOccurrence *)initWithAlarmID:(EKObjectID *)arg0 ownerID:(EKObjectID *)arg1 ownerDate:(NSDate *)arg2 ownerTimeZone:(NSTimeZone *)arg3 ownerURI:(NSURL *)arg4 fireDate:(NSDate *)arg5 externalID:(NSString *)arg6 acknowledgedDate:(NSDate *)arg7;
- (void)dealloc;
- (EKAlarmOccurrence *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (NSDate *)fireDate;
- (EKAlarmOccurrence *)initWithDictionaryRepresentation:(NSDictionary *)arg0;

@end
