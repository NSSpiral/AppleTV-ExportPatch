/* Runtime dump - ACUIAggregateLogger
 * Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

@interface ACUIAggregateLogger : NSObject

+ (ACUIAggregateLogger *)_aggregateDictionaryKeyForDataclass:(id)arg0 accountType:(NSObject *)arg1 enabled:(char)arg2;
+ (void)logDataclass:(id)arg0 wasEnabledOnAccountOfType:(NSObject *)arg1;
+ (void)logDataclass:(id)arg0 wasDisabledOnAccountOfType:(NSObject *)arg1;

@end
