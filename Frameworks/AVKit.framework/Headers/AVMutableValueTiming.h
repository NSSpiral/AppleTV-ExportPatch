/* Runtime dump - AVMutableValueTiming
 * Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVMutableValueTiming : AVValueTiming

@property (nonatomic) double anchorValue;
@property (nonatomic) double anchorTimeStamp;
@property (nonatomic) double rate;

+ (AVMutableValueTiming *)allocWithZone:(struct _NSZone *)arg0;

- (void)setAnchorValue:(double)arg0;
- (void)setAnchorTimeStamp:(double)arg0;
- (void)setValueTiming:(AVValueTiming *)arg0;
- (Class)classForCoder;
- (void)setRate:(double)arg0;

@end
