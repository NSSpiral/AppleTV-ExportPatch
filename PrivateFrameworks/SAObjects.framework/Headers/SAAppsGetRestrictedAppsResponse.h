/* Runtime dump - SAAppsGetRestrictedAppsResponse
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAppsGetRestrictedAppsResponse : SABaseCommand <SAServerBoundCommand>

@property (copy, nonatomic) NSArray * restrictedApps;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (NSURLResponse *)getRestrictedAppsResponse;
+ (NSDictionary *)getRestrictedAppsResponseWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSArray *)restrictedApps;
- (void)setRestrictedApps:(NSArray *)arg0;

@end
