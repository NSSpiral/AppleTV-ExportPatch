/* Runtime dump - ATVEvaluation
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVEvaluation : NSObject

+ (void)initialize;
+ (void)registerEvaluation:(id)arg0 withName:(NSString *)arg1;
+ (ATVEvaluation *)evaluationWithName:(NSString *)arg0;

- (char)evaluateValue:(id)arg0 usingOperator:(id)arg1 withUserInfo:(NSDictionary *)arg2;
- (SEL)selectorForOperator:(id)arg0;

@end
