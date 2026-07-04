/* Runtime dump - BBDataProvider
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBDataProvider : NSObject <BBSectionIdentity>
{
    NSObject<OS_dispatch_queue> * _identityQueue;
    BBDataProviderIdentity * __identity;
}

@property (retain) BBDataProviderIdentity * identity;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSString *)sortKey;
- (void)dealloc;
- (BBDataProvider *)init;
- (NSString *)description;
- (NSString *)debugDescription;
- (void)invalidate;
- (NSArray *)sortDescriptors;
- (char)initialized;
- (void)dataProviderDidLoad;
- (void)bulletinsWithRequestParameters:(NSDictionary *)arg0 lastCleared:(id)arg1 completion:(id /* block */)arg2;
- (void)clearedInfoAndBulletinsForClearingAllBulletinsWithLimit:(id)arg0 lastClearedInfo:(NSDictionary *)arg1 completion:(id /* block */)arg2;
- (void)clearedInfoForBulletins:(id)arg0 lastClearedInfo:(NSDictionary *)arg1 completion:(id /* block */)arg2;
- (void)attachmentPNGDataForRecordID:(NSObject *)arg0 sizeConstraints:(NSArray *)arg1 completion:(id /* block */)arg2;
- (void)attachmentAspectRatioForRecordID:(NSObject *)arg0 completion:(id /* block */)arg1;
- (void)primaryAttachmentDataForRecordID:(NSObject *)arg0 completion:(id /* block */)arg1;
- (void)noteSectionInfoDidChange:(NSDictionary *)arg0;
- (void)deliverMessageWithName:(NSString *)arg0 userInfo:(NSDictionary *)arg1;
- (NSString *)sectionIdentifier;
- (NSArray *)debugDescriptionWithChildren:(unsigned int)arg0;
- (NSString *)universalSectionIdentifier;
- (char)syncsBulletinDismissal;
- (char)canClearAllBulletins;
- (NSDictionary *)sectionParameters;
- (NSString *)parentSectionIdentifier;
- (void)updateClearedInfoWithClearedInfo:(NSDictionary *)arg0 handler:(id /* block */)arg1 completion:(/* block */ id)arg2;
- (void)updateSectionInfoWithSectionInfo:(NSDictionary *)arg0 handler:(id /* block */)arg1 completion:(/* block */ id)arg2;
- (BBSectionInfo *)defaultSectionInfo;
- (NSString *)sectionDisplayName;
- (BBSectionIcon *)sectionIcon;
- (void)deliverResponse:(char)arg0 forBulletinRequest:(NSURLRequest *)arg1;
- (char)isPushDataProvider;
- (NSArray *)defaultSubsectionInfos;
- (NSObject *)displayNameForSubsectionID:(NSObject *)arg0;
- (char)migrateSectionInfo:(NSDictionary *)arg0 oldSectionInfo:(NSDictionary *)arg1;
- (void)startWatchdog;
- (void)reloadIdentityWithCompletion:(id /* block */)arg0;
- (char)canPerformMigration;
- (void)setIdentity:(BBDataProviderIdentity *)arg0;
- (BBDataProviderIdentity *)identity;

@end
