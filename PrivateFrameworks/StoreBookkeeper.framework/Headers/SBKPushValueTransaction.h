/* Runtime dump - SBKPushValueTransaction
 * Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKPushValueTransaction : SBKTransaction
{
    char _isRechedulable;
    char _success;
    <SBKKeyValuePayloadPair> * _clientItemPayloadPair;
    NSString * _clientItemVersionAnchor;
    <SBKKeyValuePayloadPair> * _requestItemPayloadPair;
    NSString * _requestItemVersionAnchor;
    <SBKKeyValuePayloadPair> * _resultItemPayloadPair;
    NSString * _resultItemVersionAnchor;
    NSString * _resultDomainVersion;
}

@property (readonly) <SBKKeyValuePayloadPair> * clientItemPayloadPair;
@property (readonly) NSString * clientItemVersionAnchor;
@property (readonly) <SBKKeyValuePayloadPair> * requestItemPayloadPair;
@property (readonly) NSString * requestItemVersionAnchor;
@property (readonly) char success;
@property (readonly) <SBKKeyValuePayloadPair> * resultItemPayloadPair;
@property (readonly) NSString * resultItemVersionAnchor;
@property (readonly) NSString * resultDomainVersion;

- (char)success;
- (NSString *)description;
- (void).cxx_destruct;
- (NSString *)clientItemVersionAnchor;
- (NSString *)clampsKey;
- (NSURLRequest *)newRequest;
- (void)processDataInResponse:(NSURLResponse *)arg0 withCompletionHandler:(id /* block */)arg1;
- (id)_resolveConflictBetweenClientPayloadPair:(id)arg0 andServerPayloadPair:(id)arg1;
- (SBKPushValueTransaction *)initWithStoreBagContext:(RadioStoreBag *)arg0 clientItemPayloadPair:(<SBKKeyValuePayloadPair> *)arg1 clientItemVersionAnchor:(NSString *)arg2;
- (<SBKKeyValuePayloadPair> *)clientItemPayloadPair;
- (<SBKKeyValuePayloadPair> *)requestItemPayloadPair;
- (NSString *)requestItemVersionAnchor;
- (<SBKKeyValuePayloadPair> *)resultItemPayloadPair;
- (NSString *)resultItemVersionAnchor;
- (NSString *)resultDomainVersion;

@end
