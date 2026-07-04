/* Runtime dump - IRProtocol
 * Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface IRProtocol : NSObject
{
    unsigned char _protocolID;
    unsigned char _options;
    double _repeatInterval;
    double _carrierFrequency;
}

@property (readonly, nonatomic) unsigned char protocolID;
@property (readonly, nonatomic) unsigned char options;
@property (readonly, nonatomic) double repeatInterval;
@property (readonly, nonatomic) double carrierFrequency;

+ (NSObject *)protocolWithID:(unsigned char)arg0 options:(unsigned char)arg1;

- (IRProtocol *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (double)repeatInterval;
- (unsigned char)options;
- (IRProtocol *)initWithProtocolID:(unsigned char)arg0 options:(unsigned char)arg1;
- (unsigned char)protocolID;
- (double)carrierFrequency;

@end
