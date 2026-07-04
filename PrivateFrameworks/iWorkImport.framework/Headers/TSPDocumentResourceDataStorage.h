/* Runtime dump - TSPDocumentResourceDataStorage
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDocumentResourceDataStorage : TSPFileDataStorage
{
    TSPDocumentResourceManager * _manager;
    TSPDocumentResourceInfo * _documentResourceInfo;
}

@property (readonly, nonatomic) TSPDocumentResourceManager * manager;
@property (retain, nonatomic) TSPDocumentResourceInfo * documentResourceInfo;

- (NSString *)storageForDataCopyFromOtherContext;
- (char)isMissingData;
- (NSString *)filenameForPreferredFilename:(NSString *)arg0;
- (NSString *)documentResourceLocator;
- (void)archiveInfoMessage:(struct DataInfo *)arg0 archiver:(NSObject *)arg1;
- (TSPDocumentResourceDataStorage *)initWithManager:(TSPDocumentResourceManager *)arg0 documentResourceInfo:(TSPDocumentResourceInfo *)arg1;
- (TSPDocumentResourceInfo *)documentResourceInfo;
- (void)setDocumentResourceInfo:(TSPDocumentResourceInfo *)arg0;
- (void).cxx_destruct;
- (TSPDocumentResourceManager *)manager;
- (char)isReadable;

@end
