/* Runtime dump - CoreDAVPrincipalSearchPropertySetTask
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVPrincipalSearchPropertySetTask : CoreDAVTask

@property (nonatomic) <CoreDAVPrincipalSearchPropertySetTaskDelegate> * delegate;

- (CoreDAVPrincipalSearchPropertySetTask *)initWithURL:(NSString *)arg0;
- (NSData *)requestBody;
- (NSString *)httpMethod;
- (void)finishCoreDAVTaskWithError:(NSError *)arg0;
- (NSObject *)copyDefaultParserForContentType:(NSObject *)arg0;

@end
