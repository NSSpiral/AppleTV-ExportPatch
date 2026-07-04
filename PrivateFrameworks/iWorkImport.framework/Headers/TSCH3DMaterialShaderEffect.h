/* Runtime dump - TSCH3DMaterialShaderEffect
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DMaterialShaderEffect : TSCH3DShaderEffect
{
    TSCH3DTexturePool * mPool;
    TSCH3DTexturesMaterial * mMaterial;
    struct MaterialShaderVariables mVariables;
}

+ (NSObject *)stateSharingID;
+ (NSObject *)effectWithPool:(NSObject *)arg0 material:(GLKEffectPropertyMaterial *)arg1 variables:(struct MaterialShaderVariables *)arg2;

- (NSObject *)stateSharingID;
- (void)addVariables:(TSCH3DPointLightUniformArrayShaderVariables *)arg0;
- (void)uploadData:(NSData *)arg0 effectsStates:(NSArray *)arg1;
- (void)updateState:(int)arg0 effectsStates:(NSArray *)arg1;
- (TSCH3DMaterialShaderEffect *)initWithPool:(NSObject *)arg0 material:(GLKEffectPropertyMaterial *)arg1 variables:(struct MaterialShaderVariables *)arg2;
- (void)affectStates:(NSArray *)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (void).cxx_construct;

@end
