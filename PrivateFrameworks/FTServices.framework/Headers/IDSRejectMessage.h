/* Runtime dump - IDSRejectMessage
 * Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@interface IDSRejectMessage : IDSFaceTimeMessage <NSCopying>
{
    NSData * _selfPushToken;
    NSData * _peerPushToken;
    NSString * _peerID;
    NSNumber * _reason;
}

@property (copy) NSData * peerPushToken;
@property (copy) NSData * selfPushToken;
@property (copy) NSString * peerID;
@property (copy) NSNumber * reason;

- (NSString *)peerID;
- (void)setPeerID:(NSString *)arg0;
- (void)dealloc;
- (NSNumber *)reason;
- (IDSRejectMessage *)copyWithZone:(struct _NSZone *)arg0;
- (NSData *)selfPushToken;
- (void)setSelfPushToken:(NSData *)arg0;
- (NSData *)peerPushToken;
- (void)setPeerPushToken:(NSData *)arg0;
- (NSString *)bagKey;
- (MFMessageBody *)messageBody;
- (void)setReason:(NSNumber *)arg0;
- (NSArray *)requiredKeys;

@end
