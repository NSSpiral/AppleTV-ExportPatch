/* Runtime dump - CalLogBasicTextFormatter
 * Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalLogBasicTextFormatter : NSObject <CalLogFormatter>
{
    char _includeFunction;
    char _includeLevel;
    char _includeLogName;
    char _includeMessage;
    char _includeProcessID;
    char _includeProcessName;
    char _includeMachPort;
    char _includeTimestamp;
    char _includeEnvelopePartNames;
    char _useTinyEnvelopePartNames;
    char _useCompactForm;
    char _usePrettyTimestamp;
    NSDateFormatter * _dateFormatter;
}

@property (nonatomic) char includeFunction;
@property (nonatomic) char includeLevel;
@property (nonatomic) char includeLogName;
@property (nonatomic) char includeMessage;
@property (nonatomic) char includeProcessID;
@property (nonatomic) char includeProcessName;
@property (nonatomic) char includeMachPort;
@property (nonatomic) char includeTimestamp;
@property (nonatomic) char includeEnvelopePartNames;
@property (nonatomic) char useTinyEnvelopePartNames;
@property (nonatomic) char useCompactForm;
@property (nonatomic) char usePrettyTimestamp;
@property (retain, nonatomic) NSDateFormatter * dateFormatter;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSDateFormatter *)dateFormatter;
- (void)setDateFormatter:(NSDateFormatter *)arg0;
- (CalLogBasicTextFormatter *)init;
- (void).cxx_destruct;
- (NSString *)newFormattedString:(NSString *)arg0;
- (void)setIncludeTimestamp:(char)arg0;
- (void)setIncludeLogName:(char)arg0;
- (void)setIncludeProcessName:(char)arg0;
- (void)setIncludeMessage:(char)arg0;
- (void)setIncludeEnvelopePartNames:(char)arg0;
- (void)setUsePrettyTimestamp:(char)arg0;
- (char)includeEnvelopePartNames;
- (char)useTinyEnvelopePartNames;
- (char)useCompactForm;
- (char)includeTimestamp;
- (char)usePrettyTimestamp;
- (char)includeLogName;
- (char)includeLevel;
- (char)includeProcessName;
- (char)includeProcessID;
- (char)includeMachPort;
- (char)includeFunction;
- (char)includeMessage;
- (void)setIncludeFunction:(char)arg0;
- (void)setIncludeLevel:(char)arg0;
- (void)setIncludeProcessID:(char)arg0;
- (void)setIncludeMachPort:(char)arg0;
- (void)setUseTinyEnvelopePartNames:(char)arg0;
- (void)setUseCompactForm:(char)arg0;

@end
