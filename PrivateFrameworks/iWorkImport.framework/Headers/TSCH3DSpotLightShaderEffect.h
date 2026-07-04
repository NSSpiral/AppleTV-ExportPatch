/* Runtime dump - TSCH3DSpotLightShaderEffect
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DSpotLightShaderEffect : TSCH3DLightShaderEffect

- (id)variables;
- (void)inject:(id)arg0;
- (void)uploadData:(NSData *)arg0 effectsStates:(NSArray *)arg1;
- (void)uploadSpotLightWithUploader:(BRCTransferStream *)arg0 effectsStates:(NSArray *)arg1;

@end
