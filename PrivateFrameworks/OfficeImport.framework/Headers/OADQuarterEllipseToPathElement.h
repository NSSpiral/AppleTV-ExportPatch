/* Runtime dump - OADQuarterEllipseToPathElement
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADQuarterEllipseToPathElement : OADToPointPathElement
{
    char mStartsVertical;
}

- (OADQuarterEllipseToPathElement *)initWithToPoint:(struct OADAdjustPoint)arg0 startsVertical:(struct OADAdjustCoord)arg1;
- (char)startsVertical;

@end
