/* Runtime dump - CKDMescalSessionURLRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDMescalSessionURLRequest : CKDURLRequest
{
    NSData * _mescalData;
    NSData * _sessionData;
}

@property (retain, nonatomic) NSData * mescalData;
@property (retain, nonatomic) NSData * sessionData;

- (void).cxx_destruct;
- (char)requiresDeviceID;
- (char)requiresSignature;
- (char)allowsAnonymousAccount;
- (CKDMescalSessionURLRequest *)initWithSessionData:(NSData *)arg0;
- (NSData *)mescalData;
- (NSArray *)requestOperations;
- (void)setMescalData:(NSData *)arg0;
- (NSObject *)requestDidParseProtobufObject:(NSObject *)arg0;
- (NSArray *)requestOperationClasses;
- (NSData *)sessionData;
- (void)setSessionData:(NSData *)arg0;
- (int)operationType;

@end
