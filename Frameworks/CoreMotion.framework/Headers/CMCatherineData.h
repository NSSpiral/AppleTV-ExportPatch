/* Runtime dump - CMCatherineData
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMCatherineData : CMLogItem
{
    double _catherine;
    double _confidence;
}

@property (readonly, nonatomic) double catherine;
@property (readonly, nonatomic) double confidence;

+ (char)supportsSecureCoding;

- (CMCatherineData *)initWithCatherine:(double)arg0 confidence:(double)arg1 timestamp:(double)arg2;
- (double)catherine;
- (void)dealloc;
- (CMCatherineData *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (CMCatherineData *)copyWithZone:(struct _NSZone *)arg0;
- (double)confidence;

@end
