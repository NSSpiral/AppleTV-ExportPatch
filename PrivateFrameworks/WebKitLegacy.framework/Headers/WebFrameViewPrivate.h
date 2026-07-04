/* Runtime dump - WebFrameViewPrivate
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebFrameViewPrivate : NSObject
{
    WebFrame * webFrame;
    WAKScrollView * frameScrollView;
    char includedInWebKitStatistics;
}

- (void)dealloc;

@end
