/* Runtime dump - CUIRenditionMetrics
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIRenditionMetrics : NSObject
{
    struct CGSize _imageSize;
    struct CGSize _edgeBottomLeftMargin;
    struct CGSize _edgeTopRightMargin;
    struct CGSize _contentBottomLeftMargin;
    struct CGSize _contentTopRightMargin;
    float _baseline;
    float _scale;
    struct crmFlags _crmFlags;
}

- (float)scale;
- (struct CGSize)imageSize;
- (struct CGRect)contentRect;
- (CUIRenditionMetrics *)initWithImageSize:(struct CGSize)arg0 edgeBottomLeft:(struct CGSize)arg1 edgeTopRight:(struct CGSize)arg2 contentBottomLeft:(struct CGSize)arg3 contentTopRight:(struct CGSize)arg4 baseline:(float)arg5 scalesVertically:(char)arg6 scalesHorizontally:(char)arg7 scale:(float)arg8;
- (struct CGSize)edgeBottomLeftMargin;
- (struct CGSize)edgeTopRightMargin;
- (struct CGSize)contentBottomLeftMargin;
- (struct CGSize)contentTopRightMargin;
- (char)scalesVertically;
- (char)scalesHorizontally;
- (struct CGRect)edgeRect;
- (struct CGRect)insetRectWithMetrics:(id)arg0;
- (struct CGRect)insetContentRectWithMetrics:(id)arg0;
- (char)hasOpaqueContentBounds;
- (char)hasAlignmentEdgeMargins;
- (float)baseline;

@end
