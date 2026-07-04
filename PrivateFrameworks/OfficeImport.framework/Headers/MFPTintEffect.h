/* Runtime dump - MFPTintEffect
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPTintEffect : MFPEffect
{
    int mHue;
    int mAmount;
}

+ (NSString *)GUID;

- (MFPTintEffect *)initWithHue:(int)arg0 amount:(int)arg1;

@end
