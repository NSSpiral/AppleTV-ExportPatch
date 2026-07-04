/* Runtime dump - MFSyncResponseQueue
 * Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@interface MFSyncResponseQueue : MFBaseSyncResponseQueue
{
    char _shouldSyncFlags;
}

- (char)addItem:(NSObject *)arg0;
- (char)shouldSyncFlags;

@end
