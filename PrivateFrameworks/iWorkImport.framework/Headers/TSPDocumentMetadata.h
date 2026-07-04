/* Runtime dump - TSPDocumentMetadata
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDocumentMetadata : TSPObject
{
    char _isInCollaborationModeForArchiving;
}

- (NSString *)packageLocator;
- (TSPDocumentMetadata *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (long long)tsp_identifier;
- (void)takeSnapshotWithCollaborationMode:(char)arg0;

@end
