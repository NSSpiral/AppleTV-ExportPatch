/* Runtime dump - MFPhoneSolidBrush
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPhoneSolidBrush : MFPhoneBrush
{
    OITSUColor * m_colour;
}

+ (MFPhoneSolidBrush *)solidBrushWithColour:(id)arg0;

- (void)dealloc;
- (void)fillPath:(struct CGPath *)arg0 :(id)arg1;
- (MFPhoneSolidBrush *)initWithColour:(id)arg0;

@end
