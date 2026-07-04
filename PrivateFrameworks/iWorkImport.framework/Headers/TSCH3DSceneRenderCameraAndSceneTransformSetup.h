/* Runtime dump - TSCH3DSceneRenderCameraAndSceneTransformSetup
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DSceneRenderCameraAndSceneTransformSetup : TSCH3DSceneRenderSetup

+ (TSCH3DSceneRenderCameraAndSceneTransformSetup *)allocWithZone:(struct _NSZone *)arg0;
+ (TSCH3DSceneRenderCameraAndSceneTransformSetup *)_singletonAlloc;
+ (TSCH3DSceneRenderSetup *)setup;

- (void)setupPipeline:(NSObject *)arg0 fromCamera:(VKCamera *)arg1;
- (TSCH3DSceneRenderCameraAndSceneTransformSetup *)retain;
- (void)release;
- (TSCH3DSceneRenderCameraAndSceneTransformSetup *)autorelease;
- (unsigned int)retainCount;
- (TSCH3DSceneRenderCameraAndSceneTransformSetup *)copyWithZone:(struct _NSZone *)arg0;

@end
