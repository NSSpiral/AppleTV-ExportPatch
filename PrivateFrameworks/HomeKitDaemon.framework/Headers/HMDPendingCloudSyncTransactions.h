/* Runtime dump - HMDPendingCloudSyncTransactions
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDPendingCloudSyncTransactions : NSObject
{
    char _uploadInProgress;
    NSMutableDictionary * _pendingTransactionDictionary;
    NSMutableArray * _deltaTransactions;
    HMDHomeManager * _homeManager;
}

@property (readonly, nonatomic) unsigned int count;
@property (readonly, nonatomic) NSArray * transactions;
@property (retain, nonatomic) NSMutableDictionary * pendingTransactionDictionary;
@property (nonatomic) char uploadInProgress;
@property (retain, nonatomic) NSMutableArray * deltaTransactions;
@property (readonly, weak, nonatomic) HMDHomeManager * homeManager;

+ (HMDPendingCloudSyncTransactions *)requestToIndentityTypeMapping;
+ (NSString *)convertSaveReasonToTransationReason:(NSString *)arg0;
+ (char)isValidRequestTypeKey:(NSString *)arg0;

- (unsigned int)count;
- (HMDPendingCloudSyncTransactions *)init;
- (void)reset;
- (void).cxx_destruct;
- (void)_loadTransactions:(id)arg0;
- (void)_fixupPendingTransactions;
- (void)setUploadInProgress:(char)arg0;
- (void)setDeltaTransactions:(NSMutableArray *)arg0;
- (void)setPendingTransactionDictionary:(NSMutableDictionary *)arg0;
- (NSMutableArray *)deltaTransactions;
- (void)addTransaction:(NSObject *)arg0;
- (NSMutableDictionary *)pendingTransactionDictionary;
- (char)uploadInProgress;
- (void)_addTransaction:(NSObject *)arg0 reason:(NSString *)arg1 identities:(NSArray *)arg2;
- (HMDHomeManager *)homeManager;
- (HMDPendingCloudSyncTransactions *)initWithTransaction:(NSObject *)arg0 homeManager:(HMDHomeManager *)arg1;
- (void)startUpload;
- (void)stopUploadAndClean;
- (void)stopUploadAndResume;
- (id)identitiesWithHome:(id)arg0 reason:(NSString *)arg1;
- (NSArray *)transactions;
- (void)removePendingTransactionsForHome:(id)arg0;

@end
