/* Runtime dump - TSPExternalReferenceDataStorage
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPExternalReferenceDataStorage : TSPFileDataStorage
{
    NSURL * _URL;
    NSData * _bookmarkData;
    TSPObjectContext * _context;
}

- (NSString *)storageForDataCopyFromOtherContext;
- (TSPExternalReferenceDataStorage *)initWithBookmarkData:(NSData *)arg0 context:(TSPObjectContext *)arg1;
- (void)archiveInfoMessage:(struct DataInfo *)arg0 archiver:(NSObject *)arg1;
- (void)performReadWithAccessor:(TSCH3DScenePropertyAccessor *)arg0;
- (id)bookmarkDataForArchiver:(id)arg0;
- (TSPExternalReferenceDataStorage *)initWithURL:(NSString *)arg0;
- (void).cxx_destruct;
- (char)isReadable;

@end
