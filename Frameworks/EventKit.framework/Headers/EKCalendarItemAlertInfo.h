/* Runtime dump - EKCalendarItemAlertInfo
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKCalendarItemAlertInfo : NSObject <NSCopying>
{
    char _allDay;
    char _tentative;
    char _acknowledged;
    char _isOffsetFromTravelTimeStart;
    char _hasGeoLocationCoordinates;
    char _hasOrganizerThatIsNotCurrentUser;
    NSString * _publisherBulletinID;
    NSString * _title;
    NSString * _location;
    NSDate * _eventDate;
    NSDate * _endDate;
    NSTimeZone * _eventTimeZone;
    NSURL * _action;
    NSURL * _entityID;
    int _proximity;
    NSString * _externalID;
    NSString * _dismissalID;
    NSString * _alarmID;
    NSString * _startLocationRouting;
    NSString * _organizerEmailAddress;
    <EKTravelAdvice> * _latestTravelAdvice;
    NSDate * _lastFireTimeOfAlertOffsetFromTravelTime;
    NSDate * _firstDateAlertedForTravelAdvice;
    struct ? _geoLocationCoordinates;
}

@property (readonly, nonatomic) NSString * recordID;
@property (readonly, nonatomic) NSString * publisherBulletinID;
@property (readonly, nonatomic) NSString * title;
@property (readonly, nonatomic) NSString * location;
@property (readonly, nonatomic) NSDate * eventDate;
@property (readonly, nonatomic) NSDate * endDate;
@property (readonly, nonatomic) NSTimeZone * eventTimeZone;
@property (readonly, nonatomic) NSURL * action;
@property (readonly, nonatomic) NSURL * entityID;
@property (readonly, nonatomic) char allDay;
@property (readonly, nonatomic) char tentative;
@property (readonly, nonatomic) int proximity;
@property (readonly, nonatomic) NSString * externalID;
@property (readonly, nonatomic) char acknowledged;
@property (readonly, nonatomic) NSString * dismissalID;
@property (readonly, nonatomic) NSString * alarmID;
@property (readonly, nonatomic) char isOffsetFromTravelTimeStart;
@property (nonatomic) char hasGeoLocationCoordinates;
@property (nonatomic) struct ? geoLocationCoordinates;
@property (retain, nonatomic) NSString * startLocationRouting;
@property (nonatomic) char hasOrganizerThatIsNotCurrentUser;
@property (retain, nonatomic) NSString * organizerEmailAddress;
@property (retain, nonatomic) <EKTravelAdvice> * latestTravelAdvice;
@property (retain, nonatomic) NSDate * lastFireTimeOfAlertOffsetFromTravelTime;
@property (retain, nonatomic) NSDate * firstDateAlertedForTravelAdvice;

- (NSURL *)entityID;
- (NSString *)externalID;
- (char)acknowledged;
- (int)proximity;
- (NSString *)alarmID;
- (EKCalendarItemAlertInfo *)initWithTitle:(NSString *)arg0 location:(NSString *)arg1 date:(NSDate *)arg2 endDate:(NSDate *)arg3 timeZone:(NSTimeZone *)arg4 allDay:(char)arg5 tentative:(char)arg6 publisherBulletinID:(NSString *)arg7 entityID:(NSURL *)arg8 action:(NSURL *)arg9 proximity:(int)arg10 externalID:(NSString *)arg11 acknowledged:(char)arg12 dismissalID:(NSString *)arg13 alarmID:(NSString *)arg14 isOffsetFromTravelTimeStart:(char)arg15;
- (void)setHasGeoLocationCoordinates:(char)arg0;
- (void)setGeoLocationCoordinates:(struct ?)arg0;
- (void)setHasOrganizerThatIsNotCurrentUser:(char)arg0;
- (void)setOrganizerEmailAddress:(NSString *)arg0;
- (void)setStartLocationRouting:(NSString *)arg0;
- (NSTimeZone *)eventTimeZone;
- (NSString *)publisherBulletinID;
- (char)tentative;
- (NSString *)dismissalID;
- (char)isOffsetFromTravelTimeStart;
- (char)hasGeoLocationCoordinates;
- (struct ?)geoLocationCoordinates;
- (NSString *)startLocationRouting;
- (char)hasOrganizerThatIsNotCurrentUser;
- (NSString *)organizerEmailAddress;
- (<EKTravelAdvice> *)latestTravelAdvice;
- (void)setLatestTravelAdvice:(<EKTravelAdvice> *)arg0;
- (NSDate *)lastFireTimeOfAlertOffsetFromTravelTime;
- (void)setLastFireTimeOfAlertOffsetFromTravelTime:(NSDate *)arg0;
- (NSDate *)firstDateAlertedForTravelAdvice;
- (void)setFirstDateAlertedForTravelAdvice:(NSDate *)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSURL *)action;
- (NSString *)title;
- (EKCalendarItemAlertInfo *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)location;
- (NSString *)recordID;
- (NSDate *)eventDate;
- (char)allDay;
- (NSDate *)endDate;

@end
