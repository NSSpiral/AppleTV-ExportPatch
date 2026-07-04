/* Runtime dump - SSVGratisApplication
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVGratisApplication : NSObject <NSCopying>
{
    NSString * _bundleIdentifier;
    NSString * _bundleVersion;
    NSNumber * _externalVersionIdentifier;
    NSString * _itemIdentifier;
}

@property (copy, nonatomic) NSString * bundleIdentifier;
@property (copy, nonatomic) NSString * bundleVersion;
@property (copy, nonatomic) NSNumber * externalVersionIdentifier;
@property (copy, nonatomic) NSString * itemIdentifier;
@property (readonly, nonatomic) NSDictionary * dictionaryRepresentation;

- (void)setItemIdentifier:(NSString *)arg0;
- (NSString *)bundleIdentifier;
- (SSVGratisApplication *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setBundleIdentifier:(NSString *)arg0;
- (NSString *)bundleVersion;
- (void)setBundleVersion:(NSString *)arg0;
- (NSString *)itemIdentifier;
- (void)setExternalVersionIdentifier:(NSNumber *)arg0;
- (NSNumber *)externalVersionIdentifier;

@end
