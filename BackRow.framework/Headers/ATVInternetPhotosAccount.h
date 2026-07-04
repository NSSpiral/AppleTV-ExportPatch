/* Runtime dump - ATVInternetPhotosAccount
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVInternetPhotosCollection;
@interface ATVInternetPhotosAccount : NSObject
{
    NSString * _accountName;
    NSString * _accountID;
    NSString * _displayName;
    NSArray * _mediaAssets;
    NSArray * _subAccounts;
    NSArray * _mediaCollections;
    ATVInternetPhotosCollection * _lastModifiedCollection;
    NSDate * _modDate;
    NSDate * _lastCheckedDate;
    NSString * _accountIconPath;
}

+ (NSNumber *)account;

- (NSString *)accountIconPath;
- (ATVInternetPhotosCollection *)lastModifiedCollection;
- (NSArray *)mediaCollections;
- (NSDate *)lastCheckedDate;
- (NSArray *)subAccounts;
- (void)setLastCheckedDate:(NSDate *)arg0;
- (void)setAccountIconPath:(NSString *)arg0;
- (void)setMediaCollections:(NSArray *)arg0;
- (void)setLastModifiedCollection:(ATVInternetPhotosCollection *)arg0;
- (void)setSubAccounts:(NSArray *)arg0;
- (void)dealloc;
- (NSString *)displayName;
- (NSDate *)modDate;
- (void)setModDate:(NSDate *)arg0;
- (void)setAccountName:(NSString *)arg0;
- (NSString *)accountName;
- (NSString *)accountID;
- (void)setDisplayName:(NSString *)arg0;
- (void)setAccountID:(NSString *)arg0;

@end
