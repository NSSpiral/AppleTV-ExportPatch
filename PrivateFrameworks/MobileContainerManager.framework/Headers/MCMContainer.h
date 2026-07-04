/* Runtime dump - MCMContainer
 * Image: /System/Library/PrivateFrameworks/MobileContainerManager.framework/MobileContainerManager
 */

@interface MCMContainer : NSObject
{
    NSXPCConnection * _xpcConnection;
    NSString * _identifier;
    NSUUID * _uuid;
    int _containerClass;
}

@property (readonly, nonatomic) NSUUID * uuid;
@property (readonly, nonatomic) NSString * identifier;
@property (readonly, nonatomic) NSURL * url;
@property (readonly, nonatomic) NSDictionary * info;
@property (readonly, nonatomic) int containerClass;
@property (readonly, nonatomic) char temporary;

+ (NSString *)containerWithIdentifier:(NSString *)arg0 error:(id *)arg1;
+ (NSString *)containerWithIdentifier:(NSString *)arg0 createIfNecessary:(char)arg1 existed:(char *)arg2 error:(id *)arg3;
+ (NSString *)temporaryContainerWithIdentifier:(NSString *)arg0 existed:(char *)arg1 error:(id *)arg2;

- (char)isTemporary;
- (void)dealloc;
- (MCMContainer *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSURL *)url;
- (NSString *)identifier;
- (NSDictionary *)info;
- (void).cxx_destruct;
- (NSUUID *)uuid;
- (int)containerClass;
- (MCMContainer *)initWithIdentifier:(NSString *)arg0 uuid:(NSUUID *)arg1 containerClass:(int)arg2 error:(id *)arg3;
- (void)markDeleted;
- (char)_setupXpcCnnection;
- (int)_getContainerClass;
- (NSObject *)_getMetadataInfoFromServer;
- (MCMContainer *)initWithIdentifier:(NSString *)arg0 createIfNecessary:(char)arg1 existed:(char *)arg2 temp:(char)arg3 error:(id *)arg4;
- (void)destroyContainerWithCompletion:(id /* block */)arg0;
- (char)setInfoValue:(id)arg0 forKey:(NSString *)arg1 error:(id *)arg2;
- (NSString *)infoValueForKey:(NSString *)arg0 error:(id *)arg1;
- (char)recreateDefaultStructureWithError:(id *)arg0;
- (char)regenerateDirectoryUUIDWithError:(id *)arg0;
- (void)_errorOccurred;
- (void)_invalidateObject;

@end
