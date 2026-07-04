/* Runtime dump - RadioTrackPlaybackDescriptor
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioTrackPlaybackDescriptor : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    char _current;
    NSDate * _expirationDate;
    double _pauseTime;
    NSDate * _skipDate;
    long long _storeID;
    NSDictionary * _trackInfo;
}

@property (readonly, nonatomic) char current;
@property (readonly, nonatomic) NSDate * expirationDate;
@property (readonly, nonatomic) double pauseTime;
@property (readonly, nonatomic) NSDate * skipDate;
@property (readonly, nonatomic) long long storeID;
@property (readonly, copy, nonatomic) NSDictionary * trackInfo;

+ (char)supportsSecureCoding;

- (RadioTrackPlaybackDescriptor *)initWithTrack:(NSObject *)arg0;
- (long long)storeID;
- (RadioTrackPlaybackDescriptor *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (RadioTrackPlaybackDescriptor *)copyWithZone:(struct _NSZone *)arg0;
- (RadioTrackPlaybackDescriptor *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (char)isCurrent;
- (double)pauseTime;
- (NSDate *)expirationDate;
- (NSDate *)skipDate;
- (NSDictionary *)queueTrackDictionary;
- (NSDictionary *)trackInfo;

@end
