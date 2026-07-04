/* Runtime dump - UIRemoteSheetInfo
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIRemoteSheetInfo : NSObject
{
    UIView * _sheetView;
    UISpringBoardHostedView * _remoteView;
    id _delegate;
    SEL _selector;
    void * _context;
    int _returnCode;
}

@property (retain, nonatomic) UIView * sheetView;
@property (retain, nonatomic) UISpringBoardHostedView * remoteView;
@property (nonatomic) id delegate;
@property (nonatomic) SEL selector;
@property (nonatomic) void * context;
@property (nonatomic) int returnCode;

- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (NSObject *)delegate;
- (void)setSelector:(SEL)arg0;
- (SEL)selector;
- (void *)context;
- (void)setContext:(void *)arg0;
- (void)setSheetView:(UIView *)arg0;
- (void)setRemoteView:(UISpringBoardHostedView *)arg0;
- (UIView *)sheetView;
- (void)setReturnCode:(int)arg0;
- (UISpringBoardHostedView *)remoteView;
- (int)returnCode;

@end
