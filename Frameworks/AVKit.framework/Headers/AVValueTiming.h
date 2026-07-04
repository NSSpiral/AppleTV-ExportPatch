/* Runtime dump - AVValueTiming
 * Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVValueTiming : NSObject <NSCoding, NSCopying, NSMutableCopying>

@property (readonly, nonatomic) double currentValue;
@property (readonly, nonatomic) double anchorValue;
@property (readonly, nonatomic) double anchorTimeStamp;
@property (readonly, nonatomic) double rate;

+ (double)currentTimeStamp;
+ (AVValueTiming *)allocWithZone:(struct _NSZone *)arg0;
+ (AVValueTiming *)valueTimingWithAnchorValue:(double)arg0 anchorTimeStamp:(double)arg1 rate:(double)arg2;

- (struct ?)_timing;
- (char)isEqualToValueTiming:(id)arg0;
- (AVValueTiming *)initWithValueTiming:(AVValueTiming *)arg0;
- (AVValueTiming *)initWithAnchorValue:(double)arg0 anchorTimeStamp:(double)arg1 rate:(double)arg2;
- (double)anchorValue;
- (double)anchorTimeStamp;
- (double)valueForTimeStamp:(double)arg0;
- (double)timeStampForValue:(double)arg0;
- (AVValueTiming *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (AVValueTiming *)copyWithZone:(struct _NSZone *)arg0;
- (Class)classForCoder;
- (AVValueTiming *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (double)rate;
- (double)currentValue;

@end
