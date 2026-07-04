/* Runtime dump - TSPDataDownloadManager
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDataDownloadManager : NSObject
{
    TSPObjectContext * _context;
    TSPDocumentResourceDataProvider * _docServerDataProvider;
    <TSPDataDownloadManagerDelegate> * _delegate;
}

@property (weak, nonatomic) <TSPDataDownloadManagerDelegate> * delegate;

- (NSString *)documentResourceDataWithDigestString:(NSString *)arg0 locator:(NSString *)arg1 filename:(NSString *)arg2;
- (void)setDelegate:(<TSPDataDownloadManagerDelegate> *)arg0;
- (TSPDataDownloadManager *)init;
- (<TSPDataDownloadManagerDelegate> *)delegate;
- (TSPDataDownloadManager *)initWithContext:(TSPObjectContext *)arg0;
- (void).cxx_destruct;

@end
