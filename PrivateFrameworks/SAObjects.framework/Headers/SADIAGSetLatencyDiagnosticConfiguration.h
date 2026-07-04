/* Runtime dump - SADIAGSetLatencyDiagnosticConfiguration
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SADIAGSetLatencyDiagnosticConfiguration : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray * diagnosticActions;

+ (NSDictionary *)setLatencyDiagnosticConfiguration;
+ (NSDictionary *)setLatencyDiagnosticConfigurationWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSArray *)diagnosticActions;
- (void)setDiagnosticActions:(NSArray *)arg0;

@end
