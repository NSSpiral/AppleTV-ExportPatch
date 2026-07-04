/* Runtime dump - CoreDAVExpandPropertiesTask
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVExpandPropertiesTask : CoreDAVPropertyFindBaseTask
{
    NSMutableSet * _propertiesToExpand;
}

@property (retain, nonatomic) NSMutableSet * propertiesToExpand;

- (void)dealloc;
- (NSString *)description;
- (NSData *)requestBody;
- (NSString *)httpMethod;
- (void)finishCoreDAVTaskWithError:(NSError *)arg0;
- (NSSet *)parseHints;
- (void)setPropertiesToExpand:(NSMutableSet *)arg0;
- (void)addPropertyToExpandWithPropertiesToFind:(NSSet *)arg0 expandedName:(NSString *)arg1 expandedNameSpace:(NSString *)arg2;
- (NSMutableSet *)propertiesToExpand;
- (CoreDAVExpandPropertiesTask *)initWithPropertiesToFind:(NSSet *)arg0 atURL:(NSURL *)arg1 expandedName:(NSString *)arg2 expandedNameSpace:(NSString *)arg3;

@end
