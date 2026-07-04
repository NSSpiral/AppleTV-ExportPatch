/* Runtime dump - MPPlaybackTitlesView
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPPlaybackTitlesView : UIControl
{
    UIView * _contentView;
    NSArray * _labels;
    NSArray * _titles;
    char _showingLoadingUI;
    unsigned int _marqueeScrollableIndex;
    char _marqueeScrollingActive;
}

@property (retain, nonatomic) NSArray * titles;
@property (nonatomic) char showingLoadingUI;
@property (nonatomic) char marqueeScrollingActive;
@property (nonatomic) unsigned int marqueeScrollableIndex;
@property (readonly, nonatomic) UIView * contentView;

- (void)_applicationDidEnterBackgroundNotification:(NSNotification *)arg0;
- (NSString *)_addLabel:(unsigned int)arg0;
- (void)_applicationDidBecomeActiveNotification:(NSNotification *)arg0;
- (void)_layoutLoadingUI;
- (void)_layoutLabels;
- (void)_updateLabelMarqueeScrolling;
- (void)_tearDownLabels;
- (char)showingLoadingUI;
- (NSString *)_addLoadingLabel;
- (unsigned int)marqueeScrollableIndex;
- (char)marqueeScrollingActive;
- (void)setMarqueeScrollingActive:(char)arg0;
- (void)setMarqueeScrollableIndex:(unsigned int)arg0;
- (void)setShowingLoadingUI:(char)arg0;
- (MPPlaybackTitlesView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (MPPlaybackTitlesView *)init;
- (void)layoutSubviews;
- (UIView *)contentView;
- (void)setTitles:(NSArray *)arg0;
- (NSArray *)titles;
- (void).cxx_destruct;

@end
