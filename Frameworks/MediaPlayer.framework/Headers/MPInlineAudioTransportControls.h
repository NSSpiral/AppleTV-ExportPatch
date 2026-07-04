/* Runtime dump - MPInlineAudioTransportControls
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPInlineAudioTransportControls : MPTransportControls
{
    int _style;
}

- (NSString *)pauseButtonImage;
- (NSString *)playButtonImage;
- (id)buttonImageForPart:(unsigned long long)arg0;
- (id)newVolumeSlider;
- (void)reloadForAdditions:(id)arg0 removals:(id)arg1 animate:(char)arg2;
- (struct CGRect)availableProgressControlAreaFrame;
- (NSObject *)hitTest:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (void)layoutSubviews;
- (MPInlineAudioTransportControls *)initWithFrame:(struct CGRect)arg0 style:(struct CGSize)arg1;

@end
