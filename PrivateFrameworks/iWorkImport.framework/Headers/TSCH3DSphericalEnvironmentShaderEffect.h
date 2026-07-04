/* Runtime dump - TSCH3DSphericalEnvironmentShaderEffect
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DSphericalEnvironmentShaderEffect : TSCH3DShaderEffect
{
    NSArray * mMaterials;
    TSCH3DTexturePool * mPool;
}

+ (Class)stateClass;
+ (TSCH3DSphericalEnvironmentShaderEffect *)effectWithMaterials:(id)arg0 pool:(NSObject *)arg1;

- (void)addVariables:(TSCH3DPointLightUniformArrayShaderVariables *)arg0;
- (void)inject:(id)arg0;
- (void)uploadData:(NSData *)arg0 effectsStates:(NSArray *)arg1;
- (void)updateState:(int)arg0 effectsStates:(NSArray *)arg1;
- (TSCH3DSphericalEnvironmentShaderEffect *)initWithMaterials:(id)arg0 pool:(NSObject *)arg1;
- (struct array<<anonymous>::TextureVariables, 2> *)textureVariablesArray;
- (void)dealloc;
- (unsigned int)count;
- (char)isEqual:(NSObject *)arg0;

@end
