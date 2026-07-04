/* Runtime dump - UIPDFViewManager
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFViewManager : NSObject
{
    UIView * _activeView;
}

+ (UIPDFViewManager *)sharedViewManager;

- (void)makeViewActive:(id)arg0;
- (void)viewReleased:(id)arg0;

@end
