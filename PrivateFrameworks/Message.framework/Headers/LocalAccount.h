/* Runtime dump - LocalAccount
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface LocalAccount : MailAccount

+ (NSString *)accountTypeIdentifier;
+ (NSString *)accountTypeString;
+ (LocalAccount *)localAccount;
+ (LocalAccount *)defaultPathNameForAccountWithHostname:(NSString *)arg0 username:(NSString *)arg1;

- (char)isActive;
- (NSString *)uniqueId;
- (NSString *)displayName;
- (void)setPassword:(NSString *)arg0;
- (void)setUsername:(NSString *)arg0;
- (char)deleteInPlaceForMailbox:(id)arg0;
- (char)supportsArchiving;
- (void)setHostname:(NSString *)arg0;
- (char)canGoOffline;
- (char)canFetch;
- (LocalAccount *)initWithLibrary:(ML3MusicLibrary *)arg0 persistentAccount:(ACAccount *)arg1;
- (id)primaryMailboxUid;
- (NSString *)mailboxUidForFileSystemPath:(NSString *)arg0;
- (char)renameMailbox:(id)arg0 newName:(NSString *)arg1 parent:(NSObject *)arg2;
- (void)_synchronouslyLoadListingForParent:(NSObject *)arg0;
- (char)_setChildren:(NSArray *)arg0 forMailboxUid:(_MFRootlessMailboxUid *)arg1;
- (Class)storeClass;
- (id)mailboxPathExtension;
- (NSString *)_URLScheme;
- (NSURL *)_infoForMatchingURL:(NSURL *)arg0;
- (NSObject *)_copyMailboxUidWithParent:(NSObject *)arg0 name:(NSString *)arg1 attributes:(unsigned int)arg2 existingMailboxUid:(id)arg3 dictionary:(NSDictionary *)arg4;
- (char)supportsAppend;
- (char)_shouldConfigureMailboxCache;
- (NSSet *)pushedMailboxUids;
- (id)transientDraftsFolder;

@end
