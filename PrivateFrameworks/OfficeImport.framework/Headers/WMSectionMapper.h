/* Runtime dump - WMSectionMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WMSectionMapper : CMMapper
{
    WDSection * wdSection;
    float mTopMargin;
    float mLeftMargin;
    char mBreakAtStart;
    char mBreakAtEnd;
    char mIsTitlePage;
}

+ (char)isContentEmpty:(id)arg0;

- (float)topMargin;
- (void)setTopMargin:(float)arg0;
- (void)mapAt:(NSObject *)arg0 withState:(NSObject *)arg1;
- (float)leftMargin;
- (WMSectionMapper *)initWithWDSection:(WDSection *)arg0 breakAtStart:(char)arg1 breakAtEnd:(char)arg2 parent:(NSObject *)arg3;
- (void)setLeftMargin:(float)arg0;
- (void)MapSectionStyleAt:(id)arg0;
- (void)mapHeaderAt:(id)arg0 withState:(NSObject *)arg1;
- (void)mapFooterAt:(id)arg0 withState:(NSObject *)arg1;

@end
