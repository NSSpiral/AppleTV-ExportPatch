/* Runtime dump - CAMHDRButton
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMHDRButton : CAMExpandableMenuButton
{
    char _allowsAutomaticHDR;
    CAMButtonLabel * __headerLabel;
}

@property (nonatomic) int HDRMode;
@property (nonatomic) char allowsAutomaticHDR;
@property (readonly, nonatomic) CAMButtonLabel * _headerLabel;

- (void)setHDRMode:(int)arg0;
- (int)HDRMode;
- (void)reloadData;
- (UIView *)headerView;
- (void).cxx_destruct;
- (void)updateToContentSize:(NSObject *)arg0;
- (CAMHDRButton *)initWithExpansionOrientation:(int)arg0;
- (int)numberOfMenuItems;
- (NSObject *)titleForMenuItemAtIndex:(int)arg0;
- (NSIndexSet *)hiddenIndexesWhileCollapsed;
- (void)setAllowsAutomaticHDR:(char)arg0;
- (void)_commonCAMHDRButtonInitialization;
- (int)modeForIndex:(int)arg0;
- (int)indexForMode:(int)arg0;
- (char)allowsAutomaticHDR;
- (CAMButtonLabel *)_headerLabel;

@end
