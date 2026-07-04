/* Runtime dump - PLBasebandEurekaMessage
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLBasebandEurekaMessage : PLBasebandMessage
{
    unsigned char _skip;
    struct _PLBasebandEventHeader * _header;
    NSData * _payload;
    struct _PLBasebandSystemSelectionEvent * _ssevent;
    char * _ssaction;
    char * _ssstate;
}

@property (readonly) NSString * eventCodeString;
@property (readonly) unsigned int eventCode;
@property struct _PLBasebandEventHeader * header;
@property (retain) NSData * payload;
@property struct _PLBasebandSystemSelectionEvent * ssevent;
@property char * ssaction;
@property char * ssstate;
@property unsigned char skip;

- (NSData *)payload;
- (PLBasebandEurekaMessage *)initWithData:(NSData *)arg0;
- (void).cxx_destruct;
- (void)setPayload:(NSData *)arg0;
- (void)setHeader:(struct _PLBasebandEventHeader *)arg0;
- (struct _PLBasebandEventHeader *)header;
- (void)parseData:(NSData *)arg0;
- (void)logWithLogger:(PLBBMsg *)arg0;
- (NSString *)payloadString;
- (void)setSkip:(unsigned char)arg0;
- (NSString *)eventCodeString;
- (NSString *)tooShortErrorString;
- (id)eventStringSystemSelection;
- (id)actionStringSystemSelection;
- (id)stateStringSystemSelection;
- (char *)ssaction;
- (id)cellularSystemStringSystemSelection:(char *)arg0;
- (struct _PLBasebandSystemSelectionEvent *)ssevent;
- (NSDictionary *)convertCMCallConnectPayloadToDictionary:(struct _CMCallConnectPayload *)arg0;
- (NSDictionary *)convertCMCallOrigPayloadToDictionary:(struct _CMCallOrigPayload *)arg0;
- (NSDictionary *)convertCMCallConnectV2PayloadToDictionary:(struct _NewCMCallConnectPayload *)arg0;
- (NSDictionary *)convertCMCallOrigV2PayloadToDictionary:(struct _NewCMCallOrigPayload *)arg0;
- (NSString *)cdmaExitString:(char *)arg0;
- (NSString *)stateStringGSM:(char *)arg0;
- (NSString *)stateStringWCDMA:(char *)arg0;
- (id)scanTypeStartWCDMA:(char *)arg0;
- (id)scanTypeStopWCDMA:(char *)arg0;
- (NSString *)stateStringHSDPA:(char *)arg0;
- (NSString *)stateStringHSPAPLUS_DC:(char *)arg0;
- (NSString *)stateStringLTE:(char *)arg0;
- (id)estCauseLTE:(char *)arg0;
- (id)relCauseLTE:(char *)arg0;
- (NSString *)iratStringLTE:(char *)arg0;
- (NSString *)stateStringUTRANL1:(char *)arg0;
- (id)stateStringMotion:(char *)arg0;
- (NSData *)stringForUnknownBytes:(unsigned int)arg0;
- (NSString *)stateStringOOS:(char *)arg0;
- (NSString *)eventStringOOS:(char *)arg0;
- (NSString *)stateStringACC:(char *)arg0;
- (unsigned char)skip;
- (NSString *)eventCodeString:(unsigned int)arg0;
- (char *)ssstate;
- (NSString *)callTypeString:(char *)arg0;
- (unsigned int)eventCode;
- (NSString *)eventStringACC:(char *)arg0;
- (NSString *)stateStringHSUPA:(char *)arg0;
- (NSString *)soCallTypeString:(char *)arg0;
- (id)termStringSystemSelection:(char *)arg0;
- (NSString *)establishmentCauseStringWCDMA:(char *)arg0;
- (NSString *)releaseCauseStringWCDMA:(char *)arg0;
- (id)pagingTypeWCDMA:(char *)arg0;
- (id)pagingCauseWCDMA:(char *)arg0;
- (NSString *)searchPhaseStringPSSI:(char *)arg0;
- (NSString *)ratStringPSSI:(char *)arg0;
- (NSString *)procedureStringPSSI:(char *)arg0;
- (NSString *)iratHOStringLTE:(char *)arg0;
- (NSObject *)smgmmEventType:(char *)arg0;
- (id)cellUpdateCause:(char *)arg0;
- (void)setSsevent:(struct _PLBasebandSystemSelectionEvent *)arg0;
- (void)setSsaction:(char *)arg0;
- (void)setSsstate:(char *)arg0;

@end
