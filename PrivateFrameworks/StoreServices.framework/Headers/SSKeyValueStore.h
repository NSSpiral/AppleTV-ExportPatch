/* Runtime dump - SSKeyValueStore
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSKeyValueStore : NSObject
{
    SSXPCConnection * _connection;
    SSKeyValueStoreDatabase * _database;
    char _useLocalRead;
    char _useLocalWrite;
}

@property (readonly) char localReadable;
@property (readonly) char localWritable;

+ (char)isLocalReadable;

- (void)dealloc;
- (SSKeyValueStore *)init;
- (void)getValueForDomain:(NSString *)arg0 key:(NSString *)arg1 usingBlock:(id /* block */)arg2;
- (void)setValue:(NSObject *)arg0 forDomain:(NSString *)arg1 key:(NSString *)arg2 completionBlock:(id /* block */)arg3;
- (void)setValuesWithDictionary:(NSDictionary *)arg0 forDomain:(NSString *)arg1 completionBlock:(id /* block */)arg2;
- (void)getValuesForDomain:(NSString *)arg0 keys:(id *)arg1 count:(NSObject *)arg2 usingBlock:(unsigned int)arg3;
- (char)isLocalReadable;
- (void)readUsingSessionBlock:(id /* block */)arg0;
- (void)removeAllValuesForDomain:(NSString *)arg0 completionBlock:(id /* block */)arg1;
- (void)modifyUsingTransactionBlock:(id /* block */)arg0;
- (void)setValue:(NSObject *)arg0 forDomain:(NSString *)arg1 key:(NSString *)arg2;
- (NSString *)copyAccountDictionaryForDomain:(NSString *)arg0;
- (NSString *)iTunesValueForKey:(NSString *)arg0 usedDomain:(id *)arg1;
- (void)removeAccountFromDomain:(NSString *)arg0;
- (void)removeAllValuesForDomain:(NSString *)arg0;
- (void)removeAllValuesWithCompletionBlock:(id /* block */)arg0;
- (void)setValuesWithDictionary:(NSDictionary *)arg0 forDomain:(NSString *)arg1;
- (id)copyAccounts;
- (char)isLocalWritable;

@end
