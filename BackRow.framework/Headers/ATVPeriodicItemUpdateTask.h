/* Runtime dump - ATVPeriodicItemUpdateTask
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVURLDocument, BRMerchant;
@interface ATVPeriodicItemUpdateTask : ATVBackgroundTask
{
    NSURL * _url;
    BRMerchant * _merchant;
    <ATVUpdatable> * _updatableItem;
    NSOperationQueue * _callersQueue;
    ATVURLDocument * _currentDocument;
}

@property (retain) NSURL * url;
@property (retain) BRMerchant * merchant;
@property <ATVUpdatable> * updatableItem;

- (BRMerchant *)merchant;
- (void)setMerchant:(BRMerchant *)arg0;
- (ATVPeriodicItemUpdateTask *)initWithType:(int)arg0 interval:(double)arg1 delay:(double)arg2;
- (void)setUpdatableItem:(<ATVUpdatable> *)arg0;
- (void)_urlDocReady:(id)arg0;
- (<ATVUpdatable> *)updatableItem;
- (void)dealloc;
- (NSURL *)url;
- (void)setUrl:(NSURL *)arg0;
- (char)perform;

@end
