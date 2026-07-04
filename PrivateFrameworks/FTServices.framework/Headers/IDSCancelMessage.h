/* Runtime dump - IDSCancelMessage
 * Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@interface IDSCancelMessage : IDSFaceTimeMessage <NSCopying>
{
    NSArray * _peers;
    NSNumber * _reason;
}

@property (copy) NSArray * peers;
@property (copy) NSNumber * reason;

- (void)dealloc;
- (NSNumber *)reason;
- (IDSCancelMessage *)copyWithZone:(struct _NSZone *)arg0;
- (NSArray *)peers;
- (void)setPeers:(NSArray *)arg0;
- (NSString *)bagKey;
- (MFMessageBody *)messageBody;
- (void)setReason:(NSNumber *)arg0;
- (NSArray *)requiredKeys;

@end
