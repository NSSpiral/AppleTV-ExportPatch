/* Runtime dump - MPAVRoutingSheet
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVRoutingSheet : UIView <MPAVRoutingViewControllerDelegate>
{
    UIWindow * _presentationWindow;
    UIView * _backgroundView;
    UIView * _controlsView;
    UIButton * _cancelButton;
    MPAVRoutingViewController * _routingViewController;
    id _completionHandler;
}

@property (nonatomic) unsigned int avItemType;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)_cancelButtonAction:(NSObject *)arg0;
- (MPAVRoutingSheet *)initWithAVItemType:(unsigned int)arg0;
- (void)showInView:(NSObject *)arg0 withCompletionHandler:(id /* block */)arg1;
- (void)routingViewController:(MPAVRoutingViewController *)arg0 didPickRoute:(id)arg1;
- (void)routingViewControllerDidUpdateContents:(id)arg0;
- (void)routingViewControllerDidShowAirPlayDebugScreen:(NSObject *)arg0;
- (void)setAVItemType:(unsigned int)arg0;
- (unsigned int)avItemType;
- (struct CGRect)_routingViewFrame;
- (struct CGRect)_cancelButtonFrame;
- (struct CGRect)_controlsViewFrame;
- (void)_updateRoutingSheetFrame;
- (void)_animateControls:(char)arg0 withCompletionHandler:(id /* block */)arg1;
- (struct CGSize)_maxRoutingViewSize;
- (MPAVRoutingSheet *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (void)dismiss;
- (void).cxx_destruct;

@end
