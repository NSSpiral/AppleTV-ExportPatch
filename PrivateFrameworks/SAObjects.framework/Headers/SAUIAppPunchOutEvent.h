/* Runtime dump - SAUIAppPunchOutEvent
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIAppPunchOutEvent : SABaseCommand <SAServerBoundCommand>

@property (copy, nonatomic) NSString * appDisplayName;
@property (copy, nonatomic) NSString * bundleId;
@property (copy, nonatomic) NSString * originalCommandId;
@property (copy, nonatomic) NSString * punchOutName;
@property (copy, nonatomic) NSURL * punchOutUri;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (NSObject *)appPunchOutEvent;
+ (NSDictionary *)appPunchOutEventWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)bundleId;
- (NSString *)encodedClassName;
- (NSString *)appDisplayName;
- (void)setAppDisplayName:(NSString *)arg0;
- (void)setBundleId:(NSString *)arg0;
- (NSString *)punchOutName;
- (void)setPunchOutName:(NSString *)arg0;
- (NSURL *)punchOutUri;
- (void)setPunchOutUri:(NSURL *)arg0;
- (NSString *)originalCommandId;
- (void)setOriginalCommandId:(NSString *)arg0;

@end
