/* Runtime dump - SADIAGLatencyDiagnosticReportDiagnosticReport
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SADIAGLatencyDiagnosticReportDiagnosticReport : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSNumber * latency;
@property (copy, nonatomic) NSURL * uri;
@property (copy, nonatomic) NSString * verb;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SADIAGLatencyDiagnosticReportDiagnosticReport *)latencyDiagnosticReportDiagnosticReport;
+ (NSDictionary *)latencyDiagnosticReportDiagnosticReportWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSURL *)uri;
- (NSNumber *)latency;
- (void)setLatency:(NSNumber *)arg0;
- (NSString *)encodedClassName;
- (void)setUri:(NSURL *)arg0;
- (NSString *)verb;
- (void)setVerb:(NSString *)arg0;

@end
