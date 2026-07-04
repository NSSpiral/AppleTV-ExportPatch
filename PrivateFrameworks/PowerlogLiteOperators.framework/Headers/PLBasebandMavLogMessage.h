/* Runtime dump - PLBasebandMavLogMessage
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLBasebandMavLogMessage : PLBasebandMessage
{
    struct _PLBasebandLogHeader * _header;
    NSData * _payload;
}

@property (readonly) NSString * eventCodeString;
@property (readonly) unsigned int eventCode;
@property struct _PLBasebandLogHeader * header;
@property (retain) NSData * payload;

- (NSData *)payload;
- (PLBasebandMavLogMessage *)initWithData:(NSData *)arg0;
- (void).cxx_destruct;
- (void)setPayload:(NSData *)arg0;
- (void)setHeader:(struct _PLBasebandLogHeader *)arg0;
- (struct _PLBasebandLogHeader *)header;
- (void)parseData:(NSData *)arg0;
- (void)logWithLogger:(PLBBMsg *)arg0;
- (NSString *)eventCodeString;
- (NSString *)tooShortErrorString;
- (NSData *)stringForUnknownBytes:(unsigned int)arg0;
- (NSString *)eventCodeString:(unsigned int)arg0;
- (unsigned int)eventCode;

@end
