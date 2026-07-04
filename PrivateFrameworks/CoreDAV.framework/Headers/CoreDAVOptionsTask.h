/* Runtime dump - CoreDAVOptionsTask
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVOptionsTask : CoreDAVTask

@property (nonatomic) <CoreDAVOptionsTaskDelegate> * delegate;

- (NSData *)requestBody;
- (NSString *)httpMethod;
- (void)finishCoreDAVTaskWithError:(NSError *)arg0;

@end
