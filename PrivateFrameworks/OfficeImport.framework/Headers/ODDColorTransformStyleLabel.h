/* Runtime dump - ODDColorTransformStyleLabel
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODDColorTransformStyleLabel : NSObject
{
    ODDFillColorList * mFillColors;
    ODDFillColorList * mLineColors;
    ODDFillColorList * mEffectColors;
    ODDFillColorList * mTextLineColors;
    ODDFillColorList * mTextFillColors;
    ODDFillColorList * mTextEffectColors;
}

- (void)dealloc;
- (void)applyToShapeStyle:(NSObject *)arg0 index:(unsigned int)arg1 count:(unsigned int)arg2 state:(NSObject *)arg3;
- (id)fillColors;
- (id)lineColors;
- (id)effectColors;
- (id)textFillColors;
- (id)textLineColors;
- (id)textEffectColors;
- (void)setFillColors:(id)arg0;
- (void)setLineColors:(id)arg0;
- (void)setEffectColors:(id)arg0;
- (void)setTextLineColors:(id)arg0;
- (void)setTextFillColors:(id)arg0;
- (void)setTextEffectColors:(id)arg0;

@end
