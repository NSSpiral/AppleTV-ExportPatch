/* Runtime dump - TSCH3DLightShaderEffect
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DLightShaderEffect : TSCH3DShaderEffect
{
    unsigned int mLightCount;
}

+ (Class)stateClass;
+ (void)createStateInEffectsStates:(NSArray *)arg0;
+ (NSNumber *)effectWithLightCount:(unsigned int)arg0;
+ (void)updatePackageState:(struct LightingPackageShaderEffectState *)arg0 effectsStates:(struct LightingPackageShaderEffectState)arg1;

- (void)addVariables:(TSCH3DPointLightUniformArrayShaderVariables *)arg0;
- (void)uploadData:(NSData *)arg0 effectsStates:(NSArray *)arg1;
- (void)uploadLightPositionablesWithUploader:(BRCTransferStream *)arg0 effectsStates:(NSArray *)arg1;
- (void)uploadLightDirectionalWithUploader:(BRCTransferStream *)arg0 effectsStates:(NSArray *)arg1;
- (TSCH3DLightShaderEffect *)initWithLightCount:(unsigned int)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;

@end
