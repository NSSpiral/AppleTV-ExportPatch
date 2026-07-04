/* Runtime dump - CoreDAVPropFindTask
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVPropFindTask : CoreDAVPropertyFindBaseTask

@property (nonatomic) <CoreDAVTaskDelegate> * delegate;

- (NSData *)requestBody;
- (NSString *)httpMethod;
- (CoreDAVPropFindTask *)initWithPropertiesToFind:(NSSet *)arg0 atURL:(NSURL *)arg1 withDepth:(int)arg2;
- (void)finishCoreDAVTaskWithError:(NSError *)arg0;

@end
