/* Runtime dump - IDSInitiateMessage
 * Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@interface IDSInitiateMessage : IDSFaceTimeMessage <NSCopying>
{
    NSData * _selfBlob;
    NSData * _selfPushToken;
    NSNumber * _selfNATType;
    NSData * _selfNatIP;
    NSArray * _peers;
    NSArray * _canonicalizedPeers;
    NSDictionary * _regionInformation;
}

@property (copy) NSData * selfBlob;
@property (copy) NSData * selfPushToken;
@property (copy) NSNumber * selfNATType;
@property (copy) NSData * selfNatIP;
@property (copy) NSDictionary * regionInformation;
@property (copy) NSArray * peers;
@property (copy) NSArray * canonicalizedPeers;

- (void)dealloc;
- (IDSInitiateMessage *)init;
- (IDSInitiateMessage *)copyWithZone:(struct _NSZone *)arg0;
- (NSData *)selfPushToken;
- (void)setSelfPushToken:(NSData *)arg0;
- (NSNumber *)selfNATType;
- (void)setSelfNATType:(NSNumber *)arg0;
- (NSDictionary *)regionInformation;
- (NSData *)selfNatIP;
- (void)setCanonicalizedPeers:(NSArray *)arg0;
- (void)setSelfNatIP:(NSData *)arg0;
- (NSArray *)canonicalizedPeers;
- (void)setRegionInformation:(NSDictionary *)arg0;
- (void)setSelfBlob:(NSData *)arg0;
- (NSData *)selfBlob;
- (NSArray *)peers;
- (void)setPeers:(NSArray *)arg0;
- (NSString *)bagKey;
- (void)handleResponseDictionary:(NSDictionary *)arg0;
- (MFMessageBody *)messageBody;
- (NSArray *)requiredKeys;

@end
