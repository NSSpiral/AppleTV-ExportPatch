/* Runtime dump - IMTransferServicesCompressionController
 * Image: /System/Library/PrivateFrameworks/IMTransferServices.framework/IMTransferServices
 */

@interface IMTransferServicesCompressionController : NSObject
{
    NSMutableDictionary * _blockMap;
}

+ (IMTransferServicesCompressionController *)sharedInstance;

- (void)fileCopierDidStart:(id)arg0;
- (void)fileCopierDidFinish:(id)arg0;
- (void)_mapCopier:(id)arg0 toBlock:(id /* block */)arg1;
- (id)_blockForCopier:(SEL)arg0;
- (void)_unmapCopier:(id)arg0;
- (void)compressFileTransfer:(id)arg0 completionBlock:(id /* block */)arg1;

@end
