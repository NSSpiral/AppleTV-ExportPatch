/* Runtime dump - IKAppDataStorage
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKAppDataStorage : NSObject <IKAppDataStoring>
{
    unsigned int _format;
    NSString * _filePath;
    NSString * _identifier;
    NSMutableDictionary * _storageDict;
    NSObject<OS_dispatch_queue> * _storageQueue;
}

@property (readonly, retain, nonatomic) NSString * filePath;
@property (readonly, retain, nonatomic) NSString * identifier;
@property (retain, nonatomic) NSMutableDictionary * storageDict;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * storageQueue;

- (unsigned int)count;
- (NSString *)identifier;
- (void)clear;
- (void).cxx_destruct;
- (NSString *)filePath;
- (NSObject *)keyAtIndex:(unsigned int)arg0;
- (NSMutableDictionary *)storageDict;
- (void)_saveDict:(id)arg0;
- (NSString *)getDataForKey:(NSString *)arg0;
- (IKAppDataStorage *)initWithFilePath:(NSString *)arg0 identifier:(NSString *)arg1;
- (void)setStorageDict:(NSMutableDictionary *)arg0;
- (void)setStorageQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (unsigned int)setData:(NSData *)arg0 forKey:(NSString *)arg1;
- (NSObject<OS_dispatch_queue> *)storageQueue;
- (void)removeDataForKey:(NSString *)arg0;

@end
