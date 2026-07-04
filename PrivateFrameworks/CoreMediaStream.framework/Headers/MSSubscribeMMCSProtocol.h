/* Runtime dump - MSSubscribeMMCSProtocol
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSSubscribeMMCSProtocol : MSMMCSProtocol <MSSubscribeStorageProtocol>
{
    <MSSubscribeStorageProtocolDelegate> * _delegate;
    unsigned int _itemCount;
    NSMutableDictionary * _itemIDToAssetDict;
    unsigned long long * _itemIDs;
    char * * _signatures;
    char * * _authTokens;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) <MSSubscribeStorageProtocolDelegate> * delegate;

- (void)dealloc;
- (void)setDelegate:(<MSSubscribeStorageProtocolDelegate> *)arg0;
- (<MSSubscribeStorageProtocolDelegate> *)delegate;
- (void)deactivate;
- (void).cxx_destruct;
- (MSSubscribeMMCSProtocol *)initWithPersonID:(NSString *)arg0;
- (void)retrieveAssets:(NSArray *)arg0;
- (void)_getItemDone:(unsigned long long)arg0 path:(NSString *)arg1 error:(NSError *)arg2;
- (void)_requestCompleted;
- (void)_tellDelegateProtocolDidFinishRetrievingAssetParams:(id)arg0;

@end
