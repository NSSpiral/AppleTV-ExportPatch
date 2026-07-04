/* Runtime dump - MFPGradientStop
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPGradientStop : NSObject
{
    OITSUColor * mColor;
    float mPosition;
}

- (void)dealloc;
- (float)position;
- (UIColor *)color;
- (MFPGradientStop *)initWithColor:(UIColor *)arg0 position:(float)arg1;

@end
