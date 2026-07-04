/* Runtime dump - EDPane
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDPane : NSObject
{
    double mXSplitPosition;
    double mYSplitPosition;
    EDReference * mTopLeftCell;
    int mActivePane;
    int mPaneState;
}

+ (PSEditingPane *)pane;

- (void)dealloc;
- (EDPane *)init;
- (int)activePane;
- (double)xSplitPosition;
- (double)ySplitPosition;
- (NSObject *)topLeftCell;
- (int)paneState;
- (void)setTopLeftCell:(NSObject *)arg0;
- (void)setXSplitPosition:(double)arg0;
- (void)setYSplitPosition:(double)arg0;
- (void)setActivePane:(int)arg0;
- (void)setPaneState:(int)arg0;

@end
