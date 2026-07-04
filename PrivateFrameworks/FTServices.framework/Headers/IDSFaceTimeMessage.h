/* Runtime dump - IDSFaceTimeMessage
 * Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@interface IDSFaceTimeMessage : FTIDSMessage <NSCopying>
{
    NSData * _sessionToken;
}

@property (copy) NSData * sessionToken;

- (void)dealloc;
- (IDSFaceTimeMessage *)init;
- (IDSFaceTimeMessage *)copyWithZone:(struct _NSZone *)arg0;
- (char)isValidMessage;
- (char)hasRequiredKeys:(id *)arg0;
- (MFMessageBody *)messageBody;
- (NSData *)sessionToken;
- (void)setSessionToken:(NSData *)arg0;
- (NSArray *)requiredKeys;

@end
