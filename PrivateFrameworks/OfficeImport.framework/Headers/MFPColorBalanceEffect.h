/* Runtime dump - MFPColorBalanceEffect
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPColorBalanceEffect : MFPEffect
{
    int mCyanRed;
    int mMagentaGreen;
    int mYellowBlue;
}

+ (NSString *)GUID;

- (MFPColorBalanceEffect *)initWithCyanRed:(int)arg0 magentaGreen:(int)arg1 yellowBlue:(int)arg2;

@end
