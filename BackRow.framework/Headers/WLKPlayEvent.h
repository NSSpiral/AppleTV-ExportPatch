/* Runtime dump - WLKPlayEvent
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface WLKPlayEvent : NSObject
{
    char _played;
    NSString * _bundleID;
    NSString * _channelID;
    NSString * _externalPlayableID;
    NSString * _showID;
    NSDate * _occurrenceDate;
    double _elapsedTime;
    double _duration;
}

@property (readonly, copy, nonatomic) NSString * bundleID;
@property (readonly, copy, nonatomic) NSString * channelID;
@property (readonly, copy, nonatomic) NSString * externalPlayableID;
@property (readonly, copy, nonatomic) NSString * showID;
@property (readonly, nonatomic) char played;
@property (readonly, nonatomic) double elapsedTime;
@property (readonly, nonatomic) double duration;
@property (readonly, copy, nonatomic) NSDate * occurrenceDate;

- (NSString *)channelID;
- (NSString *)externalPlayableID;
- (NSString *)showID;
- (NSDate *)occurrenceDate;
- (WLKPlayEvent *)init;
- (NSString *)description;
- (WLKPlayEvent *)initWithDictionary:(NSDictionary *)arg0;
- (double)duration;
- (void).cxx_destruct;
- (double)elapsedTime;
- (NSString *)bundleID;
- (char)isPlayed;

@end
