/* Runtime dump - MCAssetAudio
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MCAssetAudio : MCAsset
{
    NSMutableSet * mSongs;
}

- (MCAssetAudio *)init;
- (void)demolish;
- (void)learnSong:(id)arg0;
- (void)forgetSong:(id)arg0;
- (char)isInUse;

@end
