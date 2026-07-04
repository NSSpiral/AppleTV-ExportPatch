/* Runtime dump - ATVMusicStoreRadioLinkProvider
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRMetadataProvider;

@class ATVMusicStoreRadioLinkControlFactory, BRControl;
@interface ATVMusicStoreRadioLinkProvider : NSObject <BRMetadataProvider>
{
    NSDictionary * _catalogItem;
    ATVMusicStoreRadioLinkControlFactory * _factory;
}

@property (copy, nonatomic) NSDictionary * catalogItem;
@property (retain, nonatomic) ATVMusicStoreRadioLinkControlFactory * factory;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)providerWithCatalogItem:(NSDictionary *)arg0;

- (long)dataCount;
- (id /* <BRControlFactory> */)controlFactory;
- (NSString *)hashForDataAtIndex:(long)arg0;
- (ATVMusicStoreRadioLinkProvider *)initWithCatalogItem:(NSDictionary *)arg0;
- (void)populateMetadataForControl:(BRControl *)arg0;
- (NSDictionary *)catalogItem;
- (void)setCatalogItem:(NSDictionary *)arg0;
- (void)_populateAlbumDetails:(id)arg0;
- (void)setFactory:(ATVMusicStoreRadioLinkControlFactory *)arg0;
- (ATVMusicStoreRadioLinkControlFactory *)factory;
- (void).cxx_destruct;
- (NSObject *)dataAtIndex:(long)arg0;

@end
