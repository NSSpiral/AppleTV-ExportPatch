/* Runtime dump - CoreDAVPostTask
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVPostTask : CoreDAVPostOrPutTask

@property (nonatomic) <CoreDAVTaskDelegate> * delegate;

- (NSString *)httpMethod;
- (void)finishCoreDAVTaskWithError:(NSError *)arg0;
- (CoreDAVPostTask *)initWithDataPayload:(NSData *)arg0 dataContentType:(NSString *)arg1 atURL:(NSURL *)arg2 previousETag:(NSString *)arg3;

@end
