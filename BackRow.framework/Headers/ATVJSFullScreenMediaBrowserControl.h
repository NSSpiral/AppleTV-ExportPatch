/* Runtime dump - ATVJSFullScreenMediaBrowserControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVFullScreenPhotoBrowserController, ATVJSContext, ATVMerchant;
@interface ATVJSFullScreenMediaBrowserControl : NSObject
{
    ATVFullScreenPhotoBrowserController * _controller;
    id _jsInfo;
    ATVJSContext * _context;
    ATVMerchant * _merchant;
    int _type;
}

@property (retain) id jsInfo;
@property (readonly, nonatomic) ATVJSContext * context;
@property (retain, nonatomic) ATVMerchant * merchant;
@property (nonatomic) int type;
@property (retain, nonatomic) ATVFullScreenPhotoBrowserController * controller;

- (ATVMerchant *)merchant;
- (void)setMerchant:(ATVMerchant *)arg0;
- (void)setJsInfo:(NSDictionary *)arg0;
- (NSDictionary *)jsInfo;
- (void)selectItemAtIndex:(int)arg0;
- (void)showWithType:(int)arg0 couplingObject:(NSObject *)arg1 callback:(struct OpaqueJSValue *)arg2 propertyCallback:(/* block */ id)arg3 completionCallback:(id /* block */)arg4;
- (void)updateItems:(NSArray *)arg0 initialSelection:(int)arg1;
- (void)updateItemMetadata:(NSData *)arg0 forPhotoWithID:(int)arg1;
- (void)updateItemMetadataLiked:(id)arg0 forPhotoWithID:(int)arg1;
- (void)hide;
- (void)dealloc;
- (void)setType:(int)arg0;
- (int)type;
- (ATVJSContext *)context;
- (ATVJSFullScreenMediaBrowserControl *)initWithContext:(ATVJSContext *)arg0;
- (ATVFullScreenPhotoBrowserController *)controller;
- (void)setController:(ATVFullScreenPhotoBrowserController *)arg0;

@end
