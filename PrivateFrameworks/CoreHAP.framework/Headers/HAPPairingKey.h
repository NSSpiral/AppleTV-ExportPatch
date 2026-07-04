/* Runtime dump - HAPPairingKey
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPPairingKey : NSObject
{
    NSData * _data;
}

@property (readonly, copy, nonatomic) NSData * data;

- (HAPPairingKey *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)debugDescription;
- (NSData *)data;
- (NSString *)shortDescription;
- (void).cxx_destruct;
- (NSString *)descriptionWithPointer:(char)arg0;
- (HAPPairingKey *)initWithPairingKeyData:(NSData *)arg0;

@end
