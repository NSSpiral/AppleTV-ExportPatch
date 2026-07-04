/* Runtime dump - ExchangeAccount
 * Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@interface ExchangeAccount : IMAPAccount

+ (NSString *)accountTypeString;

- (void)filterMailboxList:(NSArray *)arg0 forMailbox:(MFDAMailbox *)arg1 options:(int)arg2;
- (void)_filterMailboxList:(NSArray *)arg0 forMailboxWithPath:(NSString *)arg1 iisServer:(NSObject *)arg2;
- (char)_syncOnly_defaultValueForShouldStoreJunkOnServer;
- (char)storeDraftsOnServer;
- (char)storeSentMessagesOnServer;
- (Class)connectionClass;
- (char)shouldFetchACEDBInfoForError:(NSError *)arg0;
- (NSObject *)_defaultSpecialMailboxNameForType:(int)arg0;
- (char)shouldExpungeMessagesOnDelete;

@end
