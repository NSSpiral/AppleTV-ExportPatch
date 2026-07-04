/* Runtime dump - TSAFunctionBrowserState
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSAFunctionBrowserState : TSPObject
{
    NSMutableArray * mRecentFunctions;
    NSMutableArray * mBackFunctions;
    NSMutableArray * mForwardFunctions;
    int mCurrentFunction;
}

- (TSAFunctionBrowserState *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)p_filterOutUnknownFunctions:(id)arg0;
- (int)back;
- (int)backByAmount:(unsigned int)arg0;
- (int)forwardByAmount:(unsigned int)arg0;
- (id)allBackFunctions;
- (id)allForwardFunctions;
- (int)currentFunction;
- (void)recordNavigationTo:(int)arg0;
- (void)recordRecentFunction:(int)arg0;
- (id)recentFunctions;
- (void)dealloc;
- (TSAFunctionBrowserState *)initWithContext:(TSPObjectContext *)arg0;
- (char)canGoBack;
- (char)canGoForward;
- (int)forward;

@end
