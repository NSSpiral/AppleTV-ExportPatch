/* Runtime dump - MRPatchwork
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRPatchwork : NSObject
{
    NSMutableArray * _patches;
}

- (void)dealloc;
- (MRPatchwork *)init;
- (void)addPatch:(BLImagePatch *)arg0;
- (id)patchworkWithPatch:(MRPatchworkPatch *)arg0;
- (void)removeAllPatches;

@end
