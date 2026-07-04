/* Runtime dump - SASocialProfile
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASocialProfile : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSString * serviceType;
@property (copy, nonatomic) NSString * url;
@property (copy, nonatomic) NSString * userName;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (GKABMultiValue *)socialProfile;
+ (NSDictionary *)socialProfileWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)userName;
- (NSString *)groupIdentifier;
- (void)setUserName:(NSString *)arg0;
- (NSString *)url;
- (void)setUrl:(NSString *)arg0;
- (NSString *)serviceType;
- (void)setServiceType:(NSString *)arg0;
- (NSString *)encodedClassName;

@end
