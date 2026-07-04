/* Runtime dump - ATVNavigationBarPresentationView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@protocol BRViewHosting;

@class ATVNavigationBar, BRControl, BREvent, BRImageControl;
@interface ATVNavigationBarPresentationView : BRControl <BRViewHosting>
{
    BRImageControl * _topPanelShadow;
    BRControl * _container;
    BRControl * _bottomFader;
    char _topPanelInPopUp;
    ATVNavigationBar * _navigationBar;
    <ATVNavigationBarPresentationViewDelegate> * _delegate;
}

@property (nonatomic) <ATVNavigationBarPresentationViewDelegate> * delegate;
@property (retain, nonatomic) BRControl * content;
@property (retain, nonatomic) ATVNavigationBar * navigationBar;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)brEventAction:(BREvent *)arg0;
- (void)layoutSubcontrols;
- (void)controlWasFocused;
- (void)_updateRepositioning;
- (id)ContentViewAvailibilityBinding;
- (void)updateBoundContentViewAvailibility;
- (char)_currentContentHasHeader;
- (NSObject *)_findCursor:(NSObject *)arg0;
- (void)updateViewLayout;
- (char)_canShowTopPanelInPopUp;
- (void)hostControl:(BRControl *)arg0;
- (void)bindContentViewAvailibilityBindingToObject:(NSObject *)arg0 withKeyPath:(NSString *)arg1 options:(NSDictionary *)arg2;
- (void)focusDirectlyOnControl:(BRControl *)arg0;
- (void)dealloc;
- (void)setDelegate:(<ATVNavigationBarPresentationViewDelegate> *)arg0;
- (ATVNavigationBarPresentationView *)init;
- (<ATVNavigationBarPresentationViewDelegate> *)delegate;
- (ATVNavigationBar *)navigationBar;
- (void)setNavigationBar:(ATVNavigationBar *)arg0;
- (BRControl *)content;
- (void)setContent:(BRControl *)arg0;

@end
