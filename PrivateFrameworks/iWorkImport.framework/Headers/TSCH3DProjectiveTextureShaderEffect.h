/* Runtime dump - TSCH3DProjectiveTextureShaderEffect
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DProjectiveTextureShaderEffect : TSCH3DShaderEffect

+ (NSObject *)stateSharingID;
+ (UIColor *)variableShadowColor;
+ (TSCH3DProjectiveTextureShaderEffect *)variableShadowBorderFade;

- (void)addVariables:(TSCH3DPointLightUniformArrayShaderVariables *)arg0;
- (void)inject:(id)arg0;
- (void)uploadData:(NSData *)arg0 effectsStates:(NSArray *)arg1;
- (UIColor *)variableShadowColor;
- (id)variableShadowBorderFade;

@end
