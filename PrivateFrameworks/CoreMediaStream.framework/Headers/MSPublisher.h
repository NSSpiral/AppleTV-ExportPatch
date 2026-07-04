/* Runtime dump - MSPublisher
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSPublisher : MSCupidStateMachine <MSPublisher, MSPublishStreamsProtocolDelegate, MSPublishStorageProtocolDelegate>
{
    <MSPublisherDelegate> * _delegate;
    MSMediaStreamDaemon * _daemon;
    int _state;
    MSObjectQueue * _uploadQueue;
    MSObjectQueue * _derivativesQueue;
    MSObjectQueue * _quarantinedQueue;
    NSArray * _pendingDerivativesQueue;
    NSMutableArray * _requestAuthQueue;
    unsigned int _sendingQueueCount;
    NSMutableArray * _sendingQueue;
    NSMutableDictionary * _fileHashToAssetMap;
    MSPublishStreamsProtocol * _protocol;
    <MSPublishStorageProtocol> * _storageProtocol;
    NSURL * _storageProtocolURL;
    NSMutableArray * _tempFiles;
    NSMutableDictionary * _maxSizeByUTI;
    long long _publishTargetByteCount;
    int _publishBatchSize;
    int _maxErrorCount;
}

@property (nonatomic) MSMediaStreamDaemon * daemon;
@property (retain, nonatomic) NSURL * storageProtocolURL;
@property (nonatomic) long long publishTargetByteCount;
@property (nonatomic) int publishBatchSize;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) <MSPublisherDelegate> * delegate;

+ (NSDate *)nextActivityDate;
+ (MSPublisher *)personIDsWithOutstandingActivities;
+ (char)isInRetryState;
+ (NSObject *)publisherForPersonID:(NSObject *)arg0;
+ (NSObject *)existingPublisherForPersonID:(NSObject *)arg0;
+ (void)stopAllActivities;
+ (NSObject *)_clearInstantiatedPublishersByPersonID;
+ (NSObject *)nextActivityDateForPersonID:(NSObject *)arg0;
+ (void)_setMasterNextActivityDate:(NSDate *)arg0 forPersonID:(NSObject *)arg1;
+ (void)forgetPersonID:(NSObject *)arg0;

- (void)publish;
- (void)dealloc;
- (void)setDelegate:(<MSPublisherDelegate> *)arg0;
- (<MSPublisherDelegate> *)delegate;
- (void)stop;
- (void)deactivate;
- (void).cxx_destruct;
- (int)_stop;
- (MSMediaStreamDaemon *)daemon;
- (void)setDaemon:(MSMediaStreamDaemon *)arg0;
- (void)reenqueueQuarantinedAssetCollections;
- (char)enqueueAssetCollections:(id)arg0 outError:(id *)arg1;
- (char)dequeueAssetCollectionWithGUIDs:(id)arg0 outError:(id *)arg1;
- (void)computeHashForAsset:(NSSet *)arg0;
- (MSPublisher *)initWithPersonID:(NSString *)arg0 baseURL:(NSURL *)arg1;
- (char)_isInRetryState;
- (void)_serverSideConfigurationDidChange:(NSDictionary *)arg0;
- (void)_refreshServerSideConfiguredParameters;
- (void)_updateMasterManifest;
- (void)_didFinishUsingAssetCollections:(id)arg0;
- (void)_registerAsset:(NSSet *)arg0;
- (char)_verifyAssetFile:(NSString *)arg0;
- (id)_collectionWithNoDerivatives:(id)arg0;
- (id)_checkAssetCollectionFiles:(id)arg0;
- (char)_isAllowedToUpload;
- (void)_requestDerivatives;
- (void)_sendMetadataToStreams;
- (void)_sendFilesToMMCS;
- (void)_sendUploadComplete;
- (void)submitAssetCollectionsForPublication:(NSObject *)arg0 skipAssetCollections:(id)arg1;
- (int)publishStorageProtocol:(NSObject *)arg0 didRequestFDForAsset:(NSSet *)arg1;
- (void)publishStorageProtocol:(NSObject *)arg0 didFinishUsingFD:(int)arg1 forAsset:(NSObject *)arg2;
- (void)_removeAssetsInAssetCollectionWrappersFromAssetMap:(NSObject *)arg0;
- (id)_checkObjectWrappers:(id)arg0;
- (void)_addAssetToFileHashMap:(NSObject *)arg0;
- (NSError *)_invalidStreamsResponseErrorUnderlyingError:(NSError *)arg0;
- (void)setStorageProtocolURL:(NSURL *)arg0;
- (void)_quarantineOrDiscardWrappers:(id)arg0 withError:(NSError *)arg1;
- (void)_categorizeError:(NSError *)arg0 setOutIsIgnorable:(char *)arg1 setOutIsCounted:(char *)arg2 setOutIsFatal:(char *)arg3 setOutNeedsBackoff:(char *)arg4 setOutIsTemporary:(char *)arg5 setOutIsTokenAuth:(char *)arg6 setOutIsAuthError:(char *)arg7;
- (void)_registerAllAssetsForWrapper:(NSObject *)arg0;
- (NSError *)_abortedError;
- (void)_abort;
- (void)submitAssetCollectionsForPublication:(NSObject *)arg0;
- (int)publishBatchSize;
- (void)setPublishBatchSize:(int)arg0;
- (void)publishStreamsProtocol:(NSObject *)arg0 didFinishUploadingMetadataResponse:(NSURLResponse *)arg1 error:(NSError *)arg2;
- (void)publishStreamsProtocol:(NSObject *)arg0 didReceiveAuthenticationError:(char)arg1;
- (void)publishStreamsProtocol:(NSObject *)arg0 didFinishSendingUploadCompleteError:(NSError *)arg1;
- (void)publishStorageProtocol:(NSObject *)arg0 didFinishUploadingAsset:(NSSet *)arg1 error:(NSError *)arg2;
- (void)publishStorageProtocolDidFinishPublishingAllAssets:(NSArray *)arg0;
- (void)_removeAssetFromFileHashMap:(NSObject *)arg0;
- (void)_forget;
- (NSURL *)storageProtocolURL;
- (long long)publishTargetByteCount;
- (void)setPublishTargetByteCount:(long long)arg0;
- (void)abort;

@end
