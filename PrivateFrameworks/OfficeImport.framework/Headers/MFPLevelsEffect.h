/* Runtime dump - MFPLevelsEffect
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPLevelsEffect : MFPEffect
{
    int mHighlight;
    int mMidtone;
    int mShadow;
}

+ (NSString *)GUID;

- (MFPLevelsEffect *)initWithHighlight:(int)arg0 midtone:(int)arg1 shadow:(int)arg2;

@end
