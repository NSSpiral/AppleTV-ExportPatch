/* Runtime dump - MFWebAttachmentSource
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFWebAttachmentSource : NSObject
{
    MFLock * _attachmentsLock;
    NSMutableDictionary * _attachmentsByURL;
    NSMutableDictionary * _removedAttachmentsByURL;
}

@property char keepRemovedAttachments;

+ (MFWebAttachmentSource *)allSources;
+ (MFWebAttachmentSource *)_setOfAllSources;

- (void)dealloc;
- (MFWebAttachmentSource *)init;
- (NSString *)description;
- (NSURL *)attachmentForURL:(NSURL *)arg0;
- (char)setAttachment:(NSObject *)arg0 forURL:(NSURL *)arg1;
- (NSURL *)attachmentForURL:(NSURL *)arg0 includeRemoved:(char)arg1;
- (char)keepRemovedAttachments;
- (void)setKeepRemovedAttachments:(char)arg0;
- (void)removeAttachmentForURL:(NSURL *)arg0;

@end
