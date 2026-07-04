/* Runtime dump - App
 * Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
 */

@interface App : Process

@property (retain, nonatomic) NSSet * hasAppRun;
@property (retain, nonatomic) NSOrderedSet * hasTypicalUsage;
@property (retain, nonatomic) NSSet * hasCalendarUsage;
@property (retain, nonatomic) AppCalendarUsage * hintCalendarUsage;

- (void)insertObject:(NSObject *)arg0 inHasTypicalUsageAtIndex:(unsigned int)arg1;

@end
