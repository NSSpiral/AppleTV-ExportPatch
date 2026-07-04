/* Runtime dump - OADQuadBezierControlPointPathElement
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADQuadBezierControlPointPathElement : OADPathElement
{
    struct OADAdjustPoint mControlPoint;
}

- (void).cxx_construct;
- (struct OADAdjustPoint)controlPoint;
- (OADQuadBezierControlPointPathElement *)initWithControlPoint:(struct OADAdjustPoint)arg0;

@end
