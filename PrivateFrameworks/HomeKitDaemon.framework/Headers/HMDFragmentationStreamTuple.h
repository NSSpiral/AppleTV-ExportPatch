/* Runtime dump - HMDFragmentationStreamTuple
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDFragmentationStreamTuple : NSObject
{
    HAPFragmentationStream * _fragmentationStream;
    NSString * _homeUUID;
    HMMessage * _lastMessage;
}

@property (readonly, nonatomic) HAPFragmentationStream * fragmentationStream;
@property (readonly, nonatomic) NSString * homeUUID;
@property (retain, nonatomic) HMMessage * lastMessage;

+ (HMDFragmentationStreamTuple *)tupleWithFragmentationStreamForHome:(id)arg0 delegate:(NSObject *)arg1;

- (void)close;
- (void).cxx_destruct;
- (HAPFragmentationStream *)fragmentationStream;
- (NSString *)homeUUID;
- (HMDFragmentationStreamTuple *)initWithFragmentationStreamForHome:(id)arg0 delegate:(NSObject *)arg1;
- (HMMessage *)lastMessage;
- (void)setLastMessage:(HMMessage *)arg0;

@end
