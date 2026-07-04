/* Runtime dump - ATVFeedItemDetailWithImageHeaderController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedItemDetailControllerTemplate.h>

@class ATVItemDetailWithImageHeaderView, BRScrollControl;
@interface ATVFeedItemDetailWithImageHeaderController : ATVFeedItemDetailControllerTemplate
{
    ATVItemDetailWithImageHeaderView * _itemDetailView;
    BRScrollControl * _scrollControl;
}

@property (retain, nonatomic) ATVItemDetailWithImageHeaderView * itemDetailView;
@property (retain, nonatomic) BRScrollControl * scrollControl;

- (BRScrollControl *)scrollControl;
- (void)setScrollControl:(BRScrollControl *)arg0;
- (void)_configureLinesLayer;
- (CALayer *)_linesLayer;
- (id)_labelValueViews;
- (id)_labelTitleViews;
- (void)_initViewWithData:(NSData *)arg0;
- (void)_updateViewWithData:(NSData *)arg0 loadType:(int)arg1;
- (float)_maxTableWidth;
- (NSObject *)_viewForTableCell:(NSObject *)arg0 columnDefinitionData:(NSData *)arg1 columnWidth:(float)arg2 wrapControlForAlignment:(char *)arg3;
- (NSString *)_viewForTableColumnHeader:(NSString *)arg0 columnWidth:(float)arg1;
- (char)_supportsViewDisplayMode:(int)arg0;
- (ATVItemDetailWithImageHeaderView *)itemDetailView;
- (void)setItemDetailView:(ATVItemDetailWithImageHeaderView *)arg0;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (void)willMoveToSuperview:(UIView *)arg0;
- (NSObject *)_tableView;
- (void).cxx_destruct;
- (void)setDisplayMode:(int)arg0;

@end
