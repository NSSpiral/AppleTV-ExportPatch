/* Runtime dump - TSCH3DSceneRenderViewportSetup
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DSceneRenderViewportSetup : TSCH3DSceneRenderSetup

+ (TSCH3DSceneRenderViewportSetup *)allocWithZone:(struct _NSZone *)arg0;
+ (TSCH3DSceneRenderViewportSetup *)_singletonAlloc;
+ (TSCH3DSceneRenderSetup *)setup;

- (void)setupPipeline:(NSObject *)arg0 fromCamera:(VKCamera *)arg1;
- (TSCH3DSceneRenderViewportSetup *)retain;
- (void)release;
- (TSCH3DSceneRenderViewportSetup *)autorelease;
- (unsigned int)retainCount;
- (TSCH3DSceneRenderViewportSetup *)copyWithZone:(struct _NSZone *)arg0;

@end
