/* Runtime dump - WLKEvent
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface WLKEvent : NSObject <NSSecureCoding>
{
    NSString * _canonicalID;
    NSString * _legID;
    NSString * _externalPlayableID;
    NSString * _channelID;
    NSString * _serviceID;
    NSString * _externalServiceID;
    unsigned int _airingType;
    NSString * _airingTypeString;
    NSDate * _canonicalStartDate;
    NSDate * _startDate;
    NSDate * _endDate;
    NSNumber * _cleanupTime;
    NSDictionary * _dictionary;
}

@property (readonly, nonatomic) NSString * canonicalID;
@property (readonly, nonatomic) NSString * legID;
@property (readonly, nonatomic) NSString * externalPlayableID;
@property (readonly, nonatomic) NSString * channelID;
@property (readonly, nonatomic) NSString * serviceID;
@property (readonly, nonatomic) NSString * externalServiceID;
@property (readonly, nonatomic) unsigned int airingType;
@property (readonly, nonatomic) NSString * airingTypeString;
@property (readonly, nonatomic) NSDate * canonicalStartDate;
@property (readonly, nonatomic) NSDate * startDate;
@property (readonly, nonatomic) NSDate * endDate;
@property (readonly, nonatomic) NSNumber * cleanupTime;
@property (readonly, nonatomic) NSDictionary * dictionary;

+ (char)supportsSecureCoding;

- (NSString *)channelID;
- (NSNumber *)cleanupTime;
- (NSString *)externalServiceID;
- (NSString *)canonicalID;
- (NSString *)externalPlayableID;
- (NSString *)legID;
- (unsigned int)airingType;
- (NSString *)airingTypeString;
- (NSDate *)canonicalStartDate;
- (WLKEvent *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (WLKEvent *)initWithDictionary:(NSDictionary *)arg0;
- (NSDictionary *)dictionary;
- (void).cxx_destruct;
- (NSString *)serviceID;
- (NSDate *)startDate;
- (NSDate *)endDate;

@end
