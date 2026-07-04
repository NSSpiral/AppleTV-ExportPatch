/* Runtime dump - MFDAMailbox
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFDAMailbox : MFMailboxUid
{
    NSString * _folderID;
}

@property (copy) NSString * folderID;

- (void)dealloc;
- (NSString *)description;
- (char)mergeWithUserInfo:(NSDictionary *)arg0;
- (NSNumber *)URLStringWithAccount:(MFWeakReferenceHolder *)arg0;
- (NSString *)folderID;
- (MFDAMailbox *)initWithName:(NSString *)arg0 attributes:(unsigned int)arg1 account:(NSObject *)arg2 folderID:(NSString *)arg3;
- (void)setFolderID:(NSString *)arg0;
- (NSString *)_folderID;

@end
