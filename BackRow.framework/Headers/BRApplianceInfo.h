/* Runtime dump - BRApplianceInfo
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface BRApplianceInfo : NSObject
{
    NSDictionary * _info;
}

@property (readonly) char primaryAppliance;
@property (readonly, retain) NSString * key;
@property (readonly, retain) NSString * merchantIdentifier;
@property (readonly, retain) NSString * name;
@property (readonly) float preferredOrder;
@property (readonly, retain) NSSet * supportedMediaTypes;
@property (readonly, retain) NSSet * requiredRemoteMediaTypes;
@property (readonly, retain) NSString * localizedStringsFileName;
@property (readonly, retain) NSString * principalClassName;
@property (readonly, retain) NSString * topShelfControllerClassName;
@property (readonly, retain) NSArray * applianceCategoryDescriptors;
@property (readonly) char hideIfNoCategories;
@property (readonly, copy) NSDictionary * menuIconURLs;
@property (readonly, copy) NSString * menuIconURLVersion;
@property (readonly, copy) NSDictionary * privacy;
@property (readonly, retain) NSString * settingsControllerClassName;
@property (copy, nonatomic) NSDictionary * info;

+ (NSString *)infoForApplianceDescription:(NSString *)arg0;

- (NSString *)menuIconURLVersion;
- (NSDictionary *)menuIconURLs;
- (NSString *)merchantIdentifier;
- (char)primaryAppliance;
- (NSDictionary *)privacy;
- (NSString *)topShelfControllerClassName;
- (NSArray *)applianceCategoryDescriptors;
- (float)preferredOrder;
- (NSSet *)requiredRemoteMediaTypes;
- (NSString *)localizedStringsFileName;
- (NSString *)principalClassName;
- (char)hideIfNoCategories;
- (NSString *)settingsControllerClassName;
- (NSSet *)supportedMediaTypes;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)name;
- (NSString *)key;
- (NSDictionary *)info;
- (void)setInfo:(NSDictionary *)arg0;
- (NSDictionary *)_initWithMutableDictionary:(NSDictionary *)arg0;

@end
