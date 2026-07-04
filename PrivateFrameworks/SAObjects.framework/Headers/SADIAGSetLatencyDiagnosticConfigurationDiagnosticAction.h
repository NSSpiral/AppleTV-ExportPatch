/* Runtime dump - SADIAGSetLatencyDiagnosticConfigurationDiagnosticAction
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SADIAGSetLatencyDiagnosticConfigurationDiagnosticAction : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSURL * uri;
@property (copy, nonatomic) NSString * verb;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)setLatencyDiagnosticConfigurationDiagnosticAction;
+ (NSDictionary *)setLatencyDiagnosticConfigurationDiagnosticActionWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSURL *)uri;
- (NSString *)encodedClassName;
- (void)setUri:(NSURL *)arg0;
- (NSString *)verb;
- (void)setVerb:(NSString *)arg0;

@end
