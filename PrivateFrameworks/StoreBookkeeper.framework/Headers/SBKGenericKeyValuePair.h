/* Runtime dump - SBKGenericKeyValuePair
 * Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKGenericKeyValuePair : NSObject <SBKKeyValuePayloadPair>
{
    NSString * _kvsKey;
    NSData * _kvsPayload;
}

@property (readonly, nonatomic) NSString * kvsKey;
@property (readonly, nonatomic) NSData * kvsPayload;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSString *)pairWithKVSKey:(NSString *)arg0 kvsPayload:(NSData *)arg1;

- (double)timestamp;
- (void).cxx_destruct;
- (SBKGenericKeyValuePair *)initWithKVSKey:(NSString *)arg0 kvsPayload:(NSData *)arg1;
- (NSString *)kvsKey;
- (NSData *)kvsPayload;
- (NSString *)kvsValueDescription;

@end
