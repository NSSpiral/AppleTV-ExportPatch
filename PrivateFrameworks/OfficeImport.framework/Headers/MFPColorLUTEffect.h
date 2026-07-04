/* Runtime dump - MFPColorLUTEffect
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPColorLUTEffect : MFPEffect
{
    id mLutA;
    id mLutR;
    id mLutG;
    id mLutB;
}

+ (NSString *)GUID;

- (MFPColorLUTEffect *)initWithLUTA:(id)arg0 LUTR:(unsigned char)arg1 LUTG:(id)arg2 LUTB:(id)arg3;

@end
