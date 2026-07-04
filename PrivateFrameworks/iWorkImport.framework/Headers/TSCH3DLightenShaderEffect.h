/* Runtime dump - TSCH3DLightenShaderEffect
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DLightenShaderEffect : TSCH3DShaderEffect

+ (struct tvec4<float>)lightenDiffuseFragmentColor:(struct tvec4<float> *)arg0 byPercent:(struct tvec4<float>)arg1;

- (void)addVariables:(TSCH3DPointLightUniformArrayShaderVariables *)arg0;
- (void)inject:(id)arg0;
- (void)uploadData:(NSData *)arg0 effectsStates:(NSArray *)arg1;

@end
