/* Runtime dump - TSCH3DTexCoordTilingShaderEffect
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DTexCoordTilingShaderEffect : TSCH3DShaderEffect

+ (void)initialize;
+ (TSCH3DTexCoordTilingShaderEffect *)allocWithZone:(struct _NSZone *)arg0;
+ (GLKEffect *)effect;
+ (TSCH3DTexCoordTilingShaderEffect *)_singletonAlloc;

- (void)addVariables:(TSCH3DPointLightUniformArrayShaderVariables *)arg0;
- (NSObject *)transformedTexcoordBuffer:(NSObject *)arg0 effectsStates:(NSArray *)arg1;
- (void)inject:(id)arg0;
- (void)uploadData:(NSData *)arg0 effectsStates:(NSArray *)arg1;
- (TSCH3DTexCoordTilingShaderEffect *)retain;
- (void)release;
- (TSCH3DTexCoordTilingShaderEffect *)autorelease;
- (unsigned int)retainCount;
- (TSCH3DTexCoordTilingShaderEffect *)copyWithZone:(struct _NSZone *)arg0;

@end
