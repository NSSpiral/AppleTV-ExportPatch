/* Runtime dump - MFDataMessageStore
 * Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFDataMessageStore : MFMessageStore
{
    NSData * _data;
    Class _messageClass;
    NSString * _storagePath;
}

- (void)dealloc;
- (MFDataMessageStore *)initWithData:(NSData *)arg0;
- (NSString *)message;
- (void)setMessageClass:(Class)arg0;
- (NSNumber *)account;
- (NSString *)storePath;
- (NSString *)_cachedBodyDataForMessage:(NSString *)arg0 valueIfNotPresent:(id)arg1;
- (MFMailboxUid *)mailboxUid;
- (void)writeUpdatedMessageDataToDisk;
- (NSString *)headerDataForMessage:(NSString *)arg0 downloadIfNecessary:(char)arg1;
- (NSData *)storeData:(NSDictionary *)arg0 forMimePart:(MFMimePart *)arg1 isComplete:(char)arg2;
- (NSString *)_cachedHeadersForMessage:(NSString *)arg0 valueIfNotPresent:(id)arg1;
- (char)bodyFetchRequiresNetworkActivity;
- (NSString *)bodyDataForMessage:(NSString *)arg0 isComplete:(char *)arg1 isPartial:(char *)arg2 downloadIfNecessary:(char)arg3;
- (NSString *)_cachedBodyForMessage:(NSString *)arg0 valueIfNotPresent:(id)arg1;
- (void)setStoragePath:(NSString *)arg0;
- (NSString *)storagePath;

@end
