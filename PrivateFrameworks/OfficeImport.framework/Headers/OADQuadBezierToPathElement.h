/* Runtime dump - OADQuadBezierToPathElement
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADQuadBezierToPathElement : OADPathElement
{
    struct OADAdjustPoint mControlPoint;
    struct OADAdjustPoint mToPoint;
}

- (void).cxx_construct;
- (struct OADAdjustPoint)toPoint;
- (struct OADAdjustPoint)controlPoint;
- (OADQuadBezierToPathElement *)initWithControlPoint:(struct OADAdjustPoint)arg0 toPoint:(struct OADAdjustCoord)arg1;

@end
