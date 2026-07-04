/* Runtime dump - TSCH3DTextureBlendShaderEffect
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DTextureBlendShaderEffect : TSCH3DShaderEffect

+ (void)setBlendFactor:(float)arg0 unit:(int)arg1 effectsStates:(NSArray *)arg2;
+ (TSCH3DTextureBlendShaderEffect *)variableBlendFactor;
+ (NSObject *)variableBlendTexture;
+ (TSCH3DTextureBlendShaderEffect *)allocWithZone:(struct _NSZone *)arg0;
+ (GLKEffect *)effect;
+ (TSCH3DTextureBlendShaderEffect *)_singletonAlloc;

- (void)addVariables:(TSCH3DPointLightUniformArrayShaderVariables *)arg0;
- (void)inject:(id)arg0;
- (void)uploadData:(NSData *)arg0 effectsStates:(NSArray *)arg1;
- (id)variableBlendFactor;
- (NSObject *)variableBlendTexture;
- (TSCH3DTextureBlendShaderEffect *)retain;
- (void)release;
- (TSCH3DTextureBlendShaderEffect *)autorelease;
- (unsigned int)retainCount;
- (TSCH3DTextureBlendShaderEffect *)copyWithZone:(struct _NSZone *)arg0;

@end
