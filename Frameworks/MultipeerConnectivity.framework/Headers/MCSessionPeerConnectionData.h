/* Runtime dump - MCSessionPeerConnectionData
 * Image: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

@interface MCSessionPeerConnectionData : NSObject
{
    char _hasIdentitySet;
    NSData * _gckSessionConnectionData;
    int _encryptionPreference;
}

@property (retain, nonatomic) NSData * gckSessionConnectionData;
@property (nonatomic) int encryptionPreference;
@property (nonatomic) char hasIdentitySet;

+ (NSObject *)connectionDataSegmentWithEncryptionPreference:(int)arg0 identitySet:(char)arg1 gckSessionConnectionDataBytes:(void *)arg2 gckSessionConnectionDataLength:(unsigned long)arg3;

- (char)parseConnectionDataBlob:(id)arg0;
- (void)setEncryptionPreference:(int)arg0;
- (void)setHasIdentitySet:(char)arg0;
- (void)setGckSessionConnectionData:(NSData *)arg0;
- (void)parseConnectionDataSegmentWithBytes:(char *)arg0 withLength:(unsigned long)arg1;
- (MCSessionPeerConnectionData *)initWithConnectionDataBlob:(NSData *)arg0;
- (NSData *)gckSessionConnectionData;
- (int)encryptionPreference;
- (char)hasIdentitySet;
- (void)dealloc;

@end
