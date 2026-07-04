/* Runtime dump - MPLayerSerializer
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MPLayerSerializer : MPLayer
{
    MCContainerSerializer * _layerSerializer;
    MPTransition * _introTransition;
}

- (void)dealloc;
- (NSString *)description;
- (NSString *)container;
- (void)setAudioPlaylist:(MPAudioPlaylist *)arg0;
- (void)removeEffectContainersAtIndices:(id)arg0;
- (void)insertEffectContainers:(id)arg0 atIndex:(int)arg1;
- (void)setIntroTransition:(MPTransition *)arg0;
- (void)moveEffectContainersFromIndices:(id)arg0 toIndex:(int)arg1;
- (void)setLayerSerializer:(MCContainerSerializer *)arg0;
- (MPTransition *)introTransition;
- (void)finalize;

@end
