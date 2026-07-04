/* Runtime dump - SASettingGetValueResponse
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASettingGetValueResponse : SASettingResponse <SASettingSupplier>

@property (retain, nonatomic) SASettingEntity * setting;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSURLResponse *)getValueResponse;
+ (NSDictionary *)getValueResponseWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (SASettingEntity *)setting;
- (void)setSetting:(SASettingEntity *)arg0;

@end
