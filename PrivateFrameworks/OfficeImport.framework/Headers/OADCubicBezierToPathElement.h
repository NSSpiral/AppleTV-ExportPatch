/* Runtime dump - OADCubicBezierToPathElement
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADCubicBezierToPathElement : OADPathElement
{
    struct OADAdjustPoint mControlPoint1;
    struct OADAdjustPoint mControlPoint2;
    struct OADAdjustPoint mToPoint;
    char mRelative;
}

- (void).cxx_construct;
- (struct OADAdjustPoint)toPoint;
- (struct OADAdjustPoint)controlPoint1;
- (struct OADAdjustPoint)controlPoint2;
- (OADCubicBezierToPathElement *)initWithControlPoint1:(struct OADAdjustPoint)arg0 controlPoint2:(struct OADAdjustCoord)arg1 toPoint:(struct CGPoint)arg2;
- (void)setRelative:(char)arg0;
- (char)relative;

@end
