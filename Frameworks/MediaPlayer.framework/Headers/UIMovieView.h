/* Runtime dump - UIMovieView
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface UIMovieView : MPVideoView

- (unsigned int)playbackState;
- (void)setRepeatMode:(unsigned int)arg0;
- (void)play;
- (CALayer *)avPlayer;
- (unsigned int)playableContentType;
- (void)setCurrentTime:(double)arg0 timeSnapOption:(unsigned int)arg1;
- (unsigned int)bufferingStatusMask;
- (NSObject *)mpavController;
- (void)setCurrentTime:(double)arg0;
- (double)duration;
- (void)stop;
- (void)pause;
- (double)currentTime;

@end
