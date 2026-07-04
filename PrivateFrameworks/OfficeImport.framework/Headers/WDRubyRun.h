/* Runtime dump - WDRubyRun
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDRubyRun : WDCharacterRun
{
    WDCharacterRun * mPhoneticRun;
    WDRubyProperties * mRubyProperties;
}

- (void)dealloc;
- (int)runType;
- (WDRubyRun *)initWithParagraph:(CPParagraph *)arg0;
- (NSDictionary *)rubyProperties;
- (id)phoneticRun;
- (NSString *)phoneticRunString;
- (void)setPhoneticRunString:(NSString *)arg0;
- (void)appendPhoneticRunString:(NSString *)arg0;
- (id)rubyBase;

@end
