/* Runtime dump - HAPBTLETransactionIdentifier
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPBTLETransactionIdentifier : NSObject
{
    unsigned char _unsignedCharValue;
}

@property (readonly, nonatomic) unsigned char unsignedCharValue;

+ (unsigned char)generateRequestIdentifier;

- (HAPBTLETransactionIdentifier *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)debugDescription;
- (NSString *)shortDescription;
- (unsigned char)unsignedCharValue;
- (HAPBTLETransactionIdentifier *)initWithUnsignedCharValue:(unsigned char)arg0;
- (NSString *)descriptionWithPointer:(char)arg0;

@end
