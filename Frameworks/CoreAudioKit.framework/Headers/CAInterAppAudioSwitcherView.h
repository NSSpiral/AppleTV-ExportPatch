/* Runtime dump - CAInterAppAudioSwitcherView
 * Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

@interface CAInterAppAudioSwitcherView : UIView <UIScrollViewDelegate>
{
    struct OpaqueAudioComponentInstance * outputUnit;
    CAIAANodeContainer * nodeView;
    UIPageControl * pageControl;
    CAIAANodeInfo * info;
    NSTimer * refreshTimer;
    char showingAppNames;
    char isHostConnected;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property char showingAppNames;

- (void)audioUnitPropertyChangedListener:(void *)arg0 unit:(struct OpaqueAudioComponentInstance *)arg1 propID:(unsigned long)arg2 scope:(unsigned long)arg3 element:(unsigned long)arg4;
- (void)appHasGoneInBackground;
- (void)appHasGoneForeground;
- (char)isHostConnected;
- (void)setOutputAudioUnit:(struct OpaqueAudioComponentInstance *)arg0;
- (void)nodePressed:(id)arg0;
- (void)changePage:(id)arg0;
- (void)updateNodeList;
- (char)isShowingAppNames;
- (void)setShowingAppNames:(char)arg0;
- (CAInterAppAudioSwitcherView *)initWithFrame:(struct CGRect)arg0;
- (CAInterAppAudioSwitcherView *)initWithCoder:(NSCoder *)arg0;
- (void)layoutSubviews;
- (void)removeFromSuperview;
- (void)scrollViewDidEndDecelerating:(UIScrollView *)arg0;
- (void)initialize;
- (void)didMoveToSuperview;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (float)contentWidth;
- (void)startTimer;
- (void)updateInfo;

@end
