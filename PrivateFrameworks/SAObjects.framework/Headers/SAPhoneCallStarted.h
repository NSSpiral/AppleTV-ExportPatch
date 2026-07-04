/* Runtime dump - SAPhoneCallStarted
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAPhoneCallStarted : SABaseCommand <SAServerBoundCommand>

@property (copy, nonatomic) NSURL * phoneLogId;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (SAPhoneCallStarted *)callStarted;
+ (NSDictionary *)callStartedWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSURL *)phoneLogId;
- (void)setPhoneLogId:(NSURL *)arg0;

@end
