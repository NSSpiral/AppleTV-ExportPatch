/* Runtime dump - PSDetailController
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSDetailController : PSViewController
{
    PSEditingPane * _pane;
}

@property (nonatomic) PSEditingPane * pane;

- (void)saveChanges;
- (void)dealloc;
- (NSString *)title;
- (void)suspend;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)viewWillAppear:(char)arg0;
- (void)viewDidUnload;
- (void)viewDidAppear:(char)arg0;
- (void)viewWillDisappear:(char)arg0;
- (void)willRotateToInterfaceOrientation:(int)arg0 duration:(double)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg0 duration:(double)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg0;
- (void)setPane:(PSEditingPane *)arg0;
- (PSEditingPane *)pane;
- (void)statusBarWillAnimateByHeight:(float)arg0;
- (struct CGRect)paneFrame;
- (void)loadPane;

@end
