/* Runtime dump - SKRange
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKRange : NSObject <NSCoding, NSCopying>
{
    float _lowerLimit;
    float _upperLimit;
}

@property float lowerLimit;
@property float upperLimit;

+ (SKRange *)rangeWithLowerLimit:(float)arg0 upperLimit:(float)arg1;
+ (SKRange *)rangeWithNoLimits;
+ (SKRange *)rangeWithLowerLimit:(float)arg0;
+ (SKRange *)rangeWithUpperLimit:(float)arg0;
+ (SKRange *)rangeWithConstantValue:(float)arg0;
+ (SKRange *)rangeWithValue:(float)arg0 variance:(float)arg1;

- (float)lowerLimit;
- (float)upperLimit;
- (void)setLowerLimit:(float)arg0;
- (void)setUpperLimit:(float)arg0;
- (SKRange *)initWithLowerLimit:(float)arg0 upperLimit:(float)arg1;
- (SKRange *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (SKRange *)copyWithZone:(struct _NSZone *)arg0;

@end
