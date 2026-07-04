/* Runtime dump - LSPlugInKitProxy
 * Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface LSPlugInKitProxy : LSBundleProxy <NSSecureCoding>
{
    NSDictionary * _infoPlist;
    LSBundleProxy * _parentBundle;
    unsigned long _parentBundleID;
    char _isOnSystemPartition;
    NSString * _pluginIdentifier;
    NSString * _protocol;
    NSUUID * _pluginUUID;
    NSDictionary * _pluginKitDictionary;
    NSDate * _registrationDate;
}

@property (readonly, nonatomic) NSString * pluginIdentifier;
@property (readonly, nonatomic) NSString * protocol;
@property (readonly, nonatomic) NSUUID * pluginUUID;
@property (readonly, nonatomic) NSDictionary * pluginKitDictionary;
@property (readonly, nonatomic) NSDictionary * infoPlist;
@property (readonly, nonatomic) NSDate * registrationDate;
@property (readonly, nonatomic) LSBundleProxy * containingBundle;
@property (readonly, nonatomic) char isOnSystemPartition;

+ (LSPlugInKitProxy *)plugInKitProxyForPlugin:(unsigned long)arg0;
+ (LSPlugInKitProxy *)plugInKitProxyForUUID:(id)arg0 bundleIdentifier:(NSString *)arg1 pluginIdentifier:(NSString *)arg2 version:(NSString *)arg3 bundleURL:(NSURL *)arg4;
+ (NSURL *)pluginKitProxyForURL:(NSURL *)arg0;
+ (char)supportsSecureCoding;
+ (NSString *)pluginKitProxyForIdentifier:(NSString *)arg0;
+ (LSPlugInKitProxy *)pluginKitProxyForUUID:(id)arg0;

- (NSURL *)appStoreReceiptURL;
- (LSPlugInKitProxy *)_initWithPlugin:(unsigned long)arg0;
- (LSPlugInKitProxy *)_initWithUUID:(NSUUID *)arg0 bundleIdentifier:(NSString *)arg1 pluginIdentifier:(NSString *)arg2 version:(NSString *)arg3 bundleURL:(NSURL *)arg4;
- (NSUUID *)pluginUUID;
- (NSDate *)registrationDate;
- (char)isOnSystemPartition;
- (void)dealloc;
- (LSPlugInKitProxy *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (id)iconDataForVariant:(int)arg0;
- (NSString *)localizedName;
- (LSBundleProxy *)containingBundle;
- (NSDictionary *)pluginKitDictionary;
- (NSString *)localizedShortName;
- (NSString *)protocol;
- (NSString *)pluginIdentifier;
- (NSDictionary *)infoPlist;

@end
