/* Runtime dump - MMCSSimpleFile
 * Image: /System/Library/PrivateFrameworks/MMCSServices.framework/MMCSServices
 */

@interface MMCSSimpleFile : NSObject
{
    int _fd;
    NSString * _authToken;
    int _encryptionBehavior;
    NSString * _localPath;
    NSURL * _requestURL;
    NSString * _requestorID;
    NSString * _guid;
    NSData * _signature;
    NSData * _fileHash;
    double _progress;
    unsigned long long _itemID;
    unsigned long long _protocolFileSize;
}

@property (retain) NSString * guid;
@property unsigned long long itemID;
@property (retain) NSURL * requestURL;
@property (retain) NSString * requestorID;
@property (retain) NSData * signature;
@property (retain) NSString * authToken;
@property (retain) NSString * localPath;
@property int fd;
@property (retain) NSData * fileHash;
@property unsigned long long protocolFileSize;
@property double progress;
@property int encryptionBehavior;

- (int)fd;
- (void)setFd:(int)arg0;
- (void)dealloc;
- (MMCSSimpleFile *)init;
- (NSString *)description;
- (void)setProgress:(double)arg0;
- (double)progress;
- (unsigned long long)itemID;
- (void)setSignature:(NSData *)arg0;
- (NSData *)signature;
- (void)setAuthToken:(NSString *)arg0;
- (NSString *)authToken;
- (void)setItemID:(unsigned long long)arg0;
- (void)setProtocolFileSize:(unsigned long long)arg0;
- (unsigned long long)protocolFileSize;
- (NSURL *)requestURL;
- (void)setGuid:(NSString *)arg0;
- (NSString *)guid;
- (NSString *)localPath;
- (int)encryptionBehavior;
- (void)setRequestorID:(NSString *)arg0;
- (void)setLocalPath:(NSString *)arg0;
- (void)setEncryptionBehavior:(int)arg0;
- (NSString *)requestorID;
- (NSData *)fileHash;
- (void)setFileHash:(NSData *)arg0;
- (void)setRequestURL:(NSURL *)arg0;

@end
