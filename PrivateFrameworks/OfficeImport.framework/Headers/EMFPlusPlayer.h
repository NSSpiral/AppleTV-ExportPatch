/* Runtime dump - EMFPlusPlayer
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EMFPlusPlayer : NSObject
{
    MFPGraphics * mGraphics;
    EMFPlayer * mOwner;
    int mLargeType;
    unsigned short mLargeFlags;
    unsigned int mLargeSize;
    NSMutableData * mLargeData;
    MFPEffect * mEffect;
}

+ (float)firstTabPosPastPos:(float)arg0 stringFormat:(NSString *)arg1 isExplicit:(char *)arg2;
+ (int)serializableObjectTypeForGUID:(NSString *)arg0;

- (void)dealloc;
- (GLKEffect *)effect;
- (void)setEffect:(GLKEffect *)arg0;
- (int)readImage:(char *)arg0 :(unsigned int)arg1 :(id *)arg2;
- (int)readGradientBrush:(id)arg0 from:(char * *)arg1 brushFlags:(char *)arg2;
- (int)readPath:(char *)arg0 :(unsigned int)arg1 returnPath:(id *)arg2;
- (int)readBrush:(char *)arg0 :(unsigned int)arg1 returnBrush:(id *)arg2;
- (int)playBrush:(char *)arg0 :(unsigned int)arg1 :(unsigned char)arg2;
- (int)playPen:(char *)arg0 :(unsigned int)arg1 :(unsigned char)arg2;
- (int)playPath:(char *)arg0 :(unsigned int)arg1 :(unsigned char)arg2;
- (int)playRegion:(char *)arg0 :(unsigned int)arg1 :(unsigned char)arg2;
- (int)playImage:(char *)arg0 :(unsigned int)arg1 :(unsigned char)arg2;
- (int)playFont:(char *)arg0 :(unsigned int)arg1 :(unsigned char)arg2;
- (int)playStringFormat:(char *)arg0 :(unsigned int)arg1 :(unsigned char)arg2;
- (int)playImageAttributes:(char *)arg0 :(unsigned int)arg1 :(unsigned char)arg2;
- (int)playCustomLineCap:(char *)arg0 :(unsigned int)arg1 :(unsigned char)arg2;
- (int)playGraphics:(char *)arg0 :(unsigned int)arg1 :(unsigned char)arg2;
- (id)canvasInWorldCoordinates;
- (int)playFillPath:(NSString *)arg0 :(char *)arg1 :(unsigned int)arg2 :(unsigned short)arg3;
- (int)playStrokePath:(NSString *)arg0 :(char *)arg1 :(unsigned int)arg2 :(unsigned short)arg3;
- (int)setClipPath:(struct CGPath *)arg0 flags:(unsigned short)arg1;
- (int)playBlurEffectWithData:(char *)arg0 size:(unsigned int)arg1;
- (int)playSharpenEffectWithData:(char *)arg0 size:(unsigned int)arg1;
- (int)playColorMatrixEffectWithData:(char *)arg0 size:(unsigned int)arg1;
- (int)playColorLUTEffectWithData:(char *)arg0 size:(unsigned int)arg1;
- (int)playBrightnessContrastEffectWithData:(char *)arg0 size:(unsigned int)arg1;
- (int)playHueSaturationLightnessEffectWithData:(char *)arg0 size:(unsigned int)arg1;
- (int)playLevelsEffectWithData:(char *)arg0 size:(unsigned int)arg1;
- (int)playTintEffectWithData:(char *)arg0 size:(unsigned int)arg1;
- (int)playColorBalanceEffectWithData:(char *)arg0 size:(unsigned int)arg1;
- (int)playRedEyeCorrectionEffectWithData:(char *)arg0 size:(unsigned int)arg1;
- (int)playColorCurveEffectWithData:(char *)arg0 size:(unsigned int)arg1;
- (int)playHeader:(char *)arg0 :(unsigned int)arg1 :(unsigned short)arg2;
- (int)playObject:(char *)arg0 :(unsigned int)arg1 :(unsigned short)arg2;
- (int)playClear:(char *)arg0 :(unsigned int)arg1 :(unsigned short)arg2;
- (int)playFillEllipse:(char *)arg0 :(unsigned int)arg1 :(unsigned short)arg2;
- (int)playDrawEllipse:(char *)arg0 :(unsigned int)arg1 :(unsigned short)arg2;
- (int)playFillRects:(char *)arg0 :(unsigned int)arg1 :(unsigned short)arg2;
- (int)playDrawRects:(char *)arg0 :(unsigned int)arg1 :(unsigned short)arg2;
- (int)playFillPath:(char *)arg0 :(unsigned int)arg1 :(unsigned short)arg2;
- (int)playDrawPath:(char *)arg0 :(unsigned int)arg1 :(unsigned short)arg2;
- (int)playFillPolygon:(char *)arg0 :(unsigned int)arg1 :(unsigned short)arg2;
- (int)playDrawLines:(char *)arg0 :(unsigned int)arg1 :(unsigned short)arg2;
- (int)playDrawArc:(char *)arg0 :(unsigned int)arg1 :(unsigned short)arg2;
- (int)playFillPie:(char *)arg0 :(unsigned int)arg1 :(unsigned short)arg2;
- (int)playDrawPie:(char *)arg0 :(unsigned int)arg1 :(unsigned short)arg2;
- (int)playDrawBeziers:(char *)arg0 :(unsigned int)arg1 :(unsigned short)arg2;
- (int)playFillClosedCurve:(char *)arg0 :(unsigned int)arg1 :(unsigned short)arg2;
- (int)playDrawClosedCurve:(char *)arg0 :(unsigned int)arg1 :(unsigned short)arg2;
- (int)playDrawCurve:(char *)arg0 :(unsigned int)arg1 :(unsigned short)arg2;
- (int)playDrawImage:(char *)arg0 :(unsigned int)arg1 :(unsigned short)arg2;
- (int)playDrawImagePoints:(char *)arg0 :(unsigned int)arg1 :(unsigned short)arg2;
- (int)playDrawString:(char *)arg0 :(unsigned int)arg1 :(unsigned short)arg2;
- (int)playDrawDriverString:(char *)arg0 :(unsigned int)arg1 :(unsigned short)arg2;
- (int)playGetDC:(char *)arg0 :(unsigned int)arg1 :(unsigned short)arg2;
- (int)playSave:(char *)arg0 :(unsigned int)arg1 :(unsigned short)arg2;
- (int)playRestore:(char *)arg0 :(unsigned int)arg1 :(unsigned short)arg2;
- (int)playBeginContainer:(char *)arg0 :(unsigned int)arg1 :(unsigned short)arg2;
- (int)playBeginContainerNoParams:(char *)arg0 :(unsigned int)arg1 :(unsigned short)arg2;
- (int)playEndContainer:(char *)arg0 :(unsigned int)arg1 :(unsigned short)arg2;
- (int)playSetWorldTransform:(char *)arg0 :(unsigned int)arg1 :(unsigned short)arg2;
- (int)playResetWorldTransform:(char *)arg0 :(unsigned int)arg1 :(unsigned short)arg2;
- (int)playMultiplyWorldTransform:(char *)arg0 :(unsigned int)arg1 :(unsigned short)arg2;
- (int)playTranslateWorldTransform:(char *)arg0 :(unsigned int)arg1 :(unsigned short)arg2;
- (int)playScaleWorldTransform:(char *)arg0 :(unsigned int)arg1 :(unsigned short)arg2;
- (int)playRotateWorldTransform:(char *)arg0 :(unsigned int)arg1 :(unsigned short)arg2;
- (int)playSetPageTransform:(char *)arg0 :(unsigned int)arg1 :(unsigned short)arg2;
- (int)playResetClip:(char *)arg0 :(unsigned int)arg1 :(unsigned short)arg2;
- (int)playSetClipRect:(char *)arg0 :(unsigned int)arg1 :(unsigned short)arg2;
- (int)playSetClipPath:(char *)arg0 :(unsigned int)arg1 :(unsigned short)arg2;
- (int)playSetClipRegion:(char *)arg0 :(unsigned int)arg1 :(unsigned short)arg2;
- (int)playOffsetClip:(char *)arg0 :(unsigned int)arg1 :(unsigned short)arg2;
- (int)playSerializableObject:(char *)arg0 :(unsigned int)arg1 :(unsigned short)arg2;
- (int)playSetRenderingOrigin:(char *)arg0 :(unsigned int)arg1 :(unsigned short)arg2;
- (int)playSetAntiAliasMode:(char *)arg0 :(unsigned int)arg1 :(unsigned short)arg2;
- (int)playSetTextRenderingHint:(char *)arg0 :(unsigned int)arg1 :(unsigned short)arg2;
- (int)playSetTextContrast:(char *)arg0 :(unsigned int)arg1 :(unsigned short)arg2;
- (int)playSetInterpolationMode:(char *)arg0 :(unsigned int)arg1 :(unsigned short)arg2;
- (int)playSetPixelOffsetMode:(char *)arg0 :(unsigned int)arg1 :(unsigned short)arg2;
- (int)playSetCompositingMode:(char *)arg0 :(unsigned int)arg1 :(unsigned short)arg2;
- (int)playSetCompositingQuality:(char *)arg0 :(unsigned int)arg1 :(unsigned short)arg2;
- (int)playUnknown:(char *)arg0 :(unsigned int)arg1 :(int)arg2 :(unsigned short)arg3;
- (void)resetLargeRecord;
- (int)playRecord:(int)arg0 :(char *)arg1 :(unsigned int)arg2 :(unsigned short)arg3;
- (EMFPlusPlayer *)initWithOwner:(NSObject *)arg0 canvas:(struct CGRect)arg1;
- (int)play:(char *)arg0 :(unsigned int)arg1;

@end
