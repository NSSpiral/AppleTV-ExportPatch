/* Runtime dump - ATVNavigationItemController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class ATVFeedNavigationItemElement, BRController;
@interface ATVNavigationItemController : BRViewController
{
    ATVJSCallback * _lastEvent_ONLY_USE_ON_JSCONTEXT_QUEUE;
    BRController * _childController;
    ATVFeedNavigationItemElement * _navigationItemElement;
    NSDictionary * _titleAttributes;
}

@property (retain, nonatomic) BRController * childController;
@property (retain, nonatomic) ATVFeedNavigationItemElement * navigationItemElement;
@property (retain, nonatomic) NSDictionary * titleAttributes;

- (void)wasPushed;
- (void)wasPopped;
- (void)setTitleAttributes:(NSDictionary *)arg0;
- (NSDictionary *)titleAttributes;
- (void)setNavigationItemElement:(ATVFeedNavigationItemElement *)arg0;
- (BRController *)childController;
- (void)setChildController:(BRController *)arg0;
- (ATVFeedNavigationItemElement *)navigationItemElement;
- (void)_loadChildController;
- (void)_callJavaScriptOnCancelHandler;
- (void)_clearLastEventInContext:(struct OpaqueJSContext *)arg0;
- (void)_presentControllerOrError:(NSError *)arg0;
- (void).cxx_destruct;

@end
