/* Runtime dump - HAPFragmentationStream
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPFragmentationStream : NSObject
{
    <HAPFragmentationStreamDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSMutableOrderedSet * _pendingPackets;
    NSNumber * _currentPacketTransactionIdentifier;
}

@property (weak) <HAPFragmentationStreamDelegate> * delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * clientQueue;
@property (readonly, nonatomic) NSMutableOrderedSet * pendingPackets;
@property (retain, nonatomic) NSNumber * currentPacketTransactionIdentifier;

+ (NSData *)fragmentationPacketsForData:(NSData *)arg0 maxLength:(unsigned int)arg1 transactionIdentifier:(unsigned short)arg2;

- (void)setDelegate:(<HAPFragmentationStreamDelegate> *)arg0;
- (HAPFragmentationStream *)init;
- (<HAPFragmentationStreamDelegate> *)delegate;
- (void)close;
- (void).cxx_destruct;
- (void)open;
- (NSObject<OS_dispatch_queue> *)clientQueue;
- (void)receivedFragmentedPacket:(NSData *)arg0;
- (NSNumber *)currentPacketTransactionIdentifier;
- (void)__removeAllPendingPacketsWithTransactionIdentifier:(unsigned short)arg0;
- (void)__addFragmentationPacket:(NSData *)arg0;
- (char)__isTransactionCompleteWithTransactionIdentifier:(unsigned short)arg0;
- (NSString *)__transactionDataWithTransactionIdentifier:(unsigned short)arg0;
- (void)setCurrentPacketTransactionIdentifier:(NSNumber *)arg0;
- (NSString *)__filteredPacketsWithTransactionIdentifier:(unsigned short)arg0;
- (NSMutableOrderedSet *)pendingPackets;

@end
