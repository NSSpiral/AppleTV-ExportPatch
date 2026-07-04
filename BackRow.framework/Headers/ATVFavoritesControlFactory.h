/* Runtime dump - ATVFavoritesControlFactory
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRControlFactory;
@protocol BRControlHeightFactory;

@class BRControl;
@interface ATVFavoritesControlFactory : NSObject <BRControlFactory, BRControlHeightFactory>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (ATVFavoritesControlFactory *)factory;

- (BRControl *)controlForData:(NSData *)arg0 currentControl:(BRControl *)arg1 requestedBy:(BRControl *)arg2;
- (NSObject *)_menuItemForFavoriteItem:(NSObject *)arg0 currentControl:(BRControl *)arg1 requestedBy:(NSObject *)arg2;
- (NSObject *)_previewForFavoriteItem:(NSObject *)arg0 currentControl:(BRControl *)arg1 requestedBy:(NSObject *)arg2;
- (float)heightForControlForData:(NSData *)arg0 requestedBy:(BRControl *)arg1;
- (id)_placeholderImageForFavorite:(id)arg0;
- (id)_collectionTypeForFavorite:(id)arg0;

@end
