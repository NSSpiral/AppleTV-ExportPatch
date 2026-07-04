/* Runtime dump - WMSectionContentMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WMSectionContentMapper : CMMapper
{
    WDText * wdText;
}

- (void)mapAt:(NSObject *)arg0 withState:(NSObject *)arg1;
- (WMSectionContentMapper *)initWithWDText:(NSString *)arg0 parent:(NSObject *)arg1;
- (void)updateTextFrameState:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (void)mapTextFrameAt:(id)arg0 withState:(NSObject *)arg1;
- (NSObject *)paragraphAtIndex:(unsigned int)arg0;
- (void)mapTextFrameStyleTo:(id)arg0 withState:(NSObject *)arg1;

@end
