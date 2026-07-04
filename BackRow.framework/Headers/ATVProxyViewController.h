/* Runtime dump - ATVProxyViewController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@protocol BRAsynchronousControllerViewLoading;

@class BRMerchant;
@interface ATVProxyViewController : BRViewController <BRAsynchronousControllerViewLoading>
{
    id _loadHandler;
    id _loadCompletionHandler;
    NSTimer * _spinnerTimer;
    char _loadPerformed;
    BRMerchant * _merchant;
    id _cancelHandler;
    int _viewAvailability;
}

@property (retain, nonatomic) BRMerchant * merchant;
@property (copy, nonatomic) id cancelHandler;
@property (nonatomic) int viewAvailability;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (BRMerchant *)merchant;
- (void)wasPushed;
- (void)wasPopped;
- (void)setMerchant:(BRMerchant *)arg0;
- (void)_showSpinner:(id)arg0;
- (void)loadCompleted;
- (ATVProxyViewController *)initWithLoadHandler:(id /* block */)arg0 loadCompletionHandler:(/* block */ id)arg1;
- (int)viewAvailability;
- (void)setViewAvailability:(int)arg0;
- (void)_performLoadCompletion;
- (NSObject *)_waitContent;
- (void)setCancelHandler:(id /* block */)arg0;
- (void)dealloc;
- (id /* block */)cancelHandler;

@end
