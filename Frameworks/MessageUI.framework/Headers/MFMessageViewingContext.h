/* Runtime dump - MFMessageViewingContext
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMessageViewingContext : NSObject
{
    NSObject<MFMessageViewingContextDelegate> * _delegate;
    MFMailMessage * _message;
    MFMessageBody * _body;
    id _content;
    MFLock * _contentLock;
    MFActivityMonitor * _loadTask;
    MFMimePart * _loadedPart;
    NSArray * _signers;
    MFError * _secureMIMEError;
    MFAttachmentManager * _attachmentManager;
    unsigned int _contentOffset;
    unsigned int _loadIncrement;
    id _loadedFullData;
    id _hasNoContent;
    id _failedToLoad;
    id _isOutgoingMessage;
    id _isDraftMessage;
    id _isEditableMessage;
    id _showMailboxName;
    id _shouldAnalyzeMessage;
    NSObject<OS_dispatch_queue> * _suggestionsQueue;
    SGSuggestionsService * _suggestionsService;
    NSConditionLock * _suggestionsLock;
    NSArray * _suggestions;
    int _loadAlternative;
    NSError * _messageAnalysisError;
}

@property (readonly, retain, nonatomic) MFMailMessage * message;
@property (retain, nonatomic) MFMessageBody * messageBody;
@property (readonly, retain, nonatomic) MFAttachmentManager * attachmentManager;
@property (readonly, retain, nonatomic) MFActivityMonitor * loadTask;
@property (retain, nonatomic) MFMimePart * loadedPart;
@property (copy, nonatomic) NSArray * signers;
@property (retain, nonatomic) MFError * secureMimeError;
@property (copy, nonatomic) NSArray * suggestions;
@property (retain, nonatomic) NSError * messageAnalysisError;
@property (readonly, nonatomic) char hasLoaded;
@property (readonly, nonatomic) char hasAnalyzedMessage;
@property (readonly, nonatomic) char isPartial;
@property (readonly, nonatomic) char failedToLoad;
@property (retain, nonatomic) id content;
@property (nonatomic) unsigned int contentOffset;
@property (readonly, nonatomic) char hasNoContent;
@property (readonly, nonatomic) char isMessageSigned;
@property (readonly, nonatomic) char isMessageEncrypted;
@property (nonatomic) <MFMessageViewingContextDelegate> * delegate;
@property (nonatomic) char isOutgoingMessage;
@property (nonatomic) char isDraftMessage;
@property (nonatomic) char isEditableMessage;
@property (nonatomic) char showMailboxName;
@property (nonatomic) char shouldAnalyzeMessage;

+ (unsigned int)nextOffsetForOffset:(unsigned int)arg0 totalLength:(unsigned int)arg1 requestedAmount:(unsigned int)arg2;
+ (char)isAttachmentTooLarge:(id)arg0;

- (MFMessageViewingContext *)initWithMessage:(MFMailMessage *)arg0 attachmentManager:(MFAttachmentManager *)arg1;
- (void)loadMore;
- (char)hasAnalyzedMessageWithTimeout:(id)arg0;
- (void)_setContent:(NSObject *)arg0;
- (void)_setMessageBody:(NSObject *)arg0;
- (void)_notifyInitialLoadComplete;
- (void)_notifyFullMessageLoadFailed;
- (void)_setLoadedPart:(id)arg0;
- (void)_setSecureMIMEError:(NSError *)arg0;
- (void)loadAsPlainText:(char)arg0 asHTML:(char)arg1 downloadIfNecessary:(char)arg2;
- (void)analyzeMessageContent:(NSObject *)arg0;
- (void)_notifyCompletelyComplete;
- (void)loadFull;
- (void)setLoadTask:(MFActivityMonitor *)arg0;
- (void)loadWithPriority:(int)arg0;
- (void)_setMessageAnalysisError:(NSError *)arg0;
- (void)_setSuggestions:(id)arg0;
- (void)_notifyMessageAnalysisComplete;
- (char)isOutgoingMessage;
- (void)setIsOutgoingMessage:(char)arg0;
- (char)isDraftMessage;
- (void)setIsDraftMessage:(char)arg0;
- (char)isEditableMessage;
- (void)setIsEditableMessage:(char)arg0;
- (char)showMailboxName;
- (void)setShowMailboxName:(char)arg0;
- (char)shouldAnalyzeMessage;
- (void)setShouldAnalyzeMessage:(char)arg0;
- (char)hasNoContent;
- (char)isMessageSigned;
- (char)isMessageEncrypted;
- (MFError *)secureMimeError;
- (NSArray *)suggestions;
- (char)hasAnalyzedMessage;
- (id)fileWrappersForImageAttachments;
- (char)failedToLoad;
- (void)loadBestAlternative;
- (void)_notifyAttachmentComplete:(id)arg0 data:(NSData *)arg1;
- (MFActivityMonitor *)loadTask;
- (MFMimePart *)loadedPart;
- (NSError *)messageAnalysisError;
- (char)hasLoaded;
- (void)dealloc;
- (void)setDelegate:(<MFMessageViewingContextDelegate> *)arg0;
- (<MFMessageViewingContextDelegate> *)delegate;
- (unsigned int)contentOffset;
- (MFMailMessage *)message;
- (struct __CFAttributedString *)content;
- (void)load;
- (void)_setContentOffset:(unsigned int)arg0;
- (NSSet *)attachments;
- (MFMessageBody *)messageBody;
- (MFAttachmentManager *)attachmentManager;
- (char)isPartial;
- (NSArray *)signers;
- (void)_setSigners:(id)arg0;
- (void)unload;
- (NSString *)uniqueID;
- (void)cancelLoad;

@end
