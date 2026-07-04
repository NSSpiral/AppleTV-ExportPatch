/* Runtime dump - HAPBTLEConnectionRequestTuple
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPBTLEConnectionRequestTuple : NSObject
{
    NSObject<OS_dispatch_source> * _connectionRequestTimer;
    NSString * _identifier;
    unsigned int _advertisementFormat;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_source> * connectionRequestTimer;
@property (readonly, nonatomic) NSString * identifier;
@property (readonly, nonatomic) unsigned int advertisementFormat;

+ (NSTimer *)connectionRequestTupleWithTimer:(NSObject *)arg0 identifier:(NSString *)arg1 advertisementFormat:(unsigned int)arg2;

- (NSString *)identifier;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_source> *)connectionRequestTimer;
- (unsigned int)advertisementFormat;

@end
