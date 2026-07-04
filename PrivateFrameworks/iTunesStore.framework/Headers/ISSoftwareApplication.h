/* Runtime dump - ISSoftwareApplication
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISSoftwareApplication : NSObject <SSXPCCoding>
{
    NSNumber * _accountDSID;
    NSString * _accountIdentifier;
    char _beta;
    NSString * _bundleIdentifier;
    NSString * _bundleShortVersionString;
    NSString * _bundleVersion;
    NSString * _containerPath;
    SSItemContentRating * _contentRating;
    NSString * _deviceIdentifierForVendor;
    NSNumber * _familyAccountIdentifier;
    NSNumber * _itemIdentifier;
    NSString * _itemName;
    char _placeholder;
    char _profileValidated;
    NSString * _softwareType;
    NSNumber * _storeFrontIdentifier;
    NSString * _vendorName;
    NSNumber * _versionIdentifier;
    NSArray * _versionOrdering;
    NSDate * _receiptExpirationDate;
    unsigned int _vppStateFlags;
}

@property (retain, nonatomic) NSNumber * accountDSID;
@property (copy, nonatomic) NSString * accountIdentifier;
@property (nonatomic) char beta;
@property (copy, nonatomic) NSString * bundleIdentifier;
@property (copy, nonatomic) NSString * bundleShortVersionString;
@property (copy, nonatomic) NSString * bundleVersion;
@property (copy, nonatomic) NSString * containerPath;
@property (copy, nonatomic) SSItemContentRating * contentRating;
@property (copy, nonatomic) NSString * deviceIdentifierForVendor;
@property (copy, nonatomic) NSNumber * familyAccountIdentifier;
@property (retain, nonatomic) NSNumber * itemIdentifier;
@property (copy, nonatomic) NSString * itemName;
@property (nonatomic) char placeholder;
@property (nonatomic) char profileValidated;
@property (copy, nonatomic) NSString * softwareType;
@property (retain, nonatomic) NSNumber * storeFrontIdentifier;
@property (copy, nonatomic) NSString * vendorName;
@property (retain, nonatomic) NSNumber * versionIdentifier;
@property (copy, nonatomic) NSArray * versionOrdering;
@property (readonly, nonatomic) NSDate * receiptExpirationDate;
@property (readonly, nonatomic) unsigned int vppStateFlags;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSNumber *)storeFrontIdentifier;
- (void)setItemIdentifier:(NSNumber *)arg0;
- (NSDictionary *)copyXPCEncoding;
- (ISSoftwareApplication *)initWithXPCEncoding:(NSString *)arg0;
- (void)setAccountIdentifier:(NSString *)arg0;
- (NSString *)vendorName;
- (NSString *)itemName;
- (void)dealloc;
- (NSString *)description;
- (NSString *)bundleIdentifier;
- (void)setPlaceholder:(char)arg0;
- (NSString *)deviceIdentifierForVendor;
- (NSNumber *)accountDSID;
- (void)setAccountDSID:(NSNumber *)arg0;
- (void)setBundleIdentifier:(NSString *)arg0;
- (NSString *)accountIdentifier;
- (NSString *)bundleVersion;
- (void)setBundleVersion:(NSString *)arg0;
- (char)isPlaceholder;
- (SSItemContentRating *)contentRating;
- (void)setContentRating:(SSItemContentRating *)arg0;
- (NSNumber *)itemIdentifier;
- (NSString *)softwareType;
- (void)setStoreFrontIdentifier:(NSNumber *)arg0;
- (char)isBeta;
- (void)setBeta:(char)arg0;
- (char)isProfileValidated;
- (void)setProfileValidated:(char)arg0;
- (NSNumber *)versionIdentifier;
- (NSString *)bundleShortVersionString;
- (ISSoftwareApplication *)initWithLaunchServicesApplication:(id)arg0 containerPath:(NSString *)arg1;
- (void)setBundleShortVersionString:(NSString *)arg0;
- (void)setContainerPath:(NSString *)arg0;
- (void)_loadMetadataFromContainer:(NSObject *)arg0;
- (NSString *)containerPath;
- (void)setItemName:(NSString *)arg0;
- (void)setSoftwareType:(NSString *)arg0;
- (void)setVersionIdentifier:(NSNumber *)arg0;
- (void)setVersionOrdering:(NSArray *)arg0;
- (NSNumber *)familyAccountIdentifier;
- (void)setFamilyAccountIdentifier:(NSNumber *)arg0;
- (ISSoftwareApplication *)initWithLaunchServicesApplication:(id)arg0;
- (void)resetVPPStateFlags;
- (unsigned int)vppStateFlags;
- (NSDictionary *)ITunesMetadataDictionary;
- (void)setDeviceIdentifierForVendor:(NSString *)arg0;
- (void)setVendorName:(NSString *)arg0;
- (NSArray *)versionOrdering;
- (NSDate *)receiptExpirationDate;

@end
