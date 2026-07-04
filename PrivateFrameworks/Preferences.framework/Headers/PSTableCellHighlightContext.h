/* Runtime dump - PSTableCellHighlightContext
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSTableCellHighlightContext : NSObject
{
    NSTimer * _timer;
    char _animateUnhighlight;
    char _valid;
    UITableViewCell * _cell;
    int _originalSelectionStyle;
}

@property (nonatomic) UITableViewCell * cell;
@property (readonly, nonatomic) char animateUnhighlight;
@property (nonatomic) int originalSelectionStyle;
@property (readonly, nonatomic) char valid;

+ (NSObject *)contextWithCell:(UITableViewCell *)arg0;

- (void)_killTimer;
- (void)dealloc;
- (void)invalidate;
- (UITableViewCell *)cell;
- (char)valid;
- (void)setCell:(UITableViewCell *)arg0;
- (void)_timerFired;
- (void)performHighlightForDuration:(double)arg0 animateUnhighlight:(char)arg1;
- (char)animateUnhighlight;
- (int)originalSelectionStyle;
- (void)setOriginalSelectionStyle:(int)arg0;

@end
