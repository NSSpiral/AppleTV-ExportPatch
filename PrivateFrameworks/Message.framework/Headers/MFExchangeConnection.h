/* Runtime dump - MFExchangeConnection
 * Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@interface MFExchangeConnection : MFIMAPConnection

- (NSDictionary *)_fetchArgumentForMessageSkeletonsWithHeaders:(NSDictionary *)arg0;
- (id)_fetchArgumentForMessageUidsAndFlags;
- (char)_isFetchResponseValid:(id)arg0;

@end
