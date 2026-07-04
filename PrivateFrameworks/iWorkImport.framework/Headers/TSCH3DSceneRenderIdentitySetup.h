/* Runtime dump - TSCH3DSceneRenderIdentitySetup
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DSceneRenderIdentitySetup : TSCH3DSceneRenderSetup

+ (TSCH3DSceneRenderIdentitySetup *)allocWithZone:(struct _NSZone *)arg0;
+ (TSCH3DSceneRenderIdentitySetup *)_singletonAlloc;
+ (TSCH3DSceneRenderSetup *)setup;

- (void)setupPipeline:(NSObject *)arg0 fromCamera:(VKCamera *)arg1;
- (TSCH3DSceneRenderIdentitySetup *)retain;
- (void)release;
- (TSCH3DSceneRenderIdentitySetup *)autorelease;
- (unsigned int)retainCount;
- (TSCH3DSceneRenderIdentitySetup *)copyWithZone:(struct _NSZone *)arg0;

@end
