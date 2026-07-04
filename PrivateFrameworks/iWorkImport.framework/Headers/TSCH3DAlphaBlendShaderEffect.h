/* Runtime dump - TSCH3DAlphaBlendShaderEffect
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DAlphaBlendShaderEffect : TSCH3DShaderEffect

+ (void)setChartAlpha:(float)arg0 effectsStates:(NSArray *)arg1;
+ (TSCH3DAlphaBlendShaderEffect *)variableAlphaBlendValue;
+ (void)setElementAlpha:(float)arg0 effectsStates:(NSArray *)arg1;
+ (TSCH3DAlphaBlendShaderEffect *)allocWithZone:(struct _NSZone *)arg0;
+ (GLKEffect *)effect;
+ (TSCH3DAlphaBlendShaderEffect *)_singletonAlloc;

- (void)addVariables:(TSCH3DPointLightUniformArrayShaderVariables *)arg0;
- (void)inject:(id)arg0;
- (void)uploadData:(NSData *)arg0 effectsStates:(NSArray *)arg1;
- (id)variableAlphaBlendValue;
- (TSCH3DAlphaBlendShaderEffect *)retain;
- (void)release;
- (TSCH3DAlphaBlendShaderEffect *)autorelease;
- (unsigned int)retainCount;
- (TSCH3DAlphaBlendShaderEffect *)copyWithZone:(struct _NSZone *)arg0;

@end
