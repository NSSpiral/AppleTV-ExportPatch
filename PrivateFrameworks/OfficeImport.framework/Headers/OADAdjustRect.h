/* Runtime dump - OADAdjustRect
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADAdjustRect : NSObject
{
    struct OADAdjustCoord mLeft;
    struct OADAdjustCoord mTop;
    struct OADAdjustCoord mRight;
    struct OADAdjustCoord mBottom;
}

- (NSString *)description;
- (void).cxx_construct;
- (OADAdjustRect *)initWithLeft:(struct OADAdjustCoord)arg0 top:(struct OADAdjustCoord)arg1 right:(struct OADAdjustCoord)arg2 bottom:(struct OADAdjustCoord)arg3;
- (struct OADAdjustCoord)bottom;
- (struct OADAdjustCoord)left;
- (struct OADAdjustCoord)right;
- (struct OADAdjustCoord)top;

@end
