/* Runtime dump - WLKSchedule
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface WLKSchedule : NSObject
{
    NSMutableArray * _mutableEvents;
    NSDictionary * _dictionary;
    NSString * _serviceID;
    NSString * _externalServiceID;
    NSString * _channelID;
    NSDate * _startDate;
    NSDate * _endDate;
    NSNumber * _cleanupTime;
    NSDate * _earliestEventDate;
    NSDate * _latestEventDate;
}

@property (readonly, copy, nonatomic) NSString * serviceID;
@property (readonly, copy, nonatomic) NSString * externalServiceID;
@property (readonly, copy, nonatomic) NSString * channelID;
@property (readonly, copy, nonatomic) NSDate * startDate;
@property (readonly, copy, nonatomic) NSDate * endDate;
@property (readonly, nonatomic) NSNumber * cleanupTime;
@property (readonly, copy, nonatomic) NSDate * earliestEventDate;
@property (readonly, copy, nonatomic) NSDate * latestEventDate;
@property (readonly, copy, nonatomic) NSArray * events;

- (NSString *)channelID;
- (NSDate *)eventForDate:(NSDate *)arg0;
- (NSDate *)adjacentEventsForDate:(NSDate *)arg0 fuzziness:(double)arg1;
- (NSNumber *)cleanupTime;
- (NSString *)externalServiceID;
- (NSDate *)eventAfterDate:(NSDate *)arg0;
- (char)_isDate:(NSDate *)arg0 containedByDate:(NSDate *)arg1 andDate:(NSDate *)arg2;
- (NSDate *)earliestEventDate;
- (NSDate *)latestEventDate;
- (NSArray *)events;
- (void)prune;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (WLKSchedule *)initWithDictionary:(NSDictionary *)arg0;
- (void).cxx_destruct;
- (NSString *)serviceID;
- (NSDate *)startDate;
- (NSDate *)endDate;

@end
