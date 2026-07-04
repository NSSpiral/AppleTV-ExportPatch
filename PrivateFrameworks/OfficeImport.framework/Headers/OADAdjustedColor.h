/* Runtime dump - OADAdjustedColor
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADAdjustedColor : OADColor
{
    OADColor * mBaseColor;
    int mAdjustmentType;
    unsigned char mAdjustmentParam;
    char mInvert;
    char mInvert128;
    char mGray;
}

- (char)invert;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (OADAdjustedColor *)copyWithZone:(struct _NSZone *)arg0;
- (OADAdjustedColor *)initWithBaseColor:(UIColor *)arg0 adjustmentType:(int)arg1 adjustmentParam:(unsigned char)arg2 invert:(char)arg3 invert128:(char)arg4 gray:(char)arg5;
- (UIColor *)baseColor;
- (char)gray;
- (unsigned char)adjustmentParam;
- (char)invert128;
- (int)adjustmentType;

@end
