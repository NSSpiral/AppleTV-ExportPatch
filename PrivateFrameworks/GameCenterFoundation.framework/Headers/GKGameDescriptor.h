/* Runtime dump - GKGameDescriptor
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKGameDescriptor : GKInternalRepresentation
{
    NSString * _bundleIdentifier;
    NSString * _bundleVersion;
    NSNumber * _adamID;
    NSNumber * _externalVersion;
}

@property (retain, nonatomic) NSNumber * adamID;
@property (retain, nonatomic) NSNumber * externalVersion;
@property (copy, nonatomic) NSString * bundleIdentifier;
@property (copy, nonatomic) NSString * bundleVersion;

+ (char)supportsSecureCoding;
+ (NSArray *)secureCodedPropertyKeys;
+ (GKGameDescriptor *)gameDescriptorWithBundleID:(NSString *)arg0;
+ (GKGameDescriptor *)gameDescriptorWithBundleID:(NSString *)arg0 adamID:(NSNumber *)arg1;
+ (GKGameDescriptor *)gameDescriptorWithBundleID:(NSString *)arg0 bundleVersion:(NSString *)arg1 adamID:(NSNumber *)arg2;

- (void)dealloc;
- (NSString *)description;
- (GKGameDescriptor *)initWithDictionary:(NSDictionary *)arg0;
- (NSDictionary *)dictionary;
- (NSString *)bundleIdentifier;
- (void)setBundleIdentifier:(NSString *)arg0;
- (NSNumber *)externalVersion;
- (void)setAdamID:(NSNumber *)arg0;
- (void)setExternalVersion:(NSNumber *)arg0;
- (GKGameDescriptor *)initWithPushDictionary:(NSDictionary *)arg0;
- (NSString *)bundleVersion;
- (void)setBundleVersion:(NSString *)arg0;
- (void)setDictionary:(NSMutableDictionary *)arg0;
- (NSNumber *)adamID;

@end
