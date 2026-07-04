/* Runtime dump - MFAttachmentManager
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFAttachmentManager : NSObject
{
    NSObject<OS_dispatch_queue> * _arrayAccessQueue;
    MFInvocationQueue * _attachmentInvocationQueue;
    NSMutableDictionary * _providers;
    NSMutableDictionary * _attachments;
    NSMutableDictionary * _metadata;
    NSLock * _metaDataLock;
    NSObject<OS_dispatch_queue> * _imageScalingQueue;
}

+ (MFAttachmentManager *)defaultManager;
+ (MFAttachmentManager *)allManagers;

- (unsigned long)sizeForScale:(unsigned int)arg0 imagesOnly:(char)arg1 forContext:(NSObject *)arg2;
- (void)dealloc;
- (MFAttachmentManager *)init;
- (id)attachmentsForURLs:(id)arg0 error:(id *)arg1;
- (id)attachmentForCID:(id)arg0;
- (void)removeAttachmentForURL:(NSURL *)arg0;
- (void)_callProgressBlockForAttachmentURL:(NSURL *)arg0 withBytes:(unsigned int)arg1 expectedSize:(unsigned int)arg2;
- (void)_fetchCompletedForAttachment:(NSObject *)arg0 error:(NSError *)arg1;
- (void)_fetchInvocationCallUsingBlock:(id /* block */)arg0;
- (NSURL *)attachmentForURL:(NSURL *)arg0 error:(id *)arg1;
- (void)addProvider:(NSObject *)arg0 forBaseURL:(NSURL *)arg1;
- (void)setContentIDForAttachment:(NSObject *)arg0 toCID:(id)arg1;
- (NSData *)attachmentForData:(NSData *)arg0 mimeType:(NSString *)arg1 fileName:(NSString *)arg2 contentID:(NSString *)arg3 context:(NSObject *)arg4;
- (NSURL *)_dataProviderForAttachmentURL:(NSURL *)arg0 error:(id *)arg1;
- (NSObject *)_fetchDataForAttachment:(NSObject *)arg0 withProvider:(NSObject *)arg1;
- (NSString *)attachmentsForContext:(NSObject *)arg0;
- (void)loadAttachmentURL:(NSURL *)arg0 forContextID:(NSObject *)arg1;
- (void)updateAttachment:(NSObject *)arg0 withNewData:(char)arg1;
- (void)recordPasteboardAttachmentsForURLs:(id)arg0 forContextID:(NSObject *)arg1;
- (void)recordUndoAttachmentsForURLs:(id)arg0 forContextID:(NSObject *)arg1;
- (void)removeProviderForBaseURL:(NSURL *)arg0;
- (NSObject *)metadataForAttachment:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)setMetadataForAttachment:(NSObject *)arg0 toValue:(NSValue *)arg1 forKey:(NSString *)arg2;
- (void)fetchDataForAttachment:(NSObject *)arg0;
- (void)fetchDataSynchronouslyForAttachment:(NSObject *)arg0;
- (void)cancelFetchForAttachment:(NSObject *)arg0;
- (void)updatePathWithCurrentFileNameForAttachment:(NSObject *)arg0;
- (NSObject *)_contentIDForAttachment:(NSObject *)arg0;
- (char)_setupAttachment:(NSObject *)arg0 withMimeBody:(MFMimeBody *)arg1 error:(id *)arg2;
- (NSURL *)attachmentForURL:(NSURL *)arg0 withMimeBody:(MFMimeBody *)arg1 error:(id *)arg2;
- (NSObject *)attachmentForTextAttachment:(NSObject *)arg0 error:(id *)arg1;
- (NSObject *)attachmentForContentID:(NSObject *)arg0;
- (void)removeProvider:(NSObject *)arg0;
- (NSObject<OS_dispatch_queue> *)imageScalingQueue;
- (char)_setupAttachment:(NSObject *)arg0 error:(id *)arg1;
- (id)attachmentsForTextAttachments:(id)arg0 error:(id *)arg1;
- (void)clearMetadataForAttachment:(NSObject *)arg0;

@end
