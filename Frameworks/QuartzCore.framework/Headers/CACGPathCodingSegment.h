/* Runtime dump - CACGPathCodingSegment
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CACGPathCodingSegment : NSObject <NSCoding>
{
    int _type;
    id _points;
}

- (CACGPathCodingSegment *)initWithCGPathElement:(struct CGPathElement *)arg0;
- (void)addToCGPath:(struct CGPath *)arg0;
- (CACGPathCodingSegment *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_construct;

@end
