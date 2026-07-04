/* Runtime dump - TSPSaveOperationState
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPSaveOperationState : NSObject
{
    NSMapTable * _newDataStorages;
    int _updateType;
    int _sampleID;
}

@property (readonly, nonatomic) char shouldUpdate;
@property (readonly, nonatomic) char preserveDocumentUUID;
@property (readonly, nonatomic) int updateType;
@property (nonatomic) int sampleID;

- (void)setSampleID:(int)arg0;
- (char)preserveDocumentUUID;
- (char)shouldUpdate;
- (int)sampleID;
- (char)hasNewStorageForData:(NSData *)arg0;
- (void)addNewStorage:(NSStorage *)arg0 forData:(NSData *)arg1;
- (void)enumerateDatasAndStoragesUsingBlock:(id /* block */)arg0;
- (TSPSaveOperationState *)initWithUpdateType:(int)arg0;
- (TSPSaveOperationState *)init;
- (void).cxx_destruct;
- (int)updateType;

@end
