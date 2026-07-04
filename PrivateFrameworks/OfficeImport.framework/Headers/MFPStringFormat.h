/* Runtime dump - MFPStringFormat
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPStringFormat : NSObject
{
    int mAlignment;
    unsigned short mDigitSubstitutionLanguage;
    int mDigitSubstitutionMethod;
    unsigned int mFormatFlags;
    int mHotkeyPrefix;
    int mLineAlignment;
    float mFirstTabOffset;
    int mTabStopCount;
    float * mTabStops;
    int mTrimming;
}

- (void)setAlignment:(int)arg0;
- (void)dealloc;
- (MFPStringFormat *)init;
- (int)alignment;
- (int)tabStopCount;
- (void)setFormatFlags:(unsigned int)arg0;
- (void)setLineAlignment:(int)arg0;
- (void)setDigitSubstitutionLanguage:(unsigned short)arg0;
- (void)setDigitSubstitutionMethod:(int)arg0;
- (void)setFirstTabOffset:(float)arg0;
- (void)setHotkeyPrefix:(int)arg0;
- (void)setTrimming:(int)arg0;
- (void)setTabStops:(float *)arg0 count:(float)arg1;
- (float)firstTabOffset;
- (unsigned int)formatFlags;
- (int)lineAlignment;
- (int)trimming;
- (unsigned short)digitSubstitutionLanguage;
- (int)digitSubstitutionMethod;
- (int)hotkeyPrefix;
- (float *)tabStops;

@end
