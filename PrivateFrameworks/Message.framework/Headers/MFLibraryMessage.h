/* Runtime dump - MFLibraryMessage
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFLibraryMessage : MFMailMessage
{
    unsigned int _libraryID;
    NSString * _remoteID;
    unsigned long _uid;
    unsigned long long _uniqueRemoteId;
    unsigned int _size;
    unsigned int _mailboxID;
    unsigned int _originalMailboxID;
    NSString * _messageID;
    unsigned long long _conversationFlags;
    NSMutableDictionary * _metadata;
    NSMutableSet * _metadataChangedKeys;
    MFLock * _metadataLock;
    id _deallocationHandler;
}

@property (copy, nonatomic) id deallocationHandler;

+ (NSObject *)messageWithLibraryID:(unsigned int)arg0;

- (void)setFlags:(unsigned long long)arg0;
- (void)setDeallocationHandler:(id /* block */)arg0;
- (id /* block */)deallocationHandler;
- (unsigned int)libraryID;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)path;
- (void)commit;
- (unsigned long)uid;
- (NSNumber *)account;
- (void)setUid:(unsigned long)arg0;
- (char)isMessageContentsLocallyAvailable;
- (void)setMessageFlags:(unsigned long long)arg0;
- (void)setPreferredEncoding:(unsigned long)arg0;
- (unsigned int)messageSize;
- (NSObject *)messageStore;
- (unsigned int)mailboxID;
- (unsigned long long)conversationFlags;
- (void)setConversationFlags:(unsigned long long)arg0;
- (MFLibraryMessage *)initWithLibraryID:(unsigned int)arg0;
- (NSString *)messageID;
- (void)_updateUID;
- (void)setRemoteID:(NSString *)arg0;
- (char)hasTemporaryUid;
- (void)setMessageFlagsWithoutCommitting:(unsigned long long)arg0;
- (NSString *)remoteID;
- (unsigned int)originalMailboxID;
- (MFMailboxUid *)mailbox;
- (NSDictionary *)copyMessageInfo;
- (void)setMailboxID:(unsigned int)arg0;
- (void)_initializeMetadata;
- (NSObject *)_attachmentStorageLocation;
- (void)setLibraryID:(unsigned int)arg0;
- (void)setOriginalMailboxID:(unsigned int)arg0;
- (NSURL *)originalMailboxURL;
- (void)setMessageSize:(unsigned int)arg0;
- (unsigned long long)uniqueRemoteId;
- (void)setUniqueRemoteId:(unsigned long long)arg0;
- (char)isPartial;
- (void)setIsPartial:(char)arg0;
- (void)setHasTemporaryUid:(char)arg0;
- (NSString *)mailboxName;
- (int)compareByUidWithMessage:(NSString *)arg0;
- (void)setMutableInfoFromMessage:(NSString *)arg0;
- (id)dataPathForMimePart:(id)arg0;
- (void)markAsViewed;
- (void)markAsNotViewed;
- (void)markAsFlagged;
- (void)markAsNotFlagged;
- (void)markAsReplied;
- (void)markAsForwarded;
- (id)preferredEmailAddressToReplyWith;
- (void)setRemoteID:(char *)arg0 flags:(unsigned long long)arg1 size:(unsigned int)arg2 mailboxID:(unsigned int)arg3 originalMailboxID:(unsigned int)arg4;
- (void)setMessageData:(NSData *)arg0 isPartial:(char)arg1;
- (id)dataConsumerForMimePart:(id)arg0;
- (char)canBeDeleted;
- (char)isLibraryMessage;
- (NSString *)metadataValueForKey:(NSString *)arg0;
- (NSObject *)attachmentStorageLocation;
- (struct __C3DLibrary *)library;
- (NSString *)persistentID;
- (void)setMetadataValue:(id)arg0 forKey:(NSString *)arg1;
- (void)setSummary:(NSString *)arg0;

@end
