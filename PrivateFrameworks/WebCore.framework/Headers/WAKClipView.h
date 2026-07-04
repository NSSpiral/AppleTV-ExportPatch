/* Runtime dump - WAKClipView
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WAKClipView : WAKView
{
    char _copiesOnScroll;
    WAKView * _documentView;
}

@property (readonly, nonatomic) WAKView * documentView;
@property (nonatomic) char copiesOnScroll;

- (WAKClipView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (WAKView *)documentView;
- (void)setCopiesOnScroll:(char)arg0;
- (char)copiesOnScroll;
- (struct CGRect)documentVisibleRect;
- (void)_setDocumentView:(NSObject *)arg0;

@end
