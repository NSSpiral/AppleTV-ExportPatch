/* Runtime dump - CoreDAVMkcolTask
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVMkcolTask : CoreDAVActionBackedTask
{
    NSSet * _propertiesToSet;
    char _sendOrder;
    int _absoluteOrder;
    NSURL * _priorOrderedURL;
}

@property (nonatomic) <CoreDAVTaskDelegate> * delegate;
@property (retain, nonatomic) NSURL * priorOrderedURL;
@property (nonatomic) int absoluteOrder;
@property (retain, nonatomic) NSSet * propertiesToSet;

- (void)dealloc;
- (NSString *)description;
- (CoreDAVMkcolTask *)initWithURL:(NSString *)arg0;
- (NSData *)requestBody;
- (NSString *)httpMethod;
- (NSDictionary *)additionalHeaderValues;
- (int)absoluteOrder;
- (void)finishCoreDAVTaskWithError:(NSError *)arg0;
- (NSObject *)copyDefaultParserForContentType:(NSObject *)arg0;
- (void)setAbsoluteOrder:(int)arg0;
- (void)setPriorOrderedURL:(NSURL *)arg0;
- (NSURL *)priorOrderedURL;
- (CoreDAVMkcolTask *)initWithPropertiesToSet:(NSSet *)arg0 atURL:(NSURL *)arg1;
- (NSSet *)propertiesToSet;
- (void)setPropertiesToSet:(NSSet *)arg0;

@end
