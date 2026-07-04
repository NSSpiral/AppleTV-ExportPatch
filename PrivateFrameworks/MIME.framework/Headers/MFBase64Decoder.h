/* Runtime dump - MFBase64Decoder
 * Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFBase64Decoder : MFBaseFilterDataConsumer
{
    NSMutableData * _leftovers;
    unsigned int _decodedBits;
    unsigned long _validBytes;
    unsigned long _equalCount;
    char * _table;
    char _bound;
}

@property (nonatomic) char convertCommas;
@property (nonatomic) char isBound;
@property (readonly, nonatomic) unsigned long unconverted;

+ (char)isValidBase64:(id)arg0;

- (void)dealloc;
- (void)done;
- (int)appendData:(NSData *)arg0;
- (void)setConvertCommas:(char)arg0;
- (void)setIsBound:(char)arg0;
- (unsigned long)unconverted;
- (char)convertCommas;
- (unsigned long)_decodeBytes:(char *)arg0 end:(char *)arg1 into:(char *)arg2 length:(unsigned long)arg3 startingAt:(unsigned long)arg4 outEncodedOffset:(unsigned int *)arg5;
- (char)isBound;
- (MFBase64Decoder *)initWithConsumers:(NSArray *)arg0;

@end
