/* Runtime dump - SASettingSetValueResponse
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASettingSetValueResponse : SASettingResponse <SASettingSupplier>

@property (retain, nonatomic) SASettingEntity * setting;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSURLResponse *)setValueResponse;
+ (NSDictionary *)setValueResponseWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (SASettingEntity *)setting;
- (void)setSetting:(SASettingEntity *)arg0;

@end
