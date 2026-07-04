/* Runtime dump - WDFormField
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDFormField : WDRun
{
    unsigned int mPosition;
    char mLinkAbsolute;
    char mLinkSpecifyingNamedLocation;
    NSString * mNamedLocation;
    NSString * mURI;
    NSString * mMacName;
    NSString * mDosName;
}

- (void)setURI:(NSSet *)arg0;
- (NSString *)URI;
- (void)dealloc;
- (void)setPosition:(unsigned int)arg0;
- (unsigned int)position;
- (int)runType;
- (WDFormField *)initWithParagraph:(CPParagraph *)arg0;
- (char)linkAbsolute;
- (void)setLinkAbsolute:(char)arg0;
- (char)linkSpecifyingNamedLocation;
- (void)setLinkSpecifyingNamedLocation:(char)arg0;
- (NSObject *)namedLocation;
- (void)setNamedLocation:(NSObject *)arg0;
- (NSString *)macName;
- (void)setMacName:(NSString *)arg0;
- (NSString *)dosName;
- (void)setDosName:(NSString *)arg0;

@end
