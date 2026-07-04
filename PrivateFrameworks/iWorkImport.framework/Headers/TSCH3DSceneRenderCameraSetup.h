/* Runtime dump - TSCH3DSceneRenderCameraSetup
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DSceneRenderCameraSetup : TSCH3DSceneRenderSetup

+ (TSCH3DSceneRenderCameraSetup *)allocWithZone:(struct _NSZone *)arg0;
+ (TSCH3DSceneRenderCameraSetup *)_singletonAlloc;
+ (TSCH3DSceneRenderSetup *)setup;

- (void)setupPipeline:(NSObject *)arg0 fromCamera:(VKCamera *)arg1;
- (TSCH3DSceneRenderCameraSetup *)retain;
- (void)release;
- (TSCH3DSceneRenderCameraSetup *)autorelease;
- (unsigned int)retainCount;
- (TSCH3DSceneRenderCameraSetup *)copyWithZone:(struct _NSZone *)arg0;

@end
