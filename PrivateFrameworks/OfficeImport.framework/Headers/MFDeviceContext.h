/* Runtime dump - MFDeviceContext
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFDeviceContext : NSObject <NSCopying>
{
    NSObject<MFDeviceDriver> * m_driver;
    BOOL m_textUpdateCP;
    double m_miterLimit;
    int m_textHorizontalAlign;
    int m_textVerticalAlign;
    int m_textDirection;
    MFFont * m_font;
    OITSUColor * m_textColour;
    int m_textBreakExtra;
    int m_textBreakCount;
    int m_textCharExtra;
    OITSUColor * m_bkColour;
    int m_bkMode;
    struct CGPoint m_brushOrg;
    struct CGPoint m_penPos;
    int m_arcDirection;
    int m_polyFillMode;
    MFTransform * m_transform;
    MFPen * m_pen;
    MFBrush * m_brush;
    MFPalette * m_selectedPalette;
    int m_rop2;
    int m_stretchMode;
    MFPath * m_path;
}

+ (MFDeviceContext *)deviceContextWithDriver:(id)arg0;

- (void)dealloc;
- (MFDeviceContext *)copyWithZone:(struct _NSZone *)arg0;
- (void)setMiterLimit:(double)arg0;
- (void)setFont:(UIFont *)arg0;
- (void)setPath:(NSString *)arg0;
- (void).cxx_construct;
- (void)setBrush:(MFPHatchBrush *)arg0;
- (struct CGPoint)getPenPosition;
- (double)getMiterLimit;
- (int)getTextHorizontalAlign;
- (int)getTextVerticalAlign;
- (int)getTextDirection;
- (id)getTextColour;
- (int)getTextBreakExtra;
- (int)getTextBreakCount;
- (int)getTextCharExtra;
- (id)getBkColour;
- (int)getBkMode;
- (struct CGPoint)getBrushOrg;
- (int)getArcDirection;
- (int)getPolyFillMode;
- (int)getStretchBltMode;
- (void)setCurrentTransform:(NSAffineTransform *)arg0;
- (void)setSelectedPalette:(id)arg0;
- (id)getPen;
- (void)setPen:(id)arg0;
- (int)getRop2;
- (MFDeviceContext *)initWithDriver:(MFPhoneDeviceDriver *)arg0;
- (UIFont *)getFont;
- (void)setBkColour:(id)arg0;
- (void)setBkMode:(int)arg0;
- (void)setBrushOrg:(struct CGPoint)arg0;
- (void)setTextColour:(id)arg0;
- (void)setTextCharExtra:(int)arg0;
- (void)setTextUpdateCP:(BOOL)arg0;
- (void)setTextHorizontalAlign:(int)arg0;
- (void)setTextVerticalAlign:(int)arg0;
- (void)setTextDirection:(int)arg0;
- (BOOL)getTextUpdateCP;
- (void)setPenPosition:(struct CGPoint)arg0;
- (NSString *)getCurrentTransform;
- (void)setArcDirection:(int)arg0;
- (NSString *)getPath;
- (void)setPolyFillMode:(int)arg0;
- (id)getSelectedPalette;
- (id)getBrush;
- (void)setStretchBltMode:(int)arg0;
- (void)setTextJustification:(int)arg0 :(int)arg1;
- (void)setRop2:(int)arg0;

@end
