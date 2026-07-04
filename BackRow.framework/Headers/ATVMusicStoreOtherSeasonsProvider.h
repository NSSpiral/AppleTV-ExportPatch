/* Runtime dump - ATVMusicStoreOtherSeasonsProvider
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRProvider;

@class ATVMusicStoreOtherSeasonsControlFactory;
@interface ATVMusicStoreOtherSeasonsProvider : NSObject <BRProvider>
{
    NSDictionary * _catalogItem;
    ATVMusicStoreOtherSeasonsControlFactory * _factory;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)providerWithCatalogItem:(NSDictionary *)arg0;

- (long)dataCount;
- (id /* <BRControlFactory> */)controlFactory;
- (NSString *)hashForDataAtIndex:(long)arg0;
- (ATVMusicStoreOtherSeasonsProvider *)initWithCatalogItem:(NSDictionary *)arg0;
- (void)dealloc;
- (NSObject *)dataAtIndex:(long)arg0;

@end
