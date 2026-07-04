/* Runtime dump - TSCH3DOnePassBlurShaderEffect
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DOnePassBlurShaderEffect : TSCH3DShaderEffect

+ (TSCH3DOnePassBlurShaderEffect *)variableBlurTexCoord;
+ (NSObject *)variablePixelSize;

- (void)addVariables:(TSCH3DPointLightUniformArrayShaderVariables *)arg0;
- (void)inject:(id)arg0;
- (void)uploadData:(NSData *)arg0 effectsStates:(NSArray *)arg1;
- (id)variableBlurTexCoord;
- (NSObject *)variablePixelSize;

@end
