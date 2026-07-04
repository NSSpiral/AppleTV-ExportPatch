/* Runtime dump - AFManagedStorageConnection
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFManagedStorageConnection : NSObject <AFManagedStore>
{
    NSXPCConnection * _connection;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (AFManagedStorageConnection *)init;
- (void).cxx_destruct;
- (NSXPCConnection *)_connection;
- (id)_managedStoreServiceWithErrorHandler:(SSErrorHandler *)arg0;
- (NSObject *)_managedStoreService;
- (NSString *)domainObjectForKey:(NSString *)arg0;
- (void)setDomainObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)_clearConnection;

@end
