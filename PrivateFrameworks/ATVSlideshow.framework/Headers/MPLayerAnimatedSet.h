/* Runtime dump - MPLayerAnimatedSet
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MPLayerAnimatedSet : MPLayer
{
    NSArray * _animatedSets;
    MCContainerParallelizer * _layerParallelizer;
}

- (void)dealloc;
- (MPLayerAnimatedSet *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (MPLayerAnimatedSet *)init;
- (NSString *)description;
- (NSString *)container;
- (void)cleanup;
- (void)setAudioPlaylist:(MPAudioPlaylist *)arg0;
- (void)removeEffectContainersAtIndices:(id)arg0;
- (void)insertEffectContainers:(id)arg0 atIndex:(int)arg1;
- (void)setAnimatedSets:(NSArray *)arg0;
- (void)moveEffectContainersFromIndices:(id)arg0 toIndex:(int)arg1;
- (void)resetStartTimes;
- (NSArray *)animatedSets;
- (void)setLayerParallelizer:(MCContainerParallelizer *)arg0;
- (void)finalize;

@end
