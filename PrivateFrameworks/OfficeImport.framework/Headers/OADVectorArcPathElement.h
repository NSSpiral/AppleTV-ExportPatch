/* Runtime dump - OADVectorArcPathElement
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADVectorArcPathElement : OADPathElement
{
    struct OADAdjustCoord mLeft;
    struct OADAdjustCoord mTop;
    struct OADAdjustCoord mRight;
    struct OADAdjustCoord mBottom;
    struct OADAdjustPoint mStartVector;
    struct OADAdjustPoint mEndVector;
    char mClockwise;
    char mConnectedToPrevious;
}

- (void).cxx_construct;
- (OADVectorArcPathElement *)initWithLeft:(struct OADAdjustCoord)arg0 top:(struct OADAdjustCoord)arg1 right:(struct OADAdjustCoord)arg2 bottom:(struct OADAdjustCoord)arg3 startVector:(struct OADAdjustPoint)arg4 endVector:(struct OADAdjustCoord)arg5 clockwise:(id)arg6 connectedToPrevious:(struct OADAdjustPoint)arg7;
- (char)connectedToPrevious;
- (struct OADAdjustPoint)startVector;
- (struct OADAdjustPoint)endVector;
- (char)clockwise;
- (struct OADAdjustCoord)bottom;
- (struct OADAdjustCoord)left;
- (struct OADAdjustCoord)right;
- (struct OADAdjustCoord)top;

@end
