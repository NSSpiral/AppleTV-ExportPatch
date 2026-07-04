/* Runtime dump - RadioPlaybackContext
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioPlaybackContext : NSObject <NSCopying, NSMutableCopying>
{
    int _numberOfSkipsUsed;
    NSArray * _trackPlaybackDescriptorQueue;
}

@property (readonly, nonatomic) int numberOfSkipsUsed;
@property (readonly, copy, nonatomic) NSArray * trackPlaybackDescriptorQueue;

- (RadioPlaybackContext *)copyWithZone:(struct _NSZone *)arg0;
- (RadioPlaybackContext *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (NSArray *)trackPlaybackDescriptorQueue;
- (NSDictionary *)playbackContextDictionary;
- (int)numberOfSkipsUsed;

@end
