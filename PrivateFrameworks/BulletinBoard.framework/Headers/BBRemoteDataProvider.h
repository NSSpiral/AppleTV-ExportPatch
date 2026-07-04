/* Runtime dump - BBRemoteDataProvider
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBRemoteDataProvider : BBDataProvider <BBRemoteDataProviderServerProxy>
{
    NSString * _sectionID;
    NSObject<OS_dispatch_queue> * _replyQueue;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_queue> * _proxyQueue;
    <BBRemoteDataProviderClientProxy> * _clientProxy;
    char _connected;
    char _serverIsReady;
    NSObject<OS_dispatch_queue> * _serverControlQueue;
    <BBRemoteDataProviderDelegate> * _delegate;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (NSString *)debugDescription;
- (void)dataProviderDidLoad;
- (void)bulletinsWithRequestParameters:(NSDictionary *)arg0 lastCleared:(id)arg1 completion:(id /* block */)arg2;
- (void)clearedInfoAndBulletinsForClearingAllBulletinsWithLimit:(id)arg0 lastClearedInfo:(NSDictionary *)arg1 completion:(id /* block */)arg2;
- (void)clearedInfoForBulletins:(id)arg0 lastClearedInfo:(NSDictionary *)arg1 completion:(id /* block */)arg2;
- (void)attachmentPNGDataForRecordID:(NSObject *)arg0 sizeConstraints:(NSArray *)arg1 completion:(id /* block */)arg2;
- (void)attachmentAspectRatioForRecordID:(NSObject *)arg0 completion:(id /* block */)arg1;
- (void)primaryAttachmentDataForRecordID:(NSObject *)arg0 completion:(id /* block */)arg1;
- (void)noteSectionInfoDidChange:(NSDictionary *)arg0;
- (void)deliverMessageWithName:(NSString *)arg0 userInfo:(NSDictionary *)arg1;
- (void)invalidateBulletins;
- (void)addBulletin:(BBBulletin *)arg0 forDestinations:(unsigned int)arg1;
- (void)modifyBulletin:(id)arg0;
- (void)withdrawBulletinsWithRecordID:(NSObject *)arg0;
- (void)withdrawBulletinWithPublisherBulletinID:(NSString *)arg0;
- (void)reloadSectionParameters:(NSDictionary *)arg0;
- (void)reloadDefaultSectionInfo:(NSDictionary *)arg0;
- (void)getClearedInfoWithCompletion:(id /* block */)arg0;
- (void)setClearedInfo:(NSDictionary *)arg0;
- (void)setSectionInfo:(NSDictionary *)arg0 inCategory:(int)arg1;
- (void)setSectionInfo:(NSDictionary *)arg0;
- (NSString *)sectionIdentifier;
- (NSArray *)debugDescriptionWithChildren:(unsigned int)arg0;
- (void)setClientProxy:(<BBRemoteDataProviderClientProxy> *)arg0 completion:(id /* block */)arg1;
- (BBRemoteDataProvider *)initWithSectionID:(NSString *)arg0 delegate:(<BBRemoteDataProviderDelegate> *)arg1;
- (void)setServerIsReady:(char)arg0;
- (void)updateClearedInfoWithClearedInfo:(NSDictionary *)arg0 handler:(id /* block */)arg1 completion:(/* block */ id)arg2;
- (void)updateSectionInfoWithSectionInfo:(NSDictionary *)arg0 handler:(id /* block */)arg1 completion:(/* block */ id)arg2;
- (void)deliverResponse:(char)arg0 forBulletinRequest:(NSURLRequest *)arg1;
- (char)migrateSectionInfo:(NSDictionary *)arg0 oldSectionInfo:(NSDictionary *)arg1;
- (void)startWatchdog;
- (void)reloadIdentityWithCompletion:(id /* block */)arg0;
- (char)canPerformMigration;
- (void)_logDoesNotRespond:(SEL)arg0;
- (void)_sendClientRequest:(NSURLRequest *)arg0;
- (char)checkResponds:(char)arg0 forSelector:(SEL)arg1;
- (void)calloutToServer:(NSObject *)arg0;
- (void)getSectionInfoWithCompletion:(id /* block */)arg0;

@end
