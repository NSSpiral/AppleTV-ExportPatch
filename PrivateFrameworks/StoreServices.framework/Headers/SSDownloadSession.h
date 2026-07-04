/* Runtime dump - SSDownloadSession
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDownloadSession : NSObject
{
    SSXPCConnection * _controlConnection;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    long long _sessionID;
    long long _assetID;
    long long _downloadID;
}

@property (readonly) SSDownload * download;
@property (readonly) SSDownloadAsset * downloadAsset;

- (SSDownloadAsset *)downloadAsset;
- (SSDownload *)download;
- (void)dealloc;
- (SSDownloadSession *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)_initWithMessage:(NSString *)arg0 controlConnection:(SSXPCConnection *)arg1;
- (SSDownloadSession *)_initSSDownloadSession;
- (NSString *)_copySessionPropertyWithKey:(char *)arg0;

@end
