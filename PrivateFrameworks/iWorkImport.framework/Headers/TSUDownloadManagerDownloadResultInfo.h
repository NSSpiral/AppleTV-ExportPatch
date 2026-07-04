/* Runtime dump - TSUDownloadManagerDownloadResultInfo
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUDownloadManagerDownloadResultInfo : NSObject
{
    char _success;
    NSError * _error;
}

@property (readonly) char success;
@property (readonly) NSError * error;

- (TSUDownloadManagerDownloadResultInfo *)initWithSuccess:(char)arg0 error:(NSError *)arg1;
- (char)success;
- (void).cxx_destruct;
- (NSError *)error;

@end
