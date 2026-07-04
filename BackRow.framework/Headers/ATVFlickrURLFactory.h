/* Runtime dump - ATVFlickrURLFactory
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVFlickrURLFactory : NSObject

- (NSString *)URLForFindingPersonWithUserName:(NSString *)arg0;
- (NSObject *)URLForInfoAboutUserWithAccountID:(NSObject *)arg0;
- (id)accountIconPathWithIconFarm:(id)arg0 iconServer:(NSObject *)arg1 accountID:(NSString *)arg2;
- (NSObject *)URLForPublicPhotosWithAccountID:(NSObject *)arg0 limit:(int)arg1;
- (NSObject *)URLForFavoritesWithAccountID:(NSObject *)arg0 limit:(int)arg1;
- (NSObject *)URLForPhotosetsWithAccountID:(NSObject *)arg0;
- (NSObject *)URLForContactsWithAccountID:(NSObject *)arg0;
- (id)URLForFindingPhotosWithSearchTerm:(NSString *)arg0;
- (NSString *)URLForPhotosInCollectionWithIdentifier:(NSString *)arg0;
- (NSString *)URLForInfoAboutSizesOfPhotoWithIdentifier:(NSString *)arg0;
- (NSDictionary *)_URLWithParameters:(NSDictionary *)arg0;

@end
