/* Runtime dump - HMDNameValidator
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDNameValidator : NSObject
{
    NSMutableDictionary * _namespaceList;
    NSObject<OS_dispatch_queue> * _workQueue;
    NSUUID * _homeManagerUUID;
}

@property (copy, nonatomic) NSMutableDictionary * namespaceList;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * workQueue;
@property (retain, nonatomic) NSUUID * homeManagerUUID;

- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)workQueue;
- (void)setWorkQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (NSString *)addName:(NSString *)arg0 namespace:(NSString *)arg1;
- (NSString *)removeName:(NSString *)arg0 namespace:(NSString *)arg1;
- (NSString *)replaceName:(NSString *)arg0 withNewName:(char)arg1 inNamespaces:(id)arg2;
- (id)_addNamespace:(CXUnqualifiedNamespace *)arg0;
- (NSMutableDictionary *)namespaceList;
- (NSString *)_validateName:(NSString *)arg0;
- (NSString *)_despaceName:(NSString *)arg0;
- (NSString *)_removeName:(NSString *)arg0 namespace:(NSString *)arg1;
- (NSString *)_addName:(NSString *)arg0 namespace:(NSString *)arg1;
- (id)_removeNamespace:(CXUnqualifiedNamespace *)arg0;
- (NSString *)_replaceName:(NSString *)arg0 withNewName:(char)arg1 inNamespaces:(id)arg2;
- (HMDNameValidator *)initWithUUID:(NSString *)arg0;
- (id)addNamespace:(CXUnqualifiedNamespace *)arg0;
- (id)removeNamespace:(CXUnqualifiedNamespace *)arg0;
- (void)setNamespaceList:(NSMutableDictionary *)arg0;
- (NSUUID *)homeManagerUUID;
- (void)setHomeManagerUUID:(NSUUID *)arg0;

@end
