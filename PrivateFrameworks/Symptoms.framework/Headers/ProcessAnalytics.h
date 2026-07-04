/* Runtime dump - ProcessAnalytics
 * Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
 */

@interface ProcessAnalytics : ObjectAnalytics

- (ProcessAnalytics *)init;
- (ProcessAnalytics *)initWithWorkspace:(FBWorkspace *)arg0 withCache:(char)arg1;
- (NSString *)processesWithName:(NSString *)arg0 nameKind:(id)arg1;
- (NSSet *)processesWithNameInSet:(NSSet *)arg0 nameKind:(id)arg1;
- (NSDate *)processesFromDate:(NSDate *)arg0 untilDate:(NSDate *)arg1;

@end
