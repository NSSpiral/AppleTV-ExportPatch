/* Runtime dump - TSCH3DShaderEffect
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DShaderEffect : NSObject <TSCH3DShaderEffectStateInfo>

+ (NSObject *)stateSharingID;
+ (Class)stateClass;
+ (GLKEffect *)effect;

- (NSObject *)stateSharingID;
- (void)addVariables:(TSCH3DPointLightUniformArrayShaderVariables *)arg0;
- (void)uploadData:(NSData *)arg0 effectsStates:(NSArray *)arg1;
- (void)uploadData:(NSData *)arg0 effectsStates:(NSArray *)arg1 updateCurrentStates:(NSArray *)arg2;
- (void)updateState:(int)arg0 effectsStates:(NSArray *)arg1;
- (Class)stateClass;
- (char)alwaysUploadData;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;

@end
