/* Runtime dump - WMParagraphMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WMParagraphMapper : CMMapper
{
    WDParagraph * wdParagraph;
    WMParagraphMapper * mCurrentMapper;
    OIXMLElement * mActiveNode;
    char mIsDeleted;
}

+ (void)mapPlaceholderAt:(id)arg0 rect:(struct CGRect)arg1 withState:(struct CGSize)arg2;

- (void)dealloc;
- (void)mapAt:(NSObject *)arg0 withState:(NSObject *)arg1;
- (NSObject *)activeNode;
- (void)mapRunAt:(id)arg0 run:(id)arg1 withState:(NSObject *)arg2;
- (void)mapFieldMarkerAt:(id)arg0 marker:(VKAnnotationMarker *)arg1 withState:(NSObject *)arg2;
- (NSObject *)runAtIndex:(unsigned int)arg0;
- (char)isTextFrame;
- (char)containsOfficeArt;
- (void)mapParagraphBodyWithState:(NSObject *)arg0;
- (char)isCollapsable:(id)arg0;
- (WMParagraphMapper *)initWithBlock:(id /* block */)arg0 parent:(NSObject *)arg1;

@end
