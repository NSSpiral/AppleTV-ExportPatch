/* Runtime dump - CPZoneBorderIntersection
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPZoneBorderIntersection : NSObject <NSCopying, CPCopying>
{
    struct CGRect intersectionRect;
    CPZoneBorder * intersectingBorder;
    char forwardVector;
    char backwardVector;
}

- (CPZoneBorderIntersection *)copyWithZone:(struct _NSZone *)arg0;
- (CPZoneBorderIntersection *)initSuper;
- (void)setIntersectionRect:(struct CGRect)arg0;
- (void)setIntersectingBorder:(CPZoneBorder *)arg0;
- (int)comparePositionLengthwise:(id)arg0;
- (CPZoneBorder *)intersectingBorder;
- (struct CGRect)intersectionRect;
- (char)backwardVector;
- (void)setForwardVector:(char)arg0;
- (void)setBackwardVector:(char)arg0;
- (char)forwardVector;

@end
