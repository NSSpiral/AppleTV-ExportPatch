/* Runtime dump - TSCH3DPrefilteredLineOutputColorShaderEffect
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DPrefilteredLineOutputColorShaderEffect : TSCH3DShaderEffect

+ (UIColor *)variablePrefilterStrokeColor;

- (void)addVariables:(TSCH3DPointLightUniformArrayShaderVariables *)arg0;
- (void)inject:(id)arg0;
- (void)uploadData:(NSData *)arg0 effectsStates:(NSArray *)arg1;
- (UIColor *)variablePrefilterStrokeColor;

@end
