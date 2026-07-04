/* Runtime dump - BBDataProviderProxy
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBDataProviderProxy : NSObject <BBRemoteDataProviderClientProxy>
{
    <BBRemoteDataProvider> * _dataProvider;
    NSObject<OS_dispatch_queue> * _clientCalloutQueue;
    BBDataProviderIdentity * _identity;
    char _dataProviderDidLoad;
    NSObject<OS_dispatch_queue> * _proxyQueue;
    <BBRemoteDataProviderServerProxy> * _serverProxy;
    char _connected;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (retain) BBDataProviderIdentity * identity;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (NSString *)description;
- (void)dataProviderDidLoad;
- (void)bulletinsWithRequestParameters:(NSDictionary *)arg0 lastCleared:(id)arg1 completion:(id /* block */)arg2;
- (void)clearedInfoAndBulletinsForClearingAllBulletinsWithLimit:(id)arg0 lastClearedInfo:(NSDictionary *)arg1 completion:(id /* block */)arg2;
- (void)clearedInfoForBulletins:(id)arg0 lastClearedInfo:(NSDictionary *)arg1 completion:(id /* block */)arg2;
- (void)deliverBulletinActionResponse:(NSURLResponse *)arg0;
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
- (void)setServerProxy:(<BBRemoteDataProviderServerProxy> *)arg0;
- (BBDataProviderProxy *)initWithDataProvider:(<BBRemoteDataProvider> *)arg0 clientReplyQueue:(NSObject *)arg1;
- (void)_makeClientRequest:(NSURLRequest *)arg0;
- (void)_makeServerRequest:(NSURLRequest *)arg0;
- (void)updateSectionInfoInCategory:(int)arg0 withHandler:(id /* block */)arg1 completion:(/* block */ id)arg2;
- (void)updateSectionInfoWithHandler:(id /* block */)arg0 completion:(/* block */ id)arg1;
- (void)addBulletin:(BBBulletin *)arg0 interrupt:(char)arg1;
- (void)reloadSectionParameters;
- (void)updateClearedInfoWithHandler:(id /* block */)arg0;
- (void)updateSectionInfoWithHandler:(id /* block */)arg0;
- (void)setIdentity:(BBDataProviderIdentity *)arg0;
- (void)reloadDefaultSectionInfo;
- (BBDataProviderIdentity *)identity;
- (void)updateIdentity:(NSObject *)arg0;

@end
