/* Runtime dump - MFSearchResponseQueue
 * Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@interface MFSearchResponseQueue : MFBaseSyncResponseQueue
{
    NSMutableIndexSet * indexSet;
    unsigned int limit;
}

@property (readonly, retain, nonatomic) NSIndexSet * indexSet;

- (void)dealloc;
- (MFSearchResponseQueue *)init;
- (char)flush;
- (NSIndexSet *)indexSet;
- (char)addItem:(NSObject *)arg0;
- (unsigned int)uidForItem:(NSObject *)arg0;
- (unsigned long long)flagsForItem:(NSObject *)arg0;

@end
