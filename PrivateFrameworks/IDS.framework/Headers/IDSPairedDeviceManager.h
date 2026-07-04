/* Runtime dump - IDSPairedDeviceManager
 * Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSPairedDeviceManager : NSObject <IDSDaemonListenerProtocol>
{
    _IDSCompletionHandler * _deleteCompletion;
    _IDSCompletionHandler * _localCompletion;
    _IDSCompletionHandler * _pairedCompletion;
    _IDSCompletionHandler * _deliveryStatsCompletion;
    NSSet * _allowedTrafficClassifiers;
}

@property (retain, nonatomic) NSSet * allowedTrafficClassifiers;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (IDSPairedDeviceManager *)sharedInstance;

- (void)dealloc;
- (IDSPairedDeviceManager *)init;
- (void)dropAllMessagesWithoutAnyAllowedClassifier;
- (void)setPairedDeviceInfo:(NSDictionary *)arg0;
- (void)localDeviceInfo:(NSDictionary *)arg0;
- (void)pairedDeviceInfo:(NSDictionary *)arg0;
- (void)deliveryStats:(id)arg0;
- (void)device:(NSObject *)arg0 pairingDeleted:(char)arg1;
- (void)device:(NSObject *)arg0 pairingAdded:(char)arg1;
- (void)deletePairedDevice:(NSObject *)arg0 withCompletionBlock:(id /* block */)arg1 queue:(/* block */ id)arg2;
- (void)getPairedDeviceInfoWithCompletionBlock:(id /* block */)arg0 queue:(/* block */ id)arg1;
- (void)getDeliveryStatsWithCompletionBlock:(id /* block */)arg0 queue:(/* block */ id)arg1;
- (void)setAllowedTrafficClassifiers:(NSSet *)arg0;
- (NSSet *)allowedTrafficClassifiers;
- (void)getLocalDeviceInfoWithCompletionBlock:(id /* block */)arg0 queue:(/* block */ id)arg1;

@end
