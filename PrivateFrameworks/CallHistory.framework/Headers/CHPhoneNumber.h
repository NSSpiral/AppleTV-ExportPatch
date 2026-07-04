/* Runtime dump - CHPhoneNumber
 * Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface CHPhoneNumber : CHLogger
{
    char _formatted;
    NSString * _originalPhoneNumber;
    NSString * _ISOCountryCode;
    NSString * _formattedPhoneNumber;
}

@property (copy) NSString * originalPhoneNumber;
@property (copy) NSString * ISOCountryCode;
@property char formatted;
@property (copy) NSString * formattedPhoneNumber;

- (NSString *)ISOCountryCode;
- (void)setISOCountryCode:(id)arg0;
- (void).cxx_destruct;
- (char)formatted;
- (NSString *)originalPhoneNumber;
- (void)setFormattedPhoneNumber:(NSString *)arg0;
- (void)setFormatted:(char)arg0;
- (CHPhoneNumber *)initWithPhoneNumber:(SAPhone *)arg0 andISOCountryCode:(id)arg1;
- (NSNumber *)formattedNumber;
- (void)setOriginalPhoneNumber:(NSString *)arg0;
- (NSString *)formattedPhoneNumber;

@end
