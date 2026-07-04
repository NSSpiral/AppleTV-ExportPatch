/* Runtime dump - TSCH3DGaussianBlurShaderEffect
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGaussianBlurShaderEffect : TSCH3DShaderEffect
{
    TSCH3DShaderVariable * mSamplingTexcoords;
}

+ (TSCH3DGaussianBlurShaderEffect *)variableAccum;
+ (TSCH3DGaussianBlurShaderEffect *)variableTapUnit;
+ (void)setTapUnit:(struct tvec2<float>)arg0 effectsStates:(NSArray *)arg1;

- (void)addVariables:(TSCH3DPointLightUniformArrayShaderVariables *)arg0;
- (void)inject:(id)arg0;
- (void)uploadData:(NSData *)arg0 effectsStates:(NSArray *)arg1;
- (id)variableAccum;
- (id)variableTapUnit;
- (void)dealloc;
- (TSCH3DGaussianBlurShaderEffect *)init;

@end
