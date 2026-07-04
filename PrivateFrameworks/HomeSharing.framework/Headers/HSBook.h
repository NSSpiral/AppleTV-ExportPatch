/* Runtime dump - HSBook
 * Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSBook : NSObject <NSSecureCoding>
{
    char _vppLicensed;
    NSString * _title;
    NSString * _author;
    NSString * _genre;
    NSDate * _datePurchased;
    NSURL * _artworkURL;
    NSString * _redownloadParameters;
    NSString * _vppOrganizationID;
    NSString * _vppOrganizationDisplayName;
    unsigned long long _purchaseHistoryID;
    unsigned long long _storeID;
}

@property (nonatomic) unsigned long long purchaseHistoryID;
@property (nonatomic) unsigned long long storeID;
@property (copy, nonatomic) NSString * title;
@property (copy, nonatomic) NSString * author;
@property (copy, nonatomic) NSString * genre;
@property (copy, nonatomic) NSDate * datePurchased;
@property (copy, nonatomic) NSURL * artworkURL;
@property (copy, nonatomic) NSString * redownloadParameters;
@property (nonatomic) char vppLicensed;
@property (copy, nonatomic) NSString * vppOrganizationID;
@property (copy, nonatomic) NSString * vppOrganizationDisplayName;

+ (char)supportsSecureCoding;

- (unsigned long long)storeID;
- (void)setArtworkURL:(NSURL *)arg0;
- (NSURL *)artworkURL;
- (HSBook *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setTitle:(NSString *)arg0;
- (NSString *)description;
- (NSString *)title;
- (void).cxx_destruct;
- (void)setPurchaseHistoryID:(unsigned long long)arg0;
- (void)setRedownloadParameters:(NSString *)arg0;
- (void)setVppLicensed:(char)arg0;
- (void)setVppOrganizationID:(NSString *)arg0;
- (void)setVppOrganizationDisplayName:(NSString *)arg0;
- (unsigned long long)purchaseHistoryID;
- (NSString *)redownloadParameters;
- (NSString *)vppOrganizationID;
- (NSString *)vppOrganizationDisplayName;
- (void)setGenre:(NSString *)arg0;
- (NSString *)genre;
- (void)setAuthor:(NSString *)arg0;
- (NSString *)author;
- (void)setDatePurchased:(NSDate *)arg0;
- (char)isVPPLicensed;
- (void)setStoreID:(unsigned long long)arg0;
- (NSDate *)datePurchased;

@end
