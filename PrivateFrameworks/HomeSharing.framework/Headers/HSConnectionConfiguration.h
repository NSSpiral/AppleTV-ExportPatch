/* Runtime dump - HSConnectionConfiguration
 * Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSConnectionConfiguration : NSObject <NSSecureCoding, NSCopying>
{
    SSAccount * _account;
    NSURL * _baseURL;
    NSString * _libraryBagKey;
    NSString * _buildIdentifier;
    NSString * _purchaseClientIdentifier;
    NSNumber * _familyMemberStoreID;
    long long _requestReason;
}

@property (retain, nonatomic) SSAccount * account;
@property (copy, nonatomic) NSURL * baseURL;
@property (copy, nonatomic) NSString * libraryBagKey;
@property (copy, nonatomic) NSString * buildIdentifier;
@property (copy, nonatomic) NSString * purchaseClientIdentifier;
@property (nonatomic) long long requestReason;
@property (retain, nonatomic) NSNumber * familyMemberStoreID;

+ (char)supportsSecureCoding;

- (HSConnectionConfiguration *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (HSConnectionConfiguration *)init;
- (HSConnectionConfiguration *)copyWithZone:(struct _NSZone *)arg0;
- (NSURL *)baseURL;
- (void).cxx_destruct;
- (SSAccount *)account;
- (void)setAccount:(SSAccount *)arg0;
- (void)setBaseURL:(NSURL *)arg0;
- (NSString *)libraryBagKey;
- (void)setLibraryBagKey:(NSString *)arg0;
- (NSString *)buildIdentifier;
- (void)setBuildIdentifier:(NSString *)arg0;
- (NSString *)purchaseClientIdentifier;
- (void)setPurchaseClientIdentifier:(NSString *)arg0;
- (long long)requestReason;
- (void)setRequestReason:(long long)arg0;
- (NSNumber *)familyMemberStoreID;
- (void)setFamilyMemberStoreID:(NSNumber *)arg0;

@end
