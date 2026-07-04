/* Runtime dump - LSBundleProxy
 * Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface LSBundleProxy : LSResourceProxy
{
    unsigned int _bundleFlags;
    unsigned int _plistContentFlags;
    NSURL * _bundleURL;
    NSURL * _appStoreReceiptURL;
    NSString * _localizedShortName;
    NSString * _bundleExecutable;
    NSString * _bundleVersion;
    NSString * _bundleType;
    NSString * _signerIdentity;
    NSDictionary * _entitlements;
    NSDictionary * _environmentVariables;
    NSDictionary * _groupContainerURLs;
    NSUUID * _cacheGUID;
    NSArray * _machOUUIDs;
    char _foundBackingBundle;
    unsigned int _sequenceNumber;
}

@property (readonly, nonatomic) NSString * bundleIdentifier;
@property (readonly, nonatomic) NSString * bundleType;
@property (readonly, nonatomic) NSString * localizedShortName;
@property (readonly, nonatomic) NSURL * bundleURL;
@property (readonly, nonatomic) NSString * bundleExecutable;
@property (readonly, nonatomic) NSURL * containerURL;
@property (readonly, nonatomic) NSURL * dataContainerURL;
@property (readonly, nonatomic) NSURL * bundleContainerURL;
@property (readonly, nonatomic) NSURL * appStoreReceiptURL;
@property (readonly, nonatomic) NSString * bundleVersion;
@property (readonly, nonatomic) NSString * signerIdentity;
@property (readonly, nonatomic) NSDictionary * entitlements;
@property (readonly, nonatomic) NSDictionary * environmentVariables;
@property (readonly, nonatomic) NSDictionary * groupContainerURLs;
@property (readonly, nonatomic) char foundBackingBundle;
@property (readonly, nonatomic) NSUUID * cacheGUID;
@property (readonly, nonatomic) unsigned int sequenceNumber;
@property (readonly, nonatomic) NSArray * machOUUIDs;

+ (NSURL *)bundleProxyForURL:(NSURL *)arg0;
+ (NSString *)bundleProxyForIdentifier:(NSString *)arg0;

- (NSURL *)appStoreReceiptURL;
- (NSDictionary *)groupContainerURLs;
- (NSURL *)containerURL;
- (unsigned char)_createContext:(struct LSContext *)arg0 andGetBundle:(NSObject *)arg1 withData:(unsigned int *)arg2;
- (NSString *)_plistValueForKey:(NSString *)arg0;
- (NSString *)bundleType;
- (LSBundleProxy *)_initWithBundleUnit:(unsigned long)arg0 bundleType:(unsigned int)arg1 BundleID:(NSString *)arg2 localizedName:(NSString *)arg3 bundleContainerURL:(NSURL *)arg4 dataContainerURL:(NSURL *)arg5 resourcesDirectoryURL:(NSURL *)arg6 iconsDictionary:(NSDictionary *)arg7 iconFileNames:(id)arg8 version:(NSString *)arg9;
- (NSURL *)bundleContainerURL;
- (void)setLocalizedShortName:(NSString *)arg0;
- (NSString *)signerIdentity;
- (NSDictionary *)environmentVariables;
- (NSUUID *)cacheGUID;
- (NSArray *)machOUUIDs;
- (NSString *)bundleExecutable;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)bundleIdentifier;
- (NSURL *)bundleURL;
- (NSString *)localizedShortName;
- (NSURL *)dataContainerURL;
- (NSDictionary *)entitlements;
- (NSString *)bundleVersion;
- (unsigned int)sequenceNumber;
- (char)foundBackingBundle;

@end
