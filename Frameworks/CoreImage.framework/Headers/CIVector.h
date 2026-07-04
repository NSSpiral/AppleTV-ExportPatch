/* Runtime dump - CIVector
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIVector : NSObject <NSCopying, NSCoding>
{
    unsigned long _count;
    id _u;
}

+ (NSString *)vectorWithString:(NSString *)arg0;
+ (CIVector *)vectorWithX:(float)arg0 Y:(float)arg1 Z:(float)arg2;
+ (CIVector *)vectorWithX:(float)arg0;
+ (NSObject *)vectorWithCGPoint:(struct CGPoint)arg0;
+ (NSString *)vectorWithCGAffineTransform:(struct CGAffineTransform)arg0;
+ (CIVector *)vectorWithX:(float)arg0 Y:(float)arg1 Z:(float)arg2 W:(float)arg3;
+ (NSArray *)vectorWithValues:(float *)arg0 count:(float)arg1;
+ (NSObject *)vectorWithCGRect:(struct CGRect)arg0;
+ (CIVector *)vectorWithX:(float)arg0 Y:(float)arg1;

- (float *)_values;
- (CIVector *)initWithValues:(float *)arg0 count:(float)arg1;
- (CIVector *)initWithX:(float)arg0;
- (CIVector *)initWithX:(float)arg0 Y:(float)arg1;
- (CIVector *)initWithX:(float)arg0 Y:(float)arg1 Z:(float)arg2;
- (CIVector *)initWithX:(float)arg0 Y:(float)arg1 Z:(float)arg2 W:(float)arg3;
- (CIVector *)initWithCGPoint:(struct CGPoint)arg0;
- (CIVector *)initWithCGRect:(struct CGRect)arg0;
- (CIVector *)initWithCGAffineTransform:(struct CGAffineTransform)arg0;
- (float)Z;
- (float)W;
- (void)dealloc;
- (CIVector *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (unsigned long)count;
- (CIVector *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (struct CGAffineTransform)CGAffineTransformValue;
- (struct CGRect)CGRectValue;
- (CIVector *)copyWithZone:(struct _NSZone *)arg0;
- (struct CGPoint)CGPointValue;
- (CIVector *)initWithString:(NSString *)arg0;
- (float)valueAtIndex:(unsigned long)arg0;
- (float)X;
- (float)Y;
- (void)finalize;
- (NSDictionary *)stringRepresentation;

@end
