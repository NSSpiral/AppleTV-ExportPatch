/* Runtime dump - IDSSendMessage
 * Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@interface IDSSendMessage : IDSFaceTimeMessage <NSCopying>
{
    NSArray * _peers;
    NSNumber * _reason;
    NSData * _selfPushToken;
}

@property (copy) NSArray * peers;
@property (copy) NSNumber * reason;
@property (copy) NSData * selfPushToken;

- (void)dealloc;
- (NSNumber *)reason;
- (IDSSendMessage *)copyWithZone:(struct _NSZone *)arg0;
- (NSData *)selfPushToken;
- (void)setSelfPushToken:(NSData *)arg0;
- (NSArray *)peers;
- (void)setPeers:(NSArray *)arg0;
- (NSString *)bagKey;
- (MFMessageBody *)messageBody;
- (void)setReason:(NSNumber *)arg0;
- (NSArray *)requiredKeys;

@end
