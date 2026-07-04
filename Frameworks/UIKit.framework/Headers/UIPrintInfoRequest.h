/* Runtime dump - UIPrintInfoRequest
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrintInfoRequest : NSObject
{
    PKPrinter * _printer;
    int _requestState;
    id _completionHandler;
}

@property (nonatomic) int requestState;
@property (copy, nonatomic) id completionHandler;

+ (UIPrintInfoRequest *)requestInfoForPrinter:(id)arg0;

- (void)dealloc;
- (id /* block */)completionHandler;
- (void)requestPrintInfo;
- (int)requestState;
- (void)setRequestState:(int)arg0;
- (void)setCompletionHandler:(id /* block */)arg0;

@end
