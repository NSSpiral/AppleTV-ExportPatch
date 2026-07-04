/* Runtime dump - OADToPointPathElement
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADToPointPathElement : OADPathElement
{
    struct OADAdjustPoint mToPoint;
    char mRelative;
}

- (void).cxx_construct;
- (OADToPointPathElement *)initWithToPoint:(struct OADAdjustPoint)arg0;
- (struct OADAdjustPoint)toPoint;
- (void)setRelative:(char)arg0;
- (char)relative;

@end
