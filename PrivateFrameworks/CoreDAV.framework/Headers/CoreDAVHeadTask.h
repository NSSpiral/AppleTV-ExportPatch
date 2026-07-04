/* Runtime dump - CoreDAVHeadTask
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVHeadTask : CoreDAVTask

- (NSData *)requestBody;
- (NSString *)httpMethod;
- (unsigned int)cachePolicy;
- (void)finishCoreDAVTaskWithError:(NSError *)arg0;

@end
