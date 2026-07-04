/* Runtime dump - ATVMusicStoreFavoriteListItemProvider
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRProvider;

@class ATVFavoritesControlFactory;
@interface ATVMusicStoreFavoriteListItemProvider : NSObject <BRProvider>
{
    ATVFavoritesControlFactory * _factory;
    NSDictionary * _catalogItem;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)providerWithCatalogItem:(NSDictionary *)arg0;

- (long)dataCount;
- (id /* <BRControlFactory> */)controlFactory;
- (NSString *)hashForDataAtIndex:(long)arg0;
- (ATVMusicStoreFavoriteListItemProvider *)initWithCatalogItem:(NSDictionary *)arg0;
- (void)dealloc;
- (NSObject *)dataAtIndex:(long)arg0;

@end
