/* Runtime dump - TSPSupportMetadata
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPSupportMetadata : TSPObject
{
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableSet * _acknowledgedServerData;
    char _isInCollaborationModeForArchiving;
    NSSet * _acknowledgedServerDataForArchiving;
}

- (NSString *)packageLocator;
- (TSPSupportMetadata *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (long long)tsp_identifier;
- (void)takeSnapshotWithCollaborationMode:(char)arg0;
- (char)isDataAcknowledgedByServer:(NSObject *)arg0;
- (void)setData:(NSData *)arg0 acknowledgedByServer:(char)arg1;
- (void)resetAcknowledgedServerData;
- (void)isDataAcknowledgedByServer:(NSObject *)arg0 completion:(id /* block */)arg1;
- (TSPSupportMetadata *)initWithContext:(TSPObjectContext *)arg0;
- (TSPSupportMetadata *)initCommon;
- (void).cxx_destruct;

@end
