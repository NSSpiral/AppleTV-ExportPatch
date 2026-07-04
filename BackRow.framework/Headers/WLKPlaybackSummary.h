/* Runtime dump - WLKPlaybackSummary
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface WLKPlaybackSummary : NSObject <NSSecureCoding>
{
    char _isAlwaysLive;
    NSString * _bundleID;
    NSDate * _timestamp;
    NSDate * _currentPlaybackDate;
    NSNumber * _duration;
    NSNumber * _elapsedTime;
    NSNumber * _featureDuration;
    NSNumber * _featureElapsedTime;
    NSString * _accountID;
    NSString * _externalProfileID;
    NSString * _contentID;
    NSString * _channelID;
    NSString * _serviceID;
    int _playbackState;
    NSNumber * _playbackRate;
    int _completionState;
    int _playbackType;
}

@property (readonly, nonatomic) NSString * bundleID;
@property (readonly, nonatomic) NSDate * timestamp;
@property (readonly, nonatomic) NSDate * currentPlaybackDate;
@property (readonly, nonatomic) NSNumber * duration;
@property (readonly, nonatomic) NSNumber * elapsedTime;
@property (readonly, nonatomic) NSNumber * featureDuration;
@property (readonly, nonatomic) NSNumber * featureElapsedTime;
@property (readonly, nonatomic) NSString * accountID;
@property (readonly, nonatomic) NSString * externalProfileID;
@property (readonly, nonatomic) NSString * contentID;
@property (readonly, nonatomic) NSString * channelID;
@property (readonly, nonatomic) NSString * serviceID;
@property (readonly, nonatomic) int playbackState;
@property (readonly, nonatomic) NSNumber * playbackRate;
@property (readonly, nonatomic) int completionState;
@property (readonly, nonatomic) char isAlwaysLive;
@property (readonly, nonatomic) int playbackType;

+ (int)completionStateForDuration:(double)arg0 elapsedTime:(double)arg1;
+ (NSObject *)debugStringForCompletionState:(int)arg0;
+ (double)playedThresholdTimeForDuration:(double)arg0;
+ (char)supportsSecureCoding;

- (char)isEqualToSummaryExcludingTimestamp:(NSDate *)arg0;
- (NSNumber *)featureDuration;
- (NSNumber *)featureElapsedTime;
- (NSString *)externalProfileID;
- (NSString *)channelID;
- (NSDate *)currentPlaybackDate;
- (WLKPlaybackSummary *)initWithBundleId:(NSString *)arg0 timestamp:(NSDate *)arg1 duration:(NSNumber *)arg2 elapsedTime:(NSNumber *)arg3 featureDuration:(NSNumber *)arg4 featureElapsedTime:(NSNumber *)arg5 externalProfileID:(NSString *)arg6 contentID:(NSString *)arg7 accountID:(NSString *)arg8 playbackState:(int)arg9 playbackRate:(NSNumber *)arg10 completionState:(int)arg11 isAlwaysLive:(char)arg12 serviceID:(NSString *)arg13 channelID:(NSString *)arg14 currentPlaybackDate:(NSDate *)arg15 playbackType:(int)arg16;
- (WLKPlaybackSummary *)initWithMediaRemoteDictionary:(NSDictionary *)arg0 bundleID:(NSString *)arg1 accountID:(NSString *)arg2;
- (char)isSameContent:(NSObject *)arg0;
- (int)completionState;
- (char)_isValid;
- (char)isEqualToSummary:(id)arg0;
- (char)_compareOptional:(id)arg0 with:(id)arg1;
- (char)_validate:(NSDate *)arg0 identifier:(NSString *)arg1 expectedClass:(Class)arg2;
- (char)isEqualToSummaryExcludingCursor:(NSObject *)arg0;
- (char)isLiveType;
- (NSDictionary *)JSONRepresentation;
- (int)playbackType;
- (int)playbackState;
- (NSNumber *)playbackRate;
- (char)isAlwaysLive;
- (WLKPlaybackSummary *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSDate *)timestamp;
- (NSNumber *)duration;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (NSNumber *)elapsedTime;
- (NSString *)accountID;
- (NSString *)bundleID;
- (NSString *)serviceID;
- (NSString *)contentID;

@end
