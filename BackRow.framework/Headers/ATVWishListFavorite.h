/* Runtime dump - ATVWishListFavorite
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVStoreFavorite.h>
@interface ATVWishListFavorite : ATVStoreFavorite
{
    NSString * _adamID;
}

- (void)encodeWithDictionary:(NSDictionary *)arg0;
- (char)removeUponAcquisition;
- (char)_setupWithCatalogItem:(NSDictionary *)arg0;
- (void)save;
- (void)dealloc;
- (ATVWishListFavorite *)initWithDictionary:(NSDictionary *)arg0;
- (void)remove;
- (unsigned long long)itemID;

@end
