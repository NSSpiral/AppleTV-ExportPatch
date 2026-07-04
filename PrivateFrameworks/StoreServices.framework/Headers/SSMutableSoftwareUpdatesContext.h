/* Runtime dump - SSMutableSoftwareUpdatesContext
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMutableSoftwareUpdatesContext : SSSoftwareUpdatesContext <SSXPCCoding>

@property (nonatomic) char forced;
@property (copy, nonatomic) NSArray * softwareTypes;
@property (copy, nonatomic) NSString * clientIdentifierHeader;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSDictionary *)copyXPCEncoding;
- (SSMutableSoftwareUpdatesContext *)initWithXPCEncoding:(NSString *)arg0;
- (void)setClientIdentifierHeader:(NSString *)arg0;
- (void)setForced:(char)arg0;
- (void)setSoftwareTypes:(NSArray *)arg0;

@end
