/* Runtime dump - ATVFeedNavigationBarViewController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedController.h>

@protocol ATVFeedControllerJSMessaging;

@class ATVFeedElement, ATVNavigationBarController, BRController;
@interface ATVFeedNavigationBarViewController : ATVFeedController <ATVFeedControllerJSMessaging>
{
    ATVNavigationBarController * _navigationBarController;
    BRController * _selectedController;
}

@property (retain, nonatomic) BRController * selectedController;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)controlWasActivated;
- (ATVFeedNavigationBarViewController *)initWithFeedElement:(ATVFeedElement *)arg0;
- (void)callJavaScriptFunction:(NSString *)arg0 withArguments:(NSArray *)arg1;
- (BRController *)selectedController;
- (void)setSelectedController:(BRController *)arg0;
- (ATVFeedNavigationBarViewController *)initWithDictionary:(NSDictionary *)arg0;
- (void).cxx_destruct;

@end
