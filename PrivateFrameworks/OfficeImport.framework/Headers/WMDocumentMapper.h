/* Runtime dump - WMDocumentMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WMDocumentMapper : CMMapper <CMMapperRoot>
{
    CMArchiveManager * mArchiver;
    WDDocument * wDom;
    NSString * mFileName;
}

- (NSString *)fileName;
- (float)topMargin;
- (void)dealloc;
- (float)rightMargin;
- (CMArchiveManager *)archiver;
- (OADBlip *)blipAtIndex:(unsigned int)arg0;
- (int)defaultTabWidth;
- (struct CGSize)pageSizeForDevice;
- (struct CGSize)contentSizeForDevice;
- (float)leftMargin;
- (float)headerMargin;
- (float)bottomMargin;
- (NSString *)documentTitle;
- (void)mapDefaultCssStylesAt:(id)arg0;
- (char)hasSessionBreakAtIndex:(unsigned int)arg0;
- (OADStyleMatrix *)styleMatrix;
- (WMDocumentMapper *)initWithWDom:(WDDocument *)arg0 archiver:(NSObject *)arg1;
- (void)mapWithState:(NSObject *)arg0;
- (void)setFileName:(NSString *)arg0;

@end
