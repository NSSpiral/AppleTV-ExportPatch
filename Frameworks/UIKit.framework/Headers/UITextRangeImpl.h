/* Runtime dump - UITextRangeImpl
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextRangeImpl : UITextRange
{
    DOMRange * _domRange;
    int _affinityIfCollapsed;
}

@property (retain, nonatomic) DOMRange * domRange;
@property (nonatomic) int affinity;

+ (NSObject *)wrapDOMRange:(NSObject *)arg0 withAffinity:(int)arg1;
+ (NSObject *)wrapDOMRange:(NSObject *)arg0;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (char)isEmpty;
- (struct CGPoint)start;
- (struct CGPoint)end;
- (int)affinity;
- (DOMRange *)domRange;
- (void)setDomRange:(DOMRange *)arg0;
- (void)setAffinity:(int)arg0;
- (void)adjustAffinityOfPosition:(NSObject *)arg0 isStart:(char)arg1;

@end
