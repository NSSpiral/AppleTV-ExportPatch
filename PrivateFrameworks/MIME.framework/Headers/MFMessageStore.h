/* Runtime dump - MFMessageStore
 * Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFMessageStore : NSObject <NSCopying>
{
    NSMutableSet * _uniqueStrings;
    MFMessageStoreObjectCache * _objectCache;
}

@property (copy, nonatomic) NSString * storagePath;
@property (readonly, retain, nonatomic) MFMessageStoreObjectCache * objectCache;

+ (void)setDefaultMessageHeadersClass:(Class)arg0;
+ (Class)classForMimePart;
+ (Class)headersClass;

- (void)dealloc;
- (MFMessageStore *)init;
- (MFMessageStore *)copyWithZone:(struct _NSZone *)arg0;
- (void)setMessageClass:(Class)arg0;
- (NSString *)_cachedBodyDataForMessage:(NSString *)arg0 valueIfNotPresent:(id)arg1;
- (void)_flushAllCaches;
- (NSString *)_bodyForMessage:(NSString *)arg0 fetchIfNotAvailable:(char)arg1 updateFlags:(char)arg2;
- (MFMessageStoreObjectCache *)objectCache;
- (NSString *)_cachedHeaderDataForMessage:(NSString *)arg0 valueIfNotPresent:(id)arg1;
- (void)setNumberOfAttachments:(unsigned int)arg0 isSigned:(char)arg1 isEncrypted:(char)arg2 forMessage:(NSString *)arg3;
- (void)_flushAllMessageData;
- (NSObject *)_setOrGetBody:(NSObject *)arg0 forMessage:(NSString *)arg1 updateFlags:(char)arg2;
- (NSString *)headerDataForMessage:(NSString *)arg0 downloadIfNecessary:(char)arg1;
- (char)dataForMimePart:(id)arg0 inRange:(struct _NSRange)arg1 isComplete:(char *)arg2 withConsumer:(NSObject *)arg3 downloadIfNecessary:(char)arg4 didDownload:(char *)arg5;
- (NSString *)_cachedBodyDataContainerForMessage:(NSString *)arg0 valueIfNotPresent:(id)arg1;
- (NSData *)dataForMimePart:(id)arg0 inRange:(struct _NSRange)arg1 isComplete:(char *)arg2 downloadIfNecessary:(char)arg3 didDownload:(char *)arg4;
- (NSString *)_fetchBodyDataForMessage:(NSString *)arg0 andHeaderDataIfReadilyAvailable:(id *)arg1 downloadIfNecessary:(char)arg2 partial:(char *)arg3;
- (NSString *)_cachedHeadersForMessage:(NSString *)arg0 valueIfNotPresent:(id)arg1;
- (char)hasCompleteDataForMimePart:(id)arg0;
- (char)bodyFetchRequiresNetworkActivity;
- (NSString *)fullBodyDataForMessage:(NSString *)arg0 andHeaderDataIfReadilyAvailable:(id *)arg1 isComplete:(char *)arg2 downloadIfNecessary:(char)arg3 didDownload:(char *)arg4;
- (NSString *)bodyDataForMessage:(NSString *)arg0 isComplete:(char *)arg1 isPartial:(char *)arg2 downloadIfNecessary:(char)arg3;
- (NSCache *)newObjectCache;
- (NSString *)_cachedBodyForMessage:(NSString *)arg0 valueIfNotPresent:(id)arg1;
- (id)decryptedTopLevelPartForPart:(id)arg0;
- (id)defaultAlternativeForPart:(id)arg0;
- (id)bestAlternativeForPart:(id)arg0;
- (char)wantsLineEndingConversionForMIMEPart:(id)arg0;
- (NSString *)additionalHeadersForReplyOfMessage:(NSString *)arg0;
- (NSString *)additionalHeadersForForwardOfMessage:(NSString *)arg0;
- (NSString *)headersForMessage:(NSString *)arg0 fetchIfNotAvailable:(char)arg1;
- (NSString *)uniquedString:(NSString *)arg0;
- (void)setStoragePath:(NSString *)arg0;
- (char)dataForMimePart:(id)arg0 inRange:(struct _NSRange)arg1 withConsumer:(NSObject *)arg2 downloadIfNecessary:(char)arg3;
- (NSString *)bodyForMessage:(NSString *)arg0 fetchIfNotAvailable:(char)arg1 updateFlags:(char)arg2;
- (NSString *)storagePath;

@end
