/* Runtime dump - AVFloat64Range
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVFloat64Range : NSObject <NSCopying>
{
    double _minimum;
    double _maximum;
}

@property (readonly, nonatomic) double minimum;
@property (readonly, nonatomic) double maximum;

+ (AVFloat64Range *)float64RangeWithMinimum:(double)arg0 maximum:(double)arg1;
+ (AVFloat64Range *)float64RangeWithAudioValueRange:(struct AudioValueRange)arg0;

- (AVFloat64Range *)initWithMinimum:(double)arg0 maximum:(double)arg1;
- (AVFloat64Range *)initWithAudioValueRange:(struct AudioValueRange)arg0;
- (double)minimum;
- (double)maximum;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (AVFloat64Range *)copyWithZone:(struct _NSZone *)arg0;

@end
