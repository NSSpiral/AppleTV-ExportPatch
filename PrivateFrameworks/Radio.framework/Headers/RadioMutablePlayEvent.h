/* Runtime dump - RadioMutablePlayEvent
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioMutablePlayEvent : RadioPlayEvent

@property (retain, nonatomic) NSDate * datePlayed;
@property (nonatomic) int endReason;
@property (nonatomic) double endTimeInTrack;
@property (copy, nonatomic) NSString * externalIdentifier;
@property (nonatomic) double startTimeInTrack;
@property (nonatomic) long long storeID;
@property (copy, nonatomic) NSData * timedMetadata;
@property (copy, nonatomic) NSDictionary * trackInfo;
@property (nonatomic) int type;

- (void)setExternalIdentifier:(NSString *)arg0;
- (void)setType:(int)arg0;
- (RadioMutablePlayEvent *)copyWithZone:(struct _NSZone *)arg0;
- (void)setDatePlayed:(NSDate *)arg0;
- (void)setEndReason:(int)arg0;
- (void)setEndTimeInTrack:(double)arg0;
- (void)setStartTimeInTrack:(double)arg0;
- (void)setStoreID:(long long)arg0;
- (void)setTimedMetadata:(NSData *)arg0;
- (void)setTrackInfo:(NSDictionary *)arg0;

@end
