/* Runtime dump - UIWebPaginationInfo
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebPaginationInfo : NSObject
{
    NSObject<WebDocumentView> * _documentView;
    float _scaleFactor;
    struct CGSize _layoutSize;
    NSArray * _pageRects;
    UIWebDocumentView * _webDocumentView;
}

@property (readonly, nonatomic) unsigned int pageCount;
@property (readonly, nonatomic) float lastPageHeight;
@property (retain, nonatomic) UIWebDocumentView * webDocumentView;

- (void)dealloc;
- (NSObject<WebDocumentView> *)documentView;
- (UIWebPaginationInfo *)initWithDocumentView:(NSObject<WebDocumentView> *)arg0 scaleFactor:(float)arg1 layoutSize:(struct CGSize)arg2 pageRects:(NSArray *)arg3;
- (void)setWebDocumentView:(UIWebDocumentView *)arg0;
- (NSArray *)pageRects;
- (float)scaleFactor;
- (struct CGSize)layoutSize;
- (unsigned int)pageCount;
- (float)lastPageHeight;
- (struct CGSize)sizeForPageAtIndex:(int)arg0;
- (UIWebDocumentView *)webDocumentView;

@end
