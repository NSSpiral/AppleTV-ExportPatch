/* Runtime dump - BBLocalDataProvider
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBLocalDataProvider : BBDataProvider
{
    NSObject<OS_dispatch_queue> * _localQueue;
    NSObject<OS_dispatch_queue> * _remoteQueue;
    <BBDataProvider> * _dataProvider;
    NSObject<OS_dispatch_source> * _watchdogTimer;
    char _unresponsive;
    char _invalidated;
}

@property (retain, nonatomic) <BBDataProvider> * dataProvider;

+ (NSObject *)dataProviderWithPrincipalClass:(Class)arg0 serverQueue:(NSObject<OS_dispatch_queue> *)arg1 initializationCompletion:(id /* block */)arg2;
+ (NSObject *)dataProviderWithDataProvider:(<BBDataProvider> *)arg0 serverQueue:(NSObject<OS_dispatch_queue> *)arg1;

- (void)dealloc;
- (void)invalidate;
- (void)setDataProvider:(<BBDataProvider> *)arg0;
- (<BBDataProvider> *)dataProvider;
- (void)dataProviderDidLoad;
- (void)bulletinsWithRequestParameters:(NSDictionary *)arg0 lastCleared:(id)arg1 completion:(id /* block */)arg2;
- (void)clearedInfoForBulletins:(id)arg0 lastClearedInfo:(NSDictionary *)arg1 completion:(id /* block */)arg2;
- (void)attachmentPNGDataForRecordID:(NSObject *)arg0 sizeConstraints:(NSArray *)arg1 completion:(id /* block */)arg2;
- (void)attachmentAspectRatioForRecordID:(NSObject *)arg0 completion:(id /* block */)arg1;
- (void)primaryAttachmentDataForRecordID:(NSObject *)arg0 completion:(id /* block */)arg1;
- (void)noteSectionInfoDidChange:(NSDictionary *)arg0;
- (void)deliverMessageWithName:(NSString *)arg0 userInfo:(NSDictionary *)arg1;
- (void)updateClearedInfoWithClearedInfo:(NSDictionary *)arg0 handler:(id /* block */)arg1 completion:(/* block */ id)arg2;
- (void)updateSectionInfoWithSectionInfo:(NSDictionary *)arg0 handler:(id /* block */)arg1 completion:(/* block */ id)arg2;
- (void)deliverResponse:(char)arg0 forBulletinRequest:(NSURLRequest *)arg1;
- (NSDictionary *)bulletinsWithRequestParameters:(NSDictionary *)arg0 lastCleared:(id)arg1;
- (id)clearedInfoForBulletins:(id)arg0 lastClearedInfo:(NSDictionary *)arg1;
- (NSObject *)attachmentPNGDataForRecordID:(NSObject *)arg0 sizeConstraints:(NSArray *)arg1;
- (NSObject *)primaryAttachmentDataForRecordID:(NSObject *)arg0;
- (NSObject *)attachmentAspectRatioForRecordID:(NSObject *)arg0;
- (char)migrateSectionInfo:(NSDictionary *)arg0 oldSectionInfo:(NSDictionary *)arg1;
- (void)startWatchdog;
- (void)reloadIdentityWithCompletion:(id /* block */)arg0;
- (char)canPerformMigration;
- (BBLocalDataProvider *)initWithPrincipalClass:(Class)arg0 serverQueue:(NSObject<OS_dispatch_queue> *)arg1 initializationCompletion:(id /* block */)arg2;
- (BBLocalDataProvider *)initWithDataProvider:(<BBDataProvider> *)arg0 serverQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (NSObject *)_initWithDataProvider:(<BBDataProvider> *)arg0 sectionID:(NSString *)arg1 serverQueue:(NSObject<OS_dispatch_queue> *)arg2 initializationCompletion:(id /* block */)arg3;
- (void)_watchdogFired;
- (void)_ping;
- (NSDictionary *)_bulletinsWithRequestParameters:(NSDictionary *)arg0 lastCleared:(id)arg1;
- (NSURLRequest *)_doSynchronousRemoteRequest:(NSURLRequest *)arg0 conditionalOn:(/* block */ id)arg1;
- (void)_doAsynchronousRemoteRequest:(NSURLRequest *)arg0 conditionalOn:(/* block */ id)arg1 completion:(id /* block */)arg2;

@end
