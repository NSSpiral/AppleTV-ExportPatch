/* Runtime dump - TSPReadOnlyFileDataStorage
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPReadOnlyFileDataStorage : TSPFileDataStorage
{
    NSURL * _URL;
}

- (void)performReadWithAccessor:(TSCH3DScenePropertyAccessor *)arg0;
- (NSData *)writeData:(NSData *)arg0 toPackageWriter:(NSObject *)arg1 infoMessage:(struct DataInfo *)arg2 preferredFilename:(NSString *)arg3;
- (TSPReadOnlyFileDataStorage *)initWithURL:(NSString *)arg0;
- (char)readOnly;
- (void).cxx_destruct;

@end
