/* Runtime dump - TSCH3DStrokePatternShaderEffect
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DStrokePatternShaderEffect : TSCH3DShaderEffect

+ (NSObject *)variableStrokeTexture;

- (void)addVariables:(TSCH3DPointLightUniformArrayShaderVariables *)arg0;
- (void)inject:(id)arg0;
- (void)uploadData:(NSData *)arg0 effectsStates:(NSArray *)arg1;
- (NSObject *)variableStrokeTexture;

@end
