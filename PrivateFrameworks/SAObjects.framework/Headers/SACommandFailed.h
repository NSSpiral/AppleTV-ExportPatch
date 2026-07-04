/* Runtime dump - SACommandFailed
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SACommandFailed : SABaseClientBoundCommand <SAServerBoundCommand, SAClientBoundCommand>

@property (nonatomic) int errorCode;
@property (copy, nonatomic) NSString * reason;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;
@property (copy, nonatomic) NSString * appId;
@property (copy, nonatomic) NSArray * callbacks;

+ (SACommandFailed *)commandFailed;
+ (NSDictionary *)commandFailedWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;
+ (SACommandFailed *)commandFailedWithErrorCode:(int)arg0;
+ (NSString *)commandFailedWithReason:(NSString *)arg0;

- (NSString *)groupIdentifier;
- (NSString *)reason;
- (SACommandFailed *)initWithReason:(NSString *)arg0;
- (void)setErrorCode:(int)arg0;
- (int)errorCode;
- (void)setReason:(NSString *)arg0;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (SACommandFailed *)initWithErrorCode:(int)arg0;

@end
