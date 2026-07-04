/* Runtime dump - SABaseClientBoundCommand
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SABaseClientBoundCommand : SABaseCommand <SAClientBoundCommand>

@property (copy, nonatomic) NSString * appId;
@property (copy, nonatomic) NSArray * callbacks;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (NSObject *)baseClientBoundCommand;
+ (NSDictionary *)baseClientBoundCommandWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSArray *)callbacks;
- (void)setCallbacks:(NSArray *)arg0;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSString *)appId;
- (void)setAppId:(NSString *)arg0;

@end
