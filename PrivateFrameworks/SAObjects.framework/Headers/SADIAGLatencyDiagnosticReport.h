/* Runtime dump - SADIAGLatencyDiagnosticReport
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SADIAGLatencyDiagnosticReport : SABaseCommand <SAServerBoundCommand>

@property (copy, nonatomic) NSArray * diagnosticReports;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (SADIAGLatencyDiagnosticReport *)latencyDiagnosticReport;
+ (NSDictionary *)latencyDiagnosticReportWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSArray *)diagnosticReports;
- (void)setDiagnosticReports:(NSArray *)arg0;

@end
