/* Runtime dump - CoreDAVACLTask
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVACLTask : CoreDAVTask
{
    NSArray * _accessControlEntities;
}

@property (nonatomic) <CoreDAVACLTaskDelegate> * delegate;
@property (retain, nonatomic) NSArray * accessControlEntities;

- (void)dealloc;
- (NSString *)description;
- (CoreDAVACLTask *)initWithURL:(NSString *)arg0;
- (NSData *)requestBody;
- (NSString *)httpMethod;
- (void)finishCoreDAVTaskWithError:(NSError *)arg0;
- (NSArray *)accessControlEntities;
- (void)setAccessControlEntities:(NSArray *)arg0;
- (CoreDAVACLTask *)initWithAccessControlEntities:(NSArray *)arg0 atURL:(NSURL *)arg1;

@end
