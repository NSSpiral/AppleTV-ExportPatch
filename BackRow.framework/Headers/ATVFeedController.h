/* Runtime dump - ATVFeedController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@protocol ATVUpdatable;

@class ATVFeedDocument, ATVFeedRootElement, ATVMerchant, BREvent;
@interface ATVFeedController : BRViewController <ATVUpdatable>
{
    ATVBackgroundTask * _updateTask;
    char _everWasActivated;
    char _isVolatile;
    char _isDirty;
    NSString * _onReload;
    NSString * _onRefresh;
    ATVMerchant * _merchant;
    NSDictionary * _data;
    ATVFeedRootElement * _feedElement;
    NSURL * _currentURL;
    ATVFeedDocument * _feedDocument;
}

@property (readonly) NSString * _inlineJavaScriptSourceURL;
@property (retain) ATVMerchant * merchant;
@property (retain) NSDictionary * data;
@property (retain) ATVFeedRootElement * feedElement;
@property (retain) NSURL * currentURL;
@property (retain) ATVFeedDocument * feedDocument;

- (char)brEventAction:(BREvent *)arg0;
- (ATVMerchant *)merchant;
- (void)controlWasDeactivated;
- (void)controlWasActivated;
- (void)setMerchant:(ATVMerchant *)arg0;
- (void)markAsDirty;
- (char)isNetworkDependent;
- (ATVFeedController *)initWithFeedElement:(ATVFeedRootElement *)arg0;
- (void)_updateWithFeedElement:(ATVFeedRootElement *)arg0 loadType:(int)arg1;
- (void)_updateWithPropertyList:(NSDictionary *)arg0 loadType:(int)arg1;
- (ATVFeedRootElement *)feedElement;
- (void)_cancelUpdateTask;
- (void)setCurrentURL:(NSURL *)arg0;
- (ATVFeedDocument *)feedDocument;
- (NSString *)_inlineJavaScriptSourceURL;
- (char)_canHandleUpdateWithPropertyList:(NSDictionary *)arg0 loadType:(int)arg1;
- (char)_canHandleUpdateWithFeedElement:(ATVFeedRootElement *)arg0 loadType:(int)arg1;
- (void)_handleWindowMaxBoundsChanged;
- (void)_handleUpdateWithPropertyList:(NSDictionary *)arg0 loadType:(int)arg1;
- (void)_handleUpdateWithFeedElement:(ATVFeedRootElement *)arg0 loadType:(int)arg1;
- (void)_markAsDirtyAndReloadIfActive;
- (void)setFeedElement:(ATVFeedRootElement *)arg0;
- (void)_purchaseAcquired:(id)arg0;
- (ATVFeedController *)_initWithMerchant:(ATVMerchant *)arg0;
- (NSURL *)currentURL;
- (void)_updateRefreshIntervalWithDelay:(char)arg0;
- (void)_reloadPage;
- (void)updateWithPropertyList:(NSDictionary *)arg0;
- (void)updateWithFeedElement:(ATVFeedRootElement *)arg0;
- (void)setFeedDocument:(ATVFeedDocument *)arg0;
- (void)dealloc;
- (ATVFeedController *)initWithDictionary:(NSDictionary *)arg0;
- (NSDictionary *)data;
- (void)setData:(NSDictionary *)arg0;

@end
