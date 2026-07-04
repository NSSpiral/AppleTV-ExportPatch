/* Runtime dump - WDRun
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDRun : NSObject
{
    WDParagraph * mParagraph;
}

- (void)clearProperties;
- (void)dealloc;
- (WDRun *)init;
- (char)isEmpty;
- (CPParagraph *)paragraph;
- (int)runType;
- (WDRun *)initWithParagraph:(CPParagraph *)arg0;

@end
