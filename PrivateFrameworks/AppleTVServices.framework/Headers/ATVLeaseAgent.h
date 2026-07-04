/* Runtime dump - ATVLeaseAgent
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVLeaseAgent : ATVStateMachine
{
    ATVDataItem * _item;
    char _drmSyncComplete;
    NSNumber * _sagaID;
    NSString * _storeMediaKind;
    NSString * _leaseID;
    double _leaseDuration;
    NSTimer * _renewalTimer;
    unsigned int _numRenewalRetries;
    unsigned long _FPMediaKind;
    unsigned long long _dsid;
    struct FPLeaseSyncOpaque_ * _lease;
}

+ (void)initialize;
+ (NSObject *)_documentForOperation:(NSObject *)arg0 mediaItem:(NSObject *)arg1 clientData:(NSData *)arg2 leaseID:(NSString *)arg3 storeMediaKind:(NSString *)arg4;
+ (void)stopAllLeases;

- (void).cxx_destruct;
- (void)stopLease;
- (ATVLeaseAgent *)initWithMediaItem:(NSObject *)arg0 stateChangedHandler:(id /* block */)arg1;
- (void)startLease;
- (void)_initializeStateMachine;
- (void)_drmSyncCompleteWithError:(NSError *)arg0 wasCancelled:(char)arg1;
- (id)_initiateLease;
- (NSError *)_invalidateAgentWithError:(NSError *)arg0;
- (void)_leaseRenewalLoaded:(id)arg0;
- (void)_stopLease;
- (NSError *)_invalidateAgentWithError:(NSError *)arg0 wasCancelled:(char)arg1;
- (void)_renewLease:(id)arg0;
- (void)_leaseAcquisitionLoaded:(id)arg0;
- (NSDictionary *)_errorFromDictionary:(NSDictionary *)arg0;
- (NSDictionary *)_decodeResponseDictionary:(NSDictionary *)arg0;
- (char)_errorIsRecoverable:(int)arg0;

@end
