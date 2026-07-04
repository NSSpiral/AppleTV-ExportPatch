/* Runtime dump - AFBulletin
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFBulletin : NSObject <NSSecureCoding>
{
    char _read;
    char _allDay;
    NSString * _bulletinID;
    NSDate * _date;
    NSDate * _endDate;
    NSString * _message;
    NSString * _modalAlertContentMessage;
    NSDate * _recencyDate;
    NSString * _sectionID;
    NSString * _subtitle;
    NSString * _timeZone;
    NSString * _title;
    NSString * _displayName;
}

@property (nonatomic) char read;
@property (readonly, copy, nonatomic) NSString * bulletinID;
@property (readonly, copy, nonatomic) NSDate * date;
@property (readonly, copy, nonatomic) NSDate * endDate;
@property (readonly, nonatomic) char allDay;
@property (readonly, copy, nonatomic) NSString * message;
@property (readonly, copy, nonatomic) NSString * modalAlertContentMessage;
@property (readonly, copy, nonatomic) NSDate * recencyDate;
@property (readonly, copy, nonatomic) NSString * sectionID;
@property (readonly, copy, nonatomic) NSString * subtitle;
@property (readonly, copy, nonatomic) NSString * timeZone;
@property (readonly, copy, nonatomic) NSString * title;
@property (copy, nonatomic) NSString * displayName;

+ (char)supportsSecureCoding;

- (char)isAllDay;
- (AFBulletin *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)title;
- (NSDate *)date;
- (NSString *)message;
- (NSString *)subtitle;
- (NSString *)timeZone;
- (void).cxx_destruct;
- (NSString *)displayName;
- (NSString *)modalAlertContentMessage;
- (NSString *)bulletinID;
- (NSDate *)recencyDate;
- (void)setBulletin:(BBBulletin *)arg0;
- (void)setDisplayName:(NSString *)arg0;
- (NSString *)sectionID;
- (char)isRead;
- (void)setRead:(char)arg0;
- (NSDate *)endDate;

@end
