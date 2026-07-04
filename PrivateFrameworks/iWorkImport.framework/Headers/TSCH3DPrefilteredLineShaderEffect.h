/* Runtime dump - TSCH3DPrefilteredLineShaderEffect
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DPrefilteredLineShaderEffect : TSCH3DShaderEffect

+ (TSCH3DPrefilteredLineShaderEffect *)variablePrefilterBoxTextureCoordinate;
+ (TSCH3DPrefilteredLineShaderEffect *)variablePrefilterBox;
+ (TSCH3DPrefilteredLineShaderEffect *)variablePrefilterOriginalVertex;
+ (NSObject *)variablePrefilterBoxTexture;
+ (UIColor *)variablePrefilterLineColor;

- (void)addVariables:(TSCH3DPointLightUniformArrayShaderVariables *)arg0;
- (void)inject:(id)arg0;
- (void)uploadData:(NSData *)arg0 effectsStates:(NSArray *)arg1;
- (id)variablePrefilterBoxTextureCoordinate;
- (id)variablePrefilterBox;
- (id)variablePrefilterOriginalVertex;
- (NSObject *)variablePrefilterBoxTexture;
- (UIColor *)variablePrefilterLineColor;

@end
