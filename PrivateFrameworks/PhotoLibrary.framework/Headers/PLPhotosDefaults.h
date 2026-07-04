/* Runtime dump - PLPhotosDefaults
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLPhotosDefaults : NSObject
{
    char _shouldRepeat;
    char _shouldShuffle;
    char _shouldPlayMusic;
    char _summarizeMomentSections;
    int _transition;
    int _secondsPerSlide;
    MPMediaItemCollection * _musicCollection;
}

+ (PLPhotosDefaults *)sharedInstance;
+ (int)randomTransition;

- (void)dealloc;
- (PLPhotosDefaults *)init;
- (void)setTransition:(int)arg0;
- (int)transition;
- (int)secondsPerSlide;
- (char)shouldPlayMusic;
- (char)shouldShuffle;
- (char)shouldRepeat;
- (int)transitionForAnimationMovingForward:(char)arg0;
- (void)setShouldPlayMusic:(char)arg0;
- (void)setMusicCollection:(MPMediaItemCollection *)arg0;
- (void)_reloadPhotoDefaultValuesAndNotify:(char)arg0;
- (void)reloadPhotoDefaultValues;
- (char)summarizeMomentSections;
- (MPMediaItemCollection *)musicCollection;

@end
