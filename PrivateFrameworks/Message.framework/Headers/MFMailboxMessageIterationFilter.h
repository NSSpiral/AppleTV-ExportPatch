/* Runtime dump - MFMailboxMessageIterationFilter
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMailboxMessageIterationFilter : NSObject <MFMessageIterationFilter>
{
    NSIndexSet * _mailboxes;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (char)filterMessageWithStatement:(struct sqlite3_stmt *)arg0;
- (MFMailboxMessageIterationFilter *)initWithMailboxes:(NSIndexSet *)arg0;

@end
