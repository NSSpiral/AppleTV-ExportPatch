/* Runtime dump - ATVNavigationBarController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@protocol ATVNavigationBarPresentationViewDelegate;

@class ATVNavigationBar, ATVNavigationBarPresentationView, BRControl, BRController, BRControllerStack;
@interface ATVNavigationBarController : BRViewController <ATVNavigationBarPresentationViewDelegate>
{
    BRControllerStack * _controllerStack;
    char _navigationBarHidden;
    NSArray * _viewControllers;
    BRController * _selectedViewController;
}

@property (copy, nonatomic) NSArray * viewControllers;
@property (retain, nonatomic) BRController * selectedViewController;
@property (nonatomic) char navigationBarHidden;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (ATVNavigationBarController *)defaultCategoryAttributes;

- (void)_stackWentBankrupt;
- (void)_updateControllerStack;
- (void)navigationBarPresentationViewWillAppear:(ATVNavigationBarPresentationView *)arg0;
- (void)navigationBarPresentationViewWillDisappear:(ATVNavigationBarPresentationView *)arg0;
- (void)dealloc;
- (BRControl *)view;
- (ATVNavigationBar *)navigationBar;
- (char)isNavigationBarHidden;
- (NSArray *)viewControllers;
- (void)setViewControllers:(NSArray *)arg0;
- (void)setNavigationBarHidden:(char)arg0;
- (BRController *)selectedViewController;
- (void)setSelectedViewController:(BRController *)arg0;

@end
