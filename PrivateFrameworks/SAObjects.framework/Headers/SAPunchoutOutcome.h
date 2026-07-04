/* Runtime dump - SAPunchoutOutcome
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAPunchoutOutcome : SABaseCommand <SAServerBoundCommand>

@property (copy, nonatomic) NSString * originalCommandId;
@property (copy, nonatomic) NSDictionary * outcomes;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (SAPunchoutOutcome *)punchoutOutcome;
+ (NSDictionary *)punchoutOutcomeWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSString *)originalCommandId;
- (void)setOriginalCommandId:(NSString *)arg0;
- (NSDictionary *)outcomes;
- (void)setOutcomes:(NSDictionary *)arg0;

@end
