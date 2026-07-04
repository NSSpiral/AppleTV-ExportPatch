/* Runtime dump - RadioMutableTrackPlaybackDescriptor
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioMutableTrackPlaybackDescriptor : RadioTrackPlaybackDescriptor

@property (nonatomic) char current;
@property (retain, nonatomic) NSDate * expirationDate;
@property (nonatomic) double pauseTime;
@property (retain, nonatomic) NSDate * skipDate;
@property (nonatomic) long long storeID;
@property (copy, nonatomic) NSDictionary * trackInfo;

- (RadioMutableTrackPlaybackDescriptor *)copyWithZone:(struct _NSZone *)arg0;
- (void)setExpirationDate:(NSDate *)arg0;
- (void)setPauseTime:(double)arg0;
- (void)setSkipDate:(NSDate *)arg0;
- (void)setCurrent:(char)arg0;
- (void)setStoreID:(long long)arg0;
- (void)setTrackInfo:(NSDictionary *)arg0;

@end
