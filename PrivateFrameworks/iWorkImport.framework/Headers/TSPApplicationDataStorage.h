/* Runtime dump - TSPApplicationDataStorage
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPApplicationDataStorage : TSPDocumentResourceDataStorage
{
    char _isValidated;
}

- (NSString *)filenameForPreferredFilename:(NSString *)arg0;
- (void)performReadWithAccessor:(TSCH3DScenePropertyAccessor *)arg0;
- (TSPApplicationDataStorage *)initWithManager:(NSObject *)arg0 documentResourceInfo:(TSPDocumentResourceInfo *)arg1 isValidated:(char)arg2;
- (TSPApplicationDataStorage *)initWithManager:(TSPDocumentResourceManager *)arg0 documentResourceInfo:(TSPDocumentResourceInfo *)arg1;
- (void)validateIfNeeded;
- (NSDictionary *)fileURLForInfo:(NSDictionary *)arg0;
- (char)isReadable;

@end
