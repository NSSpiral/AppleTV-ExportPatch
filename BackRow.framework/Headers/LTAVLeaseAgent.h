/* Runtime dump - LTAVLeaseAgent
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface LTAVLeaseAgent : ATVStateMachine
{
    NSNumber * _sagaID;
    char _drmSyncComplete;
    struct FPLeaseSyncOpaque_ * _lease;
    ATVDataItem * _item;
    unsigned long _FPMediaKind;
    NSString * _storeMediaKind;
    NSString * _leaseID;
    int _numRenewalRetries;
    NSTimer * renewTimer;
    <LTAVLeaseAgentAdaptor> * _adaptor;
    double _leaseDuration;
}

@property (readonly, nonatomic) <LTAVLeaseAgentAdaptor> * adaptor;
@property (weak, nonatomic) NSTimer * renewTimer;
@property (nonatomic) double leaseDuration;

+ (NSObject *)leaseAgentForMediaItem:(NSObject *)arg0 adaptor:(<LTAVLeaseAgentAdaptor> *)arg1;
+ (void)initialize;
+ (NSObject *)_documentForOperation:(NSObject *)arg0 mediaItem:(NSObject *)arg1 clientData:(NSData *)arg2 leaseID:(NSString *)arg3 storeMediaKind:(NSString *)arg4;
+ (void)stopAllLeases;

- (void)_initializeStateMachine:(NSObject *)arg0;
- (LTAVLeaseAgent *)initWithMediaItem:(NSObject *)arg0 adaptor:(<LTAVLeaseAgentAdaptor> *)arg1;
- (void)currentItemWillStop;
- (void)currentItemDidChange;
- (NSString *)_leaseID;
- (char)_currentItemIsLeasedItem;
- (void)_postDelayedEvent:(NSObject *)arg0;
- (NSTimer *)renewTimer;
- (void)setRenewTimer:(NSTimer *)arg0;
- (void)setLeaseDuration:(double)arg0;
- (<LTAVLeaseAgentAdaptor> *)adaptor;
- (NSObject *)_decodeContent:(NSObject *)arg0;
- (void)_authenticationSucceeded;
- (void)_authenticationFailed;
- (void)_augmentSagaMediaItemWithDownloadResponse:(SSDownload *)arg0;
- (void)_addMetadataToSagaMediaItemWithDownloadResponse:(SSDownload *)arg0;
- (NSURLResponse *)_dsidFromDownloadResponse:(NSURLResponse *)arg0;
- (void)_delayedEventTimerFired:(id)arg0;
- (char)_errorIsPasswordFailure:(id)arg0;
- (double)leaseDuration;
- (void)dealloc;
- (void).cxx_destruct;
- (void)stopLease;
- (void)startLease;
- (void)_drmSyncCompleteWithError:(NSError *)arg0 wasCancelled:(char)arg1;
- (id)_initiateLease;
- (NSError *)_invalidateAgentWithError:(NSError *)arg0;
- (void)_leaseRenewalLoaded:(id)arg0;
- (void)_stopLease;
- (NSError *)_invalidateAgentWithError:(NSError *)arg0 wasCancelled:(char)arg1;
- (void)_renewLease:(id)arg0;
- (void)_leaseAcquisitionLoaded:(id)arg0;
- (NSDictionary *)_errorFromDictionary:(NSDictionary *)arg0;
- (char)_errorIsRecoverable:(int)arg0;

@end
