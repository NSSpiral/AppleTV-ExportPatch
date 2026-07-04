/* Runtime dump - PKPlugInCore
 * Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
 */

@interface PKPlugInCore : NSObject
{
    char _onSystemVolume;
    NSDictionary * _topDictionary;
    NSDictionary * _plugInDictionary;
    NSString * _identifier;
    NSURL * _url;
    NSURL * _containingUrl;
    NSDictionary * _bundleInfoDictionary;
    unsigned int _hubProtocolVersion;
    NSString * _localizedName;
    NSString * _localizedShortName;
    NSString * _localizedContainingName;
    NSDictionary * _annotations;
    long _lastModified;
    NSUUID * _uuid;
    NSData * _cdhash;
    NSString * _requirement;
}

@property (readonly) char oldStyle;
@property (retain) NSString * identifier;
@property (retain) NSURL * url;
@property (retain) NSURL * containingUrl;
@property (readonly) NSString * path;
@property (readonly) NSString * containingPath;
@property char onSystemVolume;
@property (retain) NSDictionary * bundleInfoDictionary;
@property (retain) NSDictionary * topDictionary;
@property (retain) NSDictionary * plugInDictionary;
@property (readonly) NSDictionary * attributes;
@property (readonly) NSString * version;
@property (readonly) id protocolSpec;
@property unsigned int hubProtocolVersion;
@property (readonly) NSString * sdkSpec;
@property (retain) NSString * localizedName;
@property (retain) NSString * localizedShortName;
@property (retain) NSString * localizedContainingName;
@property (retain) NSDictionary * annotations;
@property long lastModified;
@property (readonly) NSDate * timestamp;
@property (retain) NSUUID * uuid;
@property (retain) NSData * cdhash;
@property (retain) NSString * requirement;
@property (readonly) BOOL isAppExtension;
@property (readonly) BOOL isMultiplexed;
@property (readonly) BOOL isHybrid;
@property (readonly) BOOL isDedicated;
@property (readonly) BOOL isData;

+ (NSDictionary *)readSDKDictionary:(NSDictionary *)arg0;

- (void)setLastModified:(long)arg0;
- (NSDictionary *)annotations;
- (void)setLocalizedShortName:(NSString *)arg0;
- (PKPlugInCore *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSDate *)timestamp;
- (NSURL *)url;
- (NSString *)identifier;
- (NSString *)path;
- (void)setIdentifier:(NSString *)arg0;
- (NSString *)localizedName;
- (void)setUrl:(NSURL *)arg0;
- (NSString *)version;
- (NSDictionary *)attributes;
- (void).cxx_destruct;
- (NSUUID *)uuid;
- (NSString *)localizedShortName;
- (NSURL *)containingUrl;
- (NSDictionary *)bundleInfoDictionary;
- (void)setLocalizedName:(NSString *)arg0;
- (void)setUuid:(NSUUID *)arg0;
- (PKPlugInCore *)initWithForm:(DOMHTMLFormElement *)arg0;
- (void)setAnnotation:(NSObject *)arg0 value:(NSObject *)arg1;
- (BOOL)isData;
- (id)diagnose;
- (NSObject *)protocolSpec;
- (id)augmentInterface:(id)arg0;
- (unsigned int)hubProtocolVersion;
- (char)onSystemVolume;
- (NSDictionary *)plugInDictionary;
- (NSString *)localizedContainingName;
- (void)updateFromForm:(id)arg0;
- (BOOL)setupWithName:(NSString *)arg0 url:(NSURL *)arg1 bundleInfo:(NSDictionary *)arg2 info:(NSDictionary *)arg3 uuid:(NSUUID *)arg4;
- (BOOL)setupWithForm:(DOMHTMLFormElement *)arg0;
- (NSDictionary *)normalizeInfoDictionary:(NSDictionary *)arg0;
- (char)setDictionaries:(id)arg0;
- (NSDictionary *)topDictionary;
- (NSObject *)newPlugInKitDictionaryFrom:(NSObject *)arg0;
- (NSObject *)newAttributesFrom:(NSObject *)arg0;
- (NSObject *)newMultiplesFrom:(NSObject *)arg0;
- (void)setHubProtocolVersion:(unsigned int)arg0;
- (void)setCdhash:(NSData *)arg0;
- (void)setRequirement:(NSString *)arg0;
- (void)setContainingUrl:(NSURL *)arg0;
- (void)setOnSystemVolume:(char)arg0;
- (void)setAnnotations:(NSDictionary *)arg0;
- (void)setLocalizedContainingName:(NSString *)arg0;
- (void)setPlugInDictionary:(NSDictionary *)arg0;
- (BOOL)isAppExtension;
- (NSString *)sdkSpec;
- (NSDictionary *)mergeDictionary:(NSDictionary *)arg0 into:(id)arg1;
- (void)canonicalize;
- (char)sdkOverridesKey:(NSString *)arg0;
- (NSArray *)mergeSharedResources:(NSArray *)arg0 into:(id)arg1;
- (NSString *)containingPath;
- (BOOL)isHybrid;
- (void)setBundleInfoDictionary:(NSDictionary *)arg0;
- (void)setTopDictionary:(NSDictionary *)arg0;
- (PKPlugInCore *)initWithName:(NSString *)arg0 url:(NSURL *)arg1 bundleInfo:(NSDictionary *)arg2 info:(NSDictionary *)arg3 uuid:(NSUUID *)arg4;
- (void)resolveSDK;
- (id)export:(id *)arg0;
- (char)oldStyle;
- (NSString *)embeddedCodePath;
- (NSObject *)embeddedProtocolSpec;
- (BOOL)isMultiplexed;
- (BOOL)isDedicated;
- (NSData *)cdhash;
- (NSString *)requirement;
- (long)lastModified;

@end
