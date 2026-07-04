/* Runtime dump - CoreDAVDeleteTask
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVDeleteTask : CoreDAVActionBackedTask
{
    NSString * _previousETag;
}

@property (nonatomic) <CoreDAVTaskDelegate> * delegate;
@property (retain, nonatomic) NSString * previousETag;

- (void)dealloc;
- (NSString *)description;
- (NSData *)requestBody;
- (NSString *)httpMethod;
- (NSDictionary *)additionalHeaderValues;
- (void)finishCoreDAVTaskWithError:(NSError *)arg0;
- (NSString *)previousETag;
- (void)setPreviousETag:(NSString *)arg0;

@end
