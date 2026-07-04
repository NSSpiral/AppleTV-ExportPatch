/* Runtime dump - MSPublishMMCSProtocol
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSPublishMMCSProtocol : MSMMCSProtocol <MSPublishStorageProtocol>
{
    <MSPublishStorageProtocolDelegate> * _delegate;
    NSMutableDictionary * _itemIDToAssetDict;
    unsigned long long * _itemIDs;
    char * * _signatures;
    char * * _authTokens;
    unsigned int * _itemFlags;
    int _itemsInFlight;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) <MSPublishStorageProtocolDelegate> * delegate;

- (void)dealloc;
- (void)setDelegate:(<MSPublishStorageProtocolDelegate> *)arg0;
- (<MSPublishStorageProtocolDelegate> *)delegate;
- (void)deactivate;
- (void).cxx_destruct;
- (void)computeHashForAsset:(NSSet *)arg0;
- (MSPublishMMCSProtocol *)initWithPersonID:(NSString *)arg0;
- (void)publishAssets:(NSArray *)arg0 URL:(NSString *)arg1;
- (int)_getFileDescriptorFromItem:(unsigned long long)arg0;
- (NSObject *)_getUTIFromItem:(unsigned long long)arg0;
- (void)_putItemDone:(unsigned long long)arg0 putReceipt:(id)arg1 error:(NSError *)arg2;
- (void)_requestCompleted;
- (void)_putItemsFailure;

@end
