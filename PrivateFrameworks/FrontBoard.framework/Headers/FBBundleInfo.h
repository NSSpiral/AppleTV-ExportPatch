/* Runtime dump - FBBundleInfo
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBBundleInfo : NSObject
{
    LSApplicationProxy * _proxy;
    BSCFBundle * _bundle;
    NSString * _displayName;
    NSString * _bundleIdentifier;
    NSString * _bundleVersion;
    NSString * _bundleType;
    NSURL * _bundleURL;
    NSDictionary * _extendedInfo;
}

@property (copy, nonatomic) NSString * displayName;
@property (copy, nonatomic) NSString * bundleIdentifier;
@property (copy, nonatomic) NSString * bundleVersion;
@property (copy, nonatomic) NSString * bundleType;
@property (retain, nonatomic) NSURL * bundleURL;
@property (copy, nonatomic) NSDictionary * extendedInfo;
@property (readonly, retain, nonatomic) LSApplicationProxy * proxy;
@property (readonly, retain, nonatomic) BSCFBundle * bundle;

- (NSString *)bundleType;
- (void)dealloc;
- (NSString *)bundleIdentifier;
- (NSURL *)bundleURL;
- (NSString *)displayName;
- (void)setDisplayName:(NSString *)arg0;
- (void)setBundleIdentifier:(NSString *)arg0;
- (NSObject<OS_xpc_object> *)_bundle;
- (void)setExtendedInfo:(NSDictionary *)arg0;
- (void)_purgeBundle;
- (FBBundleInfo *)initWithApplicationProxy:(NSString *)arg0;
- (LSApplicationProxy *)_proxy;
- (NSString *)extendedInfoValueForKey:(NSString *)arg0;
- (void)setBundleType:(NSString *)arg0;
- (void)setBundleURL:(NSURL *)arg0;
- (NSDictionary *)extendedInfo;
- (NSString *)bundleVersion;
- (void)setBundleVersion:(NSString *)arg0;

@end
