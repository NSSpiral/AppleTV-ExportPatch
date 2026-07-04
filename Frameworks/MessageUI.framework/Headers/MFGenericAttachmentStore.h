/* Runtime dump - MFGenericAttachmentStore
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFGenericAttachmentStore : MFWebAttachmentSource
{
    struct __CFDictionary * _attachmentSizes;
    NSMutableArray * _attachmentsOrder;
    unsigned int _size;
    NSObject<OS_dispatch_queue> * _scalingQueue;
    MFConditionLock * _scalingThrottle;
    int _pendingImageScalingOperations;
    char _outgoing;
    char _didCancelImageScalingOperations;
    char _isScalingEnabled;
    char _isScalingThrottled;
}

@property (nonatomic) char scalingThrottled;
@property (readonly, nonatomic) NSArray * attachments;

+ (void)beginPreventingInlinePDFs;
+ (void)endPreventingInlinePDFs;
+ (char)isPreventingInlinePDFs;
+ (void)addAttachmentUniqueIdentifierStore:(NSObject *)arg0;

- (char)addAttachment:(NSObject *)arg0;
- (void)cancelImageScalingOperations;
- (void)setScalingThrottled:(char)arg0;
- (void)_enqueueScaleAttachment:(NSObject *)arg0 withFlags:(unsigned int)arg1 originalSize:(unsigned int)arg2;
- (void)_notifyAttachmentCachedSizesChanged;
- (char)addAttachment:(NSObject *)arg0 allowingOverride:(id)arg1;
- (void)_inrementPendingImageScalingOperations;
- (char)didCancelImageScalingOperations;
- (void)_decrementPendingImageScalingOperations;
- (MFGenericAttachmentStore *)initOutgoing;
- (char)hasPendingImageScalingOperations;
- (void)removeAttachmentsForURLs:(id)arg0;
- (char)scalingThrottled;
- (unsigned long)sizeForScale:(unsigned int)arg0 imagesOnly:(char)arg1;
- (void)dealloc;
- (NSString *)description;
- (NSArray *)attachments;
- (char)setAttachment:(NSObject *)arg0 forURL:(NSURL *)arg1;
- (void)removeAttachmentForURL:(NSURL *)arg0;

@end
