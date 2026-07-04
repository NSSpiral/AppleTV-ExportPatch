/* Runtime dump - TSCH3DSceneRenderSetup
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DSceneRenderSetup : NSObject

+ (TSCH3DSceneRenderSetup *)full;
+ (NSString *)sceneTransform;
+ (NSString *)cameraAndSceneTransform;
+ (struct CGRect)viewport;
+ (TSCH3DSceneRenderSetup *)null;
+ (NEIdentityKeychainItem *)identity;
+ (SCNCamera *)camera;

- (id)renderingCameraFromOriginalCamera:(id)arg0 pipeline:(TSCH3DSceneRenderPipeline *)arg1;

@end
