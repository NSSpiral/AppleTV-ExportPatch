/* Runtime dump - MFOfflineTransferFailureSnapshot
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFOfflineTransferFailureSnapshot : NSObject <NSCoding>
{
    NSString * _originalRemoteID;
    NSString * _originalMailboxID;
    unsigned long long _originalMessageFlags;
}

@property (readonly, nonatomic) NSString * originalRemoteID;
@property (readonly, nonatomic) NSString * originalMailboxID;
@property (readonly, nonatomic) unsigned long long originalMessageFlags;

- (void)dealloc;
- (MFOfflineTransferFailureSnapshot *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (NSString *)originalMailboxID;
- (NSString *)originalRemoteID;
- (MFOfflineTransferFailureSnapshot *)initWithOriginalRemoteID:(NSString *)arg0 mailboxID:(unsigned int)arg1 messageFlags:(unsigned long long)arg2;
- (unsigned long long)originalMessageFlags;

@end
