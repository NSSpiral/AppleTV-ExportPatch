/* Runtime dump - CoreDAVContainerInfoSyncTaskGroup
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVContainerInfoSyncTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate>
{
    NSString * _previousSyncToken;
    NSURL * _containerURL;
}

@property (nonatomic) <CoreDAVContainerInfoSyncProvider> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setDelegate:(<CoreDAVContainerInfoSyncProvider> *)arg0;
- (NSString *)description;
- (<CoreDAVContainerInfoSyncProvider> *)delegate;
- (void)task:(NSObject *)arg0 didFinishWithError:(NSError *)arg1;
- (void)startTaskGroup;
- (id)copyContainerParserMappings;
- (Class)containerItemClass;
- (CoreDAVContainerInfoSyncTaskGroup *)initWithContainerURL:(NSURL *)arg0 previousSyncToken:(NSString *)arg1 accountInfoProvider:(NSObject *)arg2 taskManager:(NSObject *)arg3;

@end
