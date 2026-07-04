/* Runtime dump - MFDADelivery
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFDADelivery : MFMailDelivery
{
    DAMailAccount * _DAMailAccount;
    NSString * _folderId;
    NSString * _accountId;
    NSString * _repliedMessageId;
    NSString * _forwardedMessageId;
    NSString * _repliedLongId;
    NSString * _forwardedLongId;
}

- (void)dealloc;
- (id)deliverSynchronously;
- (NSObject *)newMessageWriter;
- (MFDADelivery *)initWithHeaders:(MFMutableMessageHeaders *)arg0 mixedContent:(NSArray *)arg1 textPartsAreHTML:(char)arg2;
- (MFDADelivery *)initWithHeaders:(MFMutableMessageHeaders *)arg0 HTML:(id)arg1 plainTextAlternative:(MFPlainTextDocument *)arg2 other:(id)arg3 charsets:(NSArray *)arg4;
- (void)setDAMailAccount:(NSObject *)arg0;

@end
