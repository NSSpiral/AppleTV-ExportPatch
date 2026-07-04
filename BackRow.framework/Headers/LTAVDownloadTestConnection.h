/* Runtime dump - LTAVDownloadTestConnection
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/LTDownloadTestConnection.h>

@protocol BRDownload;

@class ATVVideoCacheManager;
@interface LTAVDownloadTestConnection : LTDownloadTestConnection <BRDownload>
{
    ATVVideoCacheManager * _videoCacheManager;
    double _computedBandwidth;
    long long _lastBytesTransferred;
    unsigned long _consecutiveSameBytesTransferredNeeded;
    unsigned long long _numSamplesTakenToComputeTime;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)testContent;
- (unsigned int)fetchedDataLength;
- (int)qualifiedDownloadState;
- (int)downloadStateContext;
- (double)timeUntilPlayable;
- (void)markProgress;
- (void)downloadFinished;
- (void)setPlayable:(char)arg0;
- (int)downloadState;
- (void)resume;
- (void).cxx_destruct;
- (double)startTime;
- (void)startConnection;
- (void)stopConnection;
- (void)pause;
- (double)elapsedTime;
- (unsigned long long)expectedSize;
- (LTAVDownloadTestConnection *)initWithURLString:(NSString *)arg0;
- (unsigned int)expectedContentLength;
- (unsigned long long)byteCount;

@end
