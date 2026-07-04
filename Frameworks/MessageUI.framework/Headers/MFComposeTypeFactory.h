/* Runtime dump - MFComposeTypeFactory
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFComposeTypeFactory : NSObject

+ (unsigned int)imageScaleFromUserDefaults;
+ (void)setupWithCompositionModel:(NSObject *)arg0 delegate:(NSObject *)arg1;
+ (void)setupWithContent:(NSObject *)arg0 delegate:(NSObject *)arg1;
+ (NSObject *)messageFromDelegate:(NSObject *)arg0 withSubstituteDOMDocument:(NSObject *)arg1 originatingBundleID:(NSString *)arg2 sourceAccountManagement:(int)arg3;
+ (NSObject *)headersFromDelegate:(NSObject *)arg0 originatingBundleID:(NSString *)arg1 sourceAccountManagement:(int)arg2;
+ (NSString *)_markupStringForExcludedInlineAttachmentWithFilename:(NSString *)arg0;
+ (NSObject *)_markupForInlineAttachment:(NSObject *)arg0 willBeIncluded:(char)arg1 prependBlankLine:(char)arg2 delegate:(NSObject *)arg3;
+ (void)_setContent:(NSObject *)arg0 includeAttachments:(char)arg1 shouldQuote:(char)arg2 prependBlankLine:(char)arg3 delegate:(NSObject *)arg4;
+ (void)_prependQuotedMarkup:(id)arg0 shouldIndent:(char)arg1 toBodyField:(MFComposeBodyField *)arg2;
+ (void)_prependPreamble:(id)arg0 toBodyField:(MFComposeBodyField *)arg1;
+ (void)_mergeModel:(NSObject *)arg0 withDelegate:(NSObject *)arg1;
+ (void)_updateDelegate:(NSObject *)arg0 toRecipients:(NSArray *)arg1 ccRecipients:(NSArray *)arg2 bccRecipients:(NSArray *)arg3;
+ (void)_quoteFromModel:(NSObject *)arg0 delegate:(NSObject *)arg1;
+ (void)_sanitizeRecipientsForComposeType:(unsigned int)arg0 sendingAddress:(NSString *)arg1 delegate:(NSObject *)arg2;
+ (void)_setupForReplyWithModel:(NSObject *)arg0 delegate:(NSObject *)arg1;
+ (void)_setupForReplyAllWithModel:(NSObject *)arg0 delegate:(NSObject *)arg1;
+ (void)_setupForForwardWithModel:(NSObject *)arg0 delegate:(NSObject *)arg1;
+ (void)_setupForNewMessageWithModel:(NSObject *)arg0 delegate:(NSObject *)arg1;
+ (NSObject *)headersFromDelegate:(NSObject *)arg0;
+ (void)addAttachment:(NSObject *)arg0 prepend:(char)arg1 withCompositionModel:(NSObject *)arg2 delegate:(NSObject *)arg3;
+ (NSObject *)messageFromDelegate:(NSObject *)arg0 originatingBundleID:(NSString *)arg1 sourceAccountManagement:(int)arg2;
+ (MFComposeTypeFactory *)subjectFromSubject:(id)arg0 withComposeType:(int)arg1;

@end
