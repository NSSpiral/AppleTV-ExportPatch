/* Runtime dump - SSKeyValueStoreTransaction
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSKeyValueStoreTransaction : SSKeyValueStoreSession

- (char)setValue:(NSObject *)arg0 forDomain:(NSString *)arg1 key:(NSString *)arg2;
- (void)removeAccountFromDomain:(NSString *)arg0;
- (char)setData:(NSData *)arg0 forDomain:(NSString *)arg1 key:(NSString *)arg2;

@end
