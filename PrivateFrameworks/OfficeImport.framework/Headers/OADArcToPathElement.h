/* Runtime dump - OADArcToPathElement
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADArcToPathElement : OADPathElement
{
    struct OADAdjustPoint mSemiaxes;
    struct OADAdjustCoord mStartAngle;
    struct OADAdjustCoord mAngleLength;
}

- (void).cxx_construct;
- (struct OADAdjustCoord)startAngle;
- (OADArcToPathElement *)initWithSemiaxes:(struct OADAdjustPoint)arg0 startAngle:(struct OADAdjustCoord)arg1 angleLength:(id)arg2;
- (struct OADAdjustPoint)semiaxes;
- (struct OADAdjustCoord)angleLength;

@end
