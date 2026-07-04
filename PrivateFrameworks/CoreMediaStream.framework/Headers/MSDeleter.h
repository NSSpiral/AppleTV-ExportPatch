/* Runtime dump - MSDeleter
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSDeleter : MSCupidStateMachine <MSDeleter, MSDeleteStreamsProtocolDelegate>
{
    MSDeleteStreamsProtocol * _protocol;
    int _state;
    MSObjectQueue * _deleteQueue;
    NSMutableArray * _requestedDeleteWrappers;
    int _batchSize;
    int _maxErrorCount;
    <MSDeleterDelegate> * _delegate;
    MSMediaStreamDaemon * _daemon;
}

@property (nonatomic) MSMediaStreamDaemon * daemon;
@property (nonatomic) int batchSize;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) <MSDeleterDelegate> * delegate;

+ (NSDate *)nextActivityDate;
+ (MSDeleter *)personIDsWithOutstandingActivities;
+ (char)isInRetryState;
+ (NSObject *)deleterForPersonID:(NSObject *)arg0;
+ (NSObject *)existingDeleterForPersonID:(NSObject *)arg0;
+ (void)stopAllActivities;
+ (void)abortAllActivities;
+ (NSObject *)nextActivityDateForPersonID:(NSObject *)arg0;
+ (void)_setMasterNextActivityDate:(NSDate *)arg0 forPersonID:(NSObject *)arg1;
+ (NSObject *)_clearInstantiatedDeletersByPersonID;
+ (void)forgetPersonID:(NSObject *)arg0;

- (void)dealloc;
- (void)setDelegate:(<MSDeleterDelegate> *)arg0;
- (<MSDeleterDelegate> *)delegate;
- (void)stop;
- (void)deactivate;
- (void).cxx_destruct;
- (void)_stop;
- (MSMediaStreamDaemon *)daemon;
- (int)batchSize;
- (void)setDaemon:(MSMediaStreamDaemon *)arg0;
- (void)performOutstandingActivities;
- (void)deleteAssetCollections:(id)arg0;
- (MSDeleter *)initWithPersonID:(NSString *)arg0 baseURL:(NSURL *)arg1;
- (char)_isInRetryState;
- (void)_updateMasterManifest;
- (NSError *)_abortedError;
- (void)_abort;
- (void)_forget;
- (char)_isAllowedToDelete;
- (void)_sendDeleteRequest;
- (void)deleteProtocol:(NSObject *)arg0 didFinishSuccessfulCollections:(id)arg1 failedCollections:(id)arg2 error:(NSError *)arg3;
- (void)deleteProtocol:(NSObject *)arg0 didReceiveAuthenticationError:(char)arg1;
- (void)setBatchSize:(int)arg0;
- (void)abort;

@end
