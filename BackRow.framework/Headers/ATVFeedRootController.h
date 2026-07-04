/* Runtime dump - ATVFeedRootController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@protocol BRMercantile;

@class ATVFeedMerchant, BRMerchant;
@interface ATVFeedRootController : BRViewController <BRMercantile>
{
    ATVFeedMerchant * _merchant;
    NSTimer * _waitTimer;
    NSString * _url;
    NSString * _preflightScript;
}

@property (copy, nonatomic) NSString * url;
@property (copy, nonatomic) NSString * preflightScript;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (retain, nonatomic) BRMerchant * merchant;

+ (ATVFeedRootController *)controllerWithMerchant:(BRMerchant *)arg0;

- (BRMerchant *)merchant;
- (void)wasPushed;
- (void)wasPopped;
- (void)controlWasDeactivated;
- (void)setMerchant:(BRMerchant *)arg0;
- (void)wasExhumed;
- (char)isNetworkDependent;
- (char)showsHeader;
- (void)_showWaitTimer:(NSObject *)arg0;
- (ATVFeedRootController *)initWithMerchant:(BRMerchant *)arg0;
- (NSString *)preflightScript;
- (void)_readJavaScriptConfig:(NSObject *)arg0;
- (void)setPreflightScript:(NSString *)arg0;
- (void)dealloc;
- (NSString *)url;
- (void)setUrl:(NSString *)arg0;

@end
