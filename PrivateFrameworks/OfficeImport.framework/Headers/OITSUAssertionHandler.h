/* Runtime dump - OITSUAssertionHandler
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUAssertionHandler : NSAssertionHandler

+ (OITSUAssertionHandler *)currentHandler;
+ (void)testCaseStarted:(id)arg0;
+ (void)testCaseStopped:(id)arg0;
+ (void)installAsNSHandler;
+ (OITSUAssertionHandler *)performBlockIgnoringAssertions:(id)arg0;

- (void)handleFailureInMethod:(SEL)arg0 object:(NSObject *)arg1 file:(char *)arg2 lineNumber:(int)arg3 description:(NSString *)arg4;
- (void)handleFailureInFunction:(id)arg0 file:(char *)arg1 lineNumber:(int)arg2 description:(NSString *)arg3;
- (void)handleFailureWithLocation:(NSObject *)arg0 file:(char *)arg1 lineNumber:(int)arg2 description:(NSString *)arg3 arguments:(void *)arg4;

@end
