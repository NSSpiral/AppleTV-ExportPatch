/* Runtime dump - DADuetReporter
 * Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DADuetReporter : NSObject
{
    CDAttribute * _attribute;
    NSString * _value;
}

+ (NSURLSession *)session;

- (void).cxx_destruct;
- (DADuetReporter *)initWithActivityIdentifier:(NSString *)arg0;
- (void)activityStarted;
- (void)activityStopped;

@end
