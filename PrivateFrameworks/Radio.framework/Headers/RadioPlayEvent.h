/* Runtime dump - RadioPlayEvent
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioPlayEvent : NSObject <NSCopying, NSMutableCopying>
{
    NSDate * _datePlayed;
    int _endReason;
    double _endTimeInTrack;
    NSString * _externalIdentifier;
    double _startTimeInTrack;
    long long _storeID;
    NSData * _timedMetadata;
    NSDictionary * _trackInfo;
    int _type;
}

@property (readonly, nonatomic) NSDate * datePlayed;
@property (readonly, nonatomic) int endReason;
@property (readonly, nonatomic) double endTimeInTrack;
@property (readonly, copy, nonatomic) NSString * externalIdentifier;
@property (readonly, nonatomic) double startTimeInTrack;
@property (readonly, nonatomic) long long storeID;
@property (readonly, copy, nonatomic) NSData * timedMetadata;
@property (readonly, copy, nonatomic) NSDictionary * trackInfo;
@property (readonly, nonatomic) int type;

- (NSData *)timedMetadata;
- (long long)storeID;
- (NSString *)externalIdentifier;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (int)type;
- (RadioPlayEvent *)copyWithZone:(struct _NSZone *)arg0;
- (RadioPlayEvent *)initWithType:(int)arg0;
- (RadioPlayEvent *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (NSDate *)datePlayed;
- (NSDictionary *)playDictionary;
- (int)endReason;
- (double)endTimeInTrack;
- (double)startTimeInTrack;
- (NSDictionary *)trackInfo;

@end
