/* Runtime dump - CKDMescalSessionOperationInfo
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDMescalSessionOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>
{
    int _serverVersion;
    CKDMescalSession * _session;
}

@property (nonatomic) int serverVersion;
@property (retain, nonatomic) CKDMescalSession * session;

- (void).cxx_destruct;
- (CKDMescalSession *)session;
- (void)setSession:(CKDMescalSession *)arg0;
- (int)serverVersion;
- (void)setServerVersion:(int)arg0;

@end
