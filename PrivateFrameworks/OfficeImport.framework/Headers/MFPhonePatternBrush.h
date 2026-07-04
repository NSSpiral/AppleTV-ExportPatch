/* Runtime dump - MFPhonePatternBrush
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPhonePatternBrush : MFPhoneBrush
{
    MFPhoneBitmap * m_pattern;
    char m_usePaletteForBilevel;
}

+ (MFPhonePatternBrush *)patternBrushWithBitmap:(id)arg0 usePaletteForBilevel:(char)arg1;

- (void)dealloc;
- (void)fillPath:(struct CGPath *)arg0 :(id)arg1;
- (MFPhonePatternBrush *)initWithBitmap:(MFPhoneBitmap *)arg0 usePaletteForBilevel:(char)arg1;

@end
