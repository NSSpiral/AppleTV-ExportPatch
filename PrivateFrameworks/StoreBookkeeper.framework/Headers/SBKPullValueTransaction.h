/* Runtime dump - SBKPullValueTransaction
 * Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKPullValueTransaction : SBKTransaction
{
    char _success;
    NSString * _requestedKey;
    <SBKKeyValuePayloadPair> * _clientItemPayloadPair;
    NSString * _clientItemVersionAnchor;
    <SBKKeyValuePayloadPair> * _resultItemPayloadPair;
    NSString * _resultItemVersionAnchor;
    NSString * _resultDomainVersion;
}

@property (readonly, copy) NSString * requestedKey;
@property (readonly) <SBKKeyValuePayloadPair> * clientItemPayloadPair;
@property (readonly) NSString * clientItemVersionAnchor;
@property (readonly) char success;
@property (readonly) <SBKKeyValuePayloadPair> * resultItemPayloadPair;
@property (readonly) NSString * resultItemVersionAnchor;
@property (readonly) NSString * resultDomainVersion;

- (char)success;
- (NSString *)description;
- (void).cxx_destruct;
- (NSString *)clientItemVersionAnchor;
- (NSString *)requestedKey;
- (NSString *)clampsKey;
- (NSURLRequest *)newRequest;
- (void)processDataInResponse:(NSURLResponse *)arg0 withCompletionHandler:(id /* block */)arg1;
- (<SBKKeyValuePayloadPair> *)clientItemPayloadPair;
- (<SBKKeyValuePayloadPair> *)resultItemPayloadPair;
- (NSString *)resultItemVersionAnchor;
- (NSString *)resultDomainVersion;
- (SBKPullValueTransaction *)initWithStoreBagContext:(RadioStoreBag *)arg0 requestedKey:(NSString *)arg1 clientItemPayloadPair:(<SBKKeyValuePayloadPair> *)arg2 clientItemVersionAnchor:(NSString *)arg3;

@end
