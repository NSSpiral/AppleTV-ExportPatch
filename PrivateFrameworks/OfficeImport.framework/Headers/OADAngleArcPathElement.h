/* Runtime dump - OADAngleArcPathElement
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADAngleArcPathElement : OADPathElement
{
    struct OADAdjustPoint mCenter;
    struct OADAdjustPoint mSemiaxes;
    struct OADAdjustCoord mStartAngle;
    struct OADAdjustCoord mAngleLength;
    char mConnectedToPrevious;
}

- (struct OADAdjustPoint)center;
- (void).cxx_construct;
- (struct OADAdjustCoord)startAngle;
- (OADAngleArcPathElement *)initWithCenter:(struct OADAdjustPoint)arg0 semiaxes:(struct OADAdjustCoord)arg1 startAngle:(id)arg2 angleLength:(struct OADAdjustPoint)arg3 connectedToPrevious:(struct OADAdjustCoord)arg4;
- (struct OADAdjustPoint)semiaxes;
- (struct OADAdjustCoord)angleLength;
- (char)connectedToPrevious;

@end
