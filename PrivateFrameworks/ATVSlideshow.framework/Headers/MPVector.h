/* Runtime dump - MPVector
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MPVector : NSObject
{
    id _vector;
    int _length;
}

+ (MPVector *)vectorFromString:(NSString *)arg0;
+ (MPVector *)vectorWithValues:(NSArray *)arg0;
+ (MPVector *)vectorFromCGColor:(struct CGColor *)arg0;
+ (MPVector *)vectorFromMCVector:(struct ?)arg0;

- (MPVector *)initWithCoder:(NSCoder *)arg0;
- (struct CGColor *)CGColor;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (int)count;
- (MPVector *)init;
- (MPVector *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)string;
- (void)setValues:(NSArray *)arg0;
- (NSArray *)values;
- (void)setVector:(struct ?)arg0;
- (NSString *)CIColorString;
- (struct ?)vector;
- (char)isEqualTo:(id)arg0;
- (float)valueAtIndex:(int)arg0;

@end
