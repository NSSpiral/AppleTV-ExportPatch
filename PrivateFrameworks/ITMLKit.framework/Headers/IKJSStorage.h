/* Runtime dump - IKJSStorage
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSStorage : IKJSObject <IKJSStorage>
{
    id _usesExternalDataStore;
    <IKAppDataStoring> * _appStorage;
    NSMutableDictionary * _storageDict;
    NSObject<OS_dispatch_queue> * _storageQueue;
}

@property (weak, nonatomic) <IKAppDataStoring> * appStorage;
@property (retain, nonatomic) NSMutableDictionary * storageDict;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * storageQueue;
@property (readonly, nonatomic) unsigned int length;

- (void *)getItem:(void *)arg0;
- (unsigned int)length;
- (void)removeItem:(void *)arg0;
- (void)clear;
- (void).cxx_destruct;
- (IKJSStorage *)initWithAppContext:(<IKApplication> *)arg0 appStorage:(<IKAppDataStoring> *)arg1;
- (NSMutableDictionary *)storageDict;
- (void)setStorageDict:(NSMutableDictionary *)arg0;
- (void)setStorageQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)_verifyExternalDataStoreForKey:(NSString *)arg0;
- (<IKAppDataStoring> *)appStorage;
- (NSString *)key:(unsigned int)arg0;
- (void)setItem:(NSObject *)arg0 :(id)arg1;
- (void)setAppStorage:(<IKAppDataStoring> *)arg0;
- (NSObject<OS_dispatch_queue> *)storageQueue;

@end
