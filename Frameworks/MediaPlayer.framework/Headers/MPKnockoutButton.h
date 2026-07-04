/* Runtime dump - MPKnockoutButton
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPKnockoutButton : MPButton

+ (NSObject *)easyTouchButtonWithType:(int)arg0;

- (void)_updateSelected:(char)arg0 highlighted:(char)arg1;
- (char)_drawingAsSelected;
- (void)_updateForStateChangeAnimated:(char)arg0;
- (void)didMoveToSuperview;
- (void)setHighlighted:(char)arg0;
- (void)setSelected:(char)arg0;

@end
