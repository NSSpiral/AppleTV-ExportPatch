/* Runtime dump - MRTransitionManager
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRTransitionManager : NSObject
{
    NSMutableDictionary * mTransitionSets;
    NSMutableDictionary * mTransitionPools;
}

+ (void)initialize;
+ (MRTransitionManager *)sharedManager;

- (void)dealloc;
- (void)cleanup;
- (NSObject *)transitionWithTransitionID:(NSString *)arg0;
- (NSObject *)descriptionForTransitionID:(NSObject *)arg0;
- (void)releaseResources;
- (void)recycleTransition:(NSObject *)arg0;
- (NSObject *)resourcePathForTransitionID:(NSObject *)arg0 andResource:(NSObject *)arg1;
- (char)canHandleKenBurnsForTransitionID:(NSObject *)arg0;
- (char)noContentsMotionForTransitionID:(NSObject *)arg0;
- (char)needsSourceLayerImageForPrecomputingForTransitionID:(NSObject *)arg0;
- (char)needsTargetLayerImageForPrecomputingForTransitionID:(NSObject *)arg0;
- (char)needsSourceLayerToBeOpaqueForSimple3DTransitionSubtype:(int)arg0;
- (char)needsTargetLayerToBeOpaqueForSimple3DTransitionSubtype:(int)arg0;
- (MRTransitionManager *)initWithPaths:(NSArray *)arg0;

@end
