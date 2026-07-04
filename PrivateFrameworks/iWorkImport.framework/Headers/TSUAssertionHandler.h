/* Runtime dump - TSUAssertionHandler
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUAssertionHandler : NSObject

+ (void)logBacktrace;
+ (void)handleFailureInFunction:(id)arg0 file:(char *)arg1 lineNumber:(int)arg2 description:(NSString *)arg3;
+ (TSUAssertionHandler *)performBlockIgnoringAssertions:(id)arg0;

@end
