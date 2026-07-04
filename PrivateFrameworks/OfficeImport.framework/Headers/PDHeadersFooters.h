/* Runtime dump - PDHeadersFooters
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDHeadersFooters : NSObject
{
    char mHasDateTime;
    char mHasNowDateTime;
    char mHasUserDateTime;
    char mHasSlideNumber;
    char mHasHeader;
    char mHasFooter;
    int mDateTimeFormat;
    NSString * mUserDateTime;
    NSString * mHeader;
    NSString * mFooter;
}

- (void)dealloc;
- (void)setHeader:(NSString *)arg0;
- (char)hasHeader;
- (NSString *)header;
- (char)hasDateTime;
- (void)setHasDateTime:(char)arg0;
- (char)hasNowDateTime;
- (void)setHasNowDateTime:(char)arg0;
- (char)hasUserDateTime;
- (void)setHasUserDateTime:(char)arg0;
- (char)hasSlideNumber;
- (void)setHasSlideNumber:(char)arg0;
- (void)setHasHeader:(char)arg0;
- (char)hasFooter;
- (void)setHasFooter:(char)arg0;
- (id)userDateTime;
- (void)setUserDateTime:(id)arg0;
- (NSString *)footer;
- (void)setFooter:(RemoteUISectionFooter *)arg0;

@end
