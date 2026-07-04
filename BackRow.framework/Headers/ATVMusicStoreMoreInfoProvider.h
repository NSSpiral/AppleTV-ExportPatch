/* Runtime dump - ATVMusicStoreMoreInfoProvider
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRProvider;
@interface ATVMusicStoreMoreInfoProvider : NSObject <BRProvider>
{
    NSDictionary * _catalogItem;
    NSMutableArray * _items;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)providerWithCatalogItem:(NSDictionary *)arg0;

- (long)dataCount;
- (id /* <BRControlFactory> */)controlFactory;
- (NSString *)hashForDataAtIndex:(long)arg0;
- (ATVMusicStoreMoreInfoProvider *)initWithCatalogItem:(NSDictionary *)arg0;
- (void)_loadMoreInfoFromURL:(NSURL *)arg0;
- (void)_loadMoreInfoData;
- (id)_flattenMoreInfoSection:(id)arg0;
- (void)_supplementalResponseReceived:(id)arg0;
- (void)dealloc;
- (NSObject *)dataAtIndex:(long)arg0;

@end
