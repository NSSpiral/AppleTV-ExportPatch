/* Runtime dump - MFPhoneHatchBrush
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPhoneHatchBrush : MFPhoneBrush
{
    OITSUColor * m_colour;
    int m_style;
}

+ (NSObject *)patternNameForHatchStyle:(int)arg0;
+ (MFPhoneHatchBrush *)hatchBrushWithColour:(id)arg0 :(int)arg1;

- (void)dealloc;
- (void)fillPath:(struct CGPath *)arg0 :(id)arg1;
- (MFPhoneHatchBrush *)initWithColour:(id)arg0 :(int)arg1;

@end
