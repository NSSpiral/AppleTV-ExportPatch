/* Runtime dump - SASettingSetAppService
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASettingSetAppService : SASettingSetBool <SASettingAppSettingCommand>

@property (copy, nonatomic) NSString * appWithSettingsId;
@property (copy, nonatomic) NSString * location;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;
@property (copy, nonatomic) NSString * appId;
@property (copy, nonatomic) NSArray * callbacks;

+ (NSObject *)setAppService;
+ (NSDictionary *)setAppServiceWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)location;
- (void)setLocation:(NSString *)arg0;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSString *)appWithSettingsId;
- (void)setAppWithSettingsId:(NSString *)arg0;

@end
