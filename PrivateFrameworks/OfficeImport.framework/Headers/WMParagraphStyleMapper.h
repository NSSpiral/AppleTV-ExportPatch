/* Runtime dump - WMParagraphStyleMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WMParagraphStyleMapper : CMMapper
{
    WDParagraphProperties * wdParaProperties;
    WDParagraph * wdParagraph;
    WMParagraphStyle * mStyle;
}

- (void)dealloc;
- (void)mapAt:(NSObject *)arg0 withState:(NSObject *)arg1;
- (WMParagraphStyleMapper *)initWithWDParagraph:(WDParagraph *)arg0 parent:(NSObject *)arg1 isInTextFrame:(char)arg2;
- (char)isListItem;
- (void)mapListStyleAt:(id)arg0 state:(NSObject *)arg1;
- (void)destyleEmptyParagraph;
- (BOOL)checkListId:(long)arg0 level:(unsigned char)arg1;
- (void)mapBulletAt:(id)arg0 forLevel:(WXListLevel *)arg1 forIndex:(int)arg2 listState:(NSObject *)arg3;
- (id)bulletLabelAtLevel:(id)arg0 forIndex:(int)arg1 bulletFormat:(int)arg2 listState:(NSObject *)arg3;
- (id)labelStringWithGap:(UITableViewUpdateGap *)arg0;

@end
