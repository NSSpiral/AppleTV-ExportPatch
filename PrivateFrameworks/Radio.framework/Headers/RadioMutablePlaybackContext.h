/* Runtime dump - RadioMutablePlaybackContext
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioMutablePlaybackContext : RadioPlaybackContext

@property (nonatomic) int numberOfSkipsUsed;
@property (copy, nonatomic) NSArray * trackPlaybackDescriptorQueue;

- (RadioMutablePlaybackContext *)copyWithZone:(struct _NSZone *)arg0;
- (void)setTrackPlaybackDescriptorQueue:(NSArray *)arg0;
- (void)setNumberOfSkipsUsed:(int)arg0;

@end
