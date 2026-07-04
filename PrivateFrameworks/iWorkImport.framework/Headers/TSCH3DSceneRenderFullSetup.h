/* Runtime dump - TSCH3DSceneRenderFullSetup
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DSceneRenderFullSetup : TSCH3DSceneRenderSetup

+ (TSCH3DSceneRenderFullSetup *)allocWithZone:(struct _NSZone *)arg0;
+ (TSCH3DSceneRenderFullSetup *)_singletonAlloc;
+ (TSCH3DSceneRenderSetup *)setup;

- (void)setupPipeline:(NSObject *)arg0 fromCamera:(VKCamera *)arg1;
- (TSCH3DSceneRenderFullSetup *)retain;
- (void)release;
- (TSCH3DSceneRenderFullSetup *)autorelease;
- (unsigned int)retainCount;
- (TSCH3DSceneRenderFullSetup *)copyWithZone:(struct _NSZone *)arg0;

@end
