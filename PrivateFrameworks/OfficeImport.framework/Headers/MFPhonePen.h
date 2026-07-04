/* Runtime dump - MFPhonePen
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPhonePen : MFPen
{
    float m_PixelSize;
}

+ (NSObject *)penWithStyle:(int)arg0 width:(int)arg1 colour:(id)arg2 styleArray:(double *)arg3 LPToDPTransform:(struct CGAffineTransform)arg4;

- (void)strokePath:(UIBezierPath *)arg0 :(id)arg1;
- (MFPhonePen *)initWithStyle:(int)arg0 width:(int)arg1 colour:(id)arg2 styleArray:(double *)arg3;
- (void)applyDashedLinesToPath:(NSString *)arg0;
- (void)applyLineCapStyleToPath:(NSString *)arg0;
- (void)applyLineJoinStyleToPath:(NSString *)arg0 :(id)arg1;

@end
