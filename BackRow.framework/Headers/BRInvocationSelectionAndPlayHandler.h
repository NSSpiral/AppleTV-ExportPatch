/* Runtime dump - BRInvocationSelectionAndPlayHandler
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRInvocationSelectionHandler.h>

@class BRControl;
@interface BRInvocationSelectionAndPlayHandler : BRInvocationSelectionHandler
{
    NSInvocation * _playInvocation;
}

+ (NSObject *)handlerWithTarget:(NSObject *)arg0 selectionSelector:(SEL)arg1 playSelector:(SEL)arg2;
+ (NSObject *)handlerWithSelectionInvocation:(int)arg0 playInvocation:(NSInvocation *)arg1;

- (char)handlePlayForControl:(BRControl *)arg0;
- (BRInvocationSelectionAndPlayHandler *)initWithSelectionInvocation:(int)arg0 playInvocation:(NSInvocation *)arg1;
- (void)dealloc;

@end
