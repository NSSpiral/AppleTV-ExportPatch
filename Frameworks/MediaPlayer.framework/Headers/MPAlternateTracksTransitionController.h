/* Runtime dump - MPAlternateTracksTransitionController
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAlternateTracksTransitionController : MPTransitionController
{
    MPVideoViewController * _videoController;
    UIImageView * _snapshotCoverImageView;
}

@property (weak, nonatomic) MPVideoViewController * videoController;

- (void)performTransition:(unsigned int)arg0;
- (MPVideoViewController *)videoController;
- (void)setVideoController:(MPVideoViewController *)arg0;
- (void).cxx_destruct;

@end
