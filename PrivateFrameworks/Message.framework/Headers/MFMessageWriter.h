/* Runtime dump - MFMessageWriter
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMessageWriter : NSObject
{
    Class _messageClassToInstantiate;
    id _allows8BitMimeParts;
    id _allowsBinaryMimeParts;
    id _writeSizeDispositionParameter;
    id _allowsQuotedPrintable;
    id _delegate;
    NSDictionary * _compositionSpecification;
}

@property (nonatomic) id delegate;
@property (readonly, nonatomic) NSDictionary * compositionSpecification;

- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (MFMessageWriter *)init;
- (NSObject *)delegate;
- (MFMessageWriter *)initWithCompositionSpecification:(NSDictionary *)arg0;
- (void)setAllowsQuotedPrintable:(char)arg0;
- (NSString *)createMessageWithHtmlString:(NSString *)arg0 plainTextAlternative:(MFPlainTextDocument *)arg1 otherHtmlStringsAndAttachments:(id)arg2 charsets:(NSArray *)arg3 headers:(NSDictionary *)arg4;
- (void)appendDataForMimePart:(id)arg0 toData:(NSData *)arg1 withPartData:(NSData *)arg2;
- (NSString *)createMessageWithString:(NSString *)arg0 headers:(NSDictionary *)arg1;
- (id)createMessageWithPlainTextDocumentsAndAttachments:(id)arg0 headers:(NSDictionary *)arg1;
- (NSString *)createMessageWithHtmlString:(NSString *)arg0 plainTextAlternative:(MFPlainTextDocument *)arg1 otherHtmlStringsAndAttachments:(id)arg2 headers:(NSDictionary *)arg3;
- (NSString *)createMessageWithHtmlString:(NSString *)arg0 attachments:(BBAttachments *)arg1 headers:(NSDictionary *)arg2;
- (char)allows8BitMimeParts;
- (void)setAllows8BitMimeParts:(char)arg0;
- (char)allowsBinaryMimeParts;
- (void)setAllowsBinaryMimeParts:(char)arg0;
- (char)allowsQuotedPrintable;
- (void)setWriteSizeDispositionParameter:(char)arg0;
- (void)setMessageClassToInstantiate:(Class)arg0;
- (NSDictionary *)compositionSpecification;

@end
