/* Runtime dump - ATVMusicStoreJaliscoProvider
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRControlFactory;
@protocol BRProvider;
@protocol BRSelectionHandler;

@class BRControl;
@interface ATVMusicStoreJaliscoProvider : NSObject <BRControlFactory, BRSelectionHandler, BRProvider>
{
    NSDictionary * _catalogItem;
    NSNumber * _albumPID;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)providerWithCatalogItem:(NSDictionary *)arg0;

- (long)dataCount;
- (char)handleSelectionForControl:(BRControl *)arg0;
- (id /* <BRControlFactory> */)controlFactory;
- (NSString *)hashForDataAtIndex:(long)arg0;
- (BRControl *)controlForData:(NSData *)arg0 currentControl:(BRControl *)arg1 requestedBy:(BRControl *)arg2;
- (ATVMusicStoreJaliscoProvider *)initWithCatalogItem:(NSDictionary *)arg0;
- (id)MusicSyncStatusBinding;
- (void)updateBoundMusicSyncStatus;
- (void)bindMusicSyncStatusBindingToObject:(NSObject *)arg0 withKeyPath:(NSString *)arg1 options:(NSDictionary *)arg2;
- (void)_doQueryForAlbumID;
- (NSObject *)_menuItemForCatalogItem:(NSObject *)arg0;
- (NSObject *)_previewForCatalogItem:(NSObject *)arg0;
- (NSObject *)_collectionDataItem;
- (void)dealloc;
- (void).cxx_destruct;
- (NSObject *)dataAtIndex:(long)arg0;

@end
