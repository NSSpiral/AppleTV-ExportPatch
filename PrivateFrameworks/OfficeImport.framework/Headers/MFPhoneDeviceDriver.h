/* Runtime dump - MFPhoneDeviceDriver
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPhoneDeviceDriver : NSObject <MFDeviceDriver>
{
    struct CGRect m_canvas;
    struct CGRect m_viewBox;
    struct CGAffineTransform m_viewBoxTransform;
    struct CGAffineTransform m_worldToDeviceTransform;
    struct CGAffineTransform m_combinedTransform;
}

+ (int)getROP:(id)arg0;

- (void)dealloc;
- (void)setTransform:(struct CGAffineTransform)arg0;
- (void).cxx_construct;
- (MFPhoneDeviceDriver *)initWithCanvas:(struct CGRect)arg0;
- (MFPath *)createPath;
- (struct CGRect)getCanvas;
- (int)textOut:(MFDeviceContext *)arg0 :(int *)arg1 :(int *)arg2 :(id)arg3;
- (int)extTextOut:(MFDeviceContext *)arg0 :(int *)arg1 :(int *)arg2 :(id)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int *)arg9 :(int)arg10;
- (int)rectangle:(MFDeviceContext *)arg0 :(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4;
- (int)ellipse:(MFDeviceContext *)arg0 :(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4;
- (int)setViewBox:(double)arg0 :(double)arg1 :(double)arg2 :(double)arg3;
- (int)lineTo:(MFDeviceContext *)arg0 :(double)arg1 :(double)arg2;
- (int)polygon:(MFDeviceContext *)arg0 :(struct CGPoint *)arg1 :(int)arg2;
- (int)polyPolygon:(MFDeviceContext *)arg0 :(struct CGPoint *)arg1 :(int *)arg2 :(int)arg3;
- (int)polyline:(MFDeviceContext *)arg0 :(struct CGPoint *)arg1 :(int)arg2;
- (int)polyPolyline:(MFDeviceContext *)arg0 :(struct CGPoint *)arg1 :(int *)arg2 :(int)arg3;
- (int)arc:(MFDeviceContext *)arg0 :(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8;
- (int)pie:(MFDeviceContext *)arg0 :(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8;
- (int)angleArc:(MFDeviceContext *)arg0 :(int)arg1 :(int)arg2 :(unsigned int)arg3 :(double)arg4 :(double)arg5;
- (int)arcTo:(MFDeviceContext *)arg0 :(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8;
- (int)chord:(MFDeviceContext *)arg0 :(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8;
- (int)bezierTo:(MFDeviceContext *)arg0 :(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6;
- (int)bezier:(MFDeviceContext *)arg0 :(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8;
- (int)roundRect:(MFDeviceContext *)arg0 :(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(double)arg5 :(double)arg6;
- (MFRegion *)createRegionWithRects:(NSArray *)arg0 :(id)arg1;
- (MFBrush *)createSolidBrush:(OITSUColor *)arg0;
- (MFBrush *)createHatchBrush:(OITSUColor *)arg0 :(int)arg1;
- (MFBrush *)createNullBrush;
- (MFFont *)createFont:(int)arg0 :(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(BOOL)arg5 :(BOOL)arg6 :(BOOL)arg7 :(int)arg8 :(int)arg9 :(unsigned char)arg10 :(int)arg11 :(int)arg12 :(int)arg13 :(id)arg14;
- (MFFont *)createFontIndirectW:(int)arg0 :(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(BOOL)arg5 :(BOOL)arg6 :(BOOL)arg7 :(int)arg8 :(int)arg9 :(unsigned char)arg10 :(int)arg11 :(int)arg12 :(int)arg13 :(id)arg14 :(id)arg15 :(id)arg16 :(unsigned int)arg17 :(unsigned int)arg18 :(unsigned int)arg19 :(unsigned int)arg20 :(unsigned int)arg21;
- (MFPen *)createPen:(int)arg0 :(int)arg1 :(id)arg2 :(double *)arg3;
- (MFBrush *)createPatternBrush:(MFBitmap *)arg0 usePaletteForBilevel:(char)arg1;
- (MFPen *)createPen;
- (MFFont *)createFont:(int)arg0;
- (MFRegion *)createRegionWithPath:(MFPath *)arg0;
- (int)removeClip;
- (int)excludeClipRect:(struct CGRect)arg0;
- (int)intersectClipRect:(struct CGRect)arg0;
- (int)setMetaRgn;
- (MFBitmap *)createDIBitmap:(MFDeviceContext *)arg0 :(char *)arg1 :(unsigned int)arg2 :(int)arg3;
- (MFBitmap *)createDIBitmap:(MFDeviceContext *)arg0 :(char *)arg1 :(unsigned int)arg2 :(char *)arg3 :(unsigned int)arg4 :(int)arg5;
- (MFBitmap *)createBitmap:(MFDeviceContext *)arg0 :(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(char *)arg5 :(unsigned int)arg6;
- (int)patBlt:(MFDeviceContext *)arg0 :(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(unsigned int)arg5;
- (int)bitBlt:(MFDeviceContext *)arg0 :(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(id)arg5 :(int)arg6 :(int)arg7 :(unsigned int)arg8 :(struct CGAffineTransform *)arg9 :(unsigned int)arg10;
- (int)stretchBlt:(MFDeviceContext *)arg0 :(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(id)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9 :(unsigned int)arg10 :(struct CGAffineTransform *)arg11 :(unsigned int)arg12;
- (int)maskBlt:(MFDeviceContext *)arg0 :(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(id)arg5 :(int)arg6 :(int)arg7 :(id)arg8 :(int)arg9 :(int)arg10 :(unsigned int)arg11 :(struct CGAffineTransform *)arg12 :(unsigned int)arg13;
- (int)plgBlt:(MFDeviceContext *)arg0 :(struct CGPoint *)arg1 :(id)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(id)arg7 :(int)arg8 :(int)arg9 :(struct CGAffineTransform *)arg10 :(unsigned int)arg11;
- (void)drawBezierPath:(NSString *)arg0 dc:(id)arg1 fill:(char)arg2 stroke:(char)arg3;
- (void)concatTransforms;
- (void)updateViewBoxTransform;
- (int)activateTransform:(struct CGAffineTransform)arg0;

@end
