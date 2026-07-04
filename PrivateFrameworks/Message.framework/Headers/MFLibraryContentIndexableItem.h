/* Runtime dump - MFLibraryContentIndexableItem
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFLibraryContentIndexableItem : NSObject
{
    unsigned int _documentIdentifier;
    NSString * _content;
    NSArray * _to;
    NSArray * _cc;
    NSArray * _senders;
    NSString * _subject;
    unsigned int _mailboxID;
}

@property (nonatomic) unsigned int documentIdentifier;
@property (copy, nonatomic) NSString * content;
@property (copy, nonatomic) NSArray * to;
@property (copy, nonatomic) NSArray * cc;
@property (copy, nonatomic) NSArray * senders;
@property (copy, nonatomic) NSString * subject;
@property (nonatomic) unsigned int mailboxID;

- (void)dealloc;
- (int)compare:(NSObject *)arg0;
- (NSString *)content;
- (void)setSubject:(NSString *)arg0;
- (NSString *)subject;
- (void)setTo:(NSArray *)arg0;
- (NSArray *)to;
- (NSArray *)senders;
- (unsigned int)mailboxID;
- (void)setMailboxID:(unsigned int)arg0;
- (NSArray *)cc;
- (MFLibraryContentIndexableItem *)initWithDocumentIdentifier:(unsigned int)arg0;
- (void)setCc:(NSArray *)arg0;
- (void)setSenders:(NSArray *)arg0;
- (unsigned int)documentIdentifier;
- (void)setDocumentIdentifier:(unsigned int)arg0;
- (void)setContent:(NSString *)arg0;

@end
