/* Runtime dump - UITextInputStringTokenizer
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextInputStringTokenizer : NSObject <UITextInputTokenizer>
{
    UIResponder<UITextInput> * _textInput;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSObject *)rangeEnclosingPosition:(NSObject *)arg0 withGranularity:(int)arg1 inDirection:(int)arg2;
- (char)isPosition:(NSObject *)arg0 atBoundary:(int)arg1 inDirection:(int)arg2;
- (NSObject *)positionFromPosition:(NSObject *)arg0 toBoundary:(int)arg1 inDirection:(int)arg2;
- (char)isPosition:(NSObject *)arg0 withinTextUnit:(int)arg1 inDirection:(int)arg2;
- (int)_indexForTextPosition:(NSObject *)arg0;
- (char)_isDownstreamForDirection:(int)arg0 atPosition:(struct CGPoint)arg1;
- (struct _NSRange)_getClosestTokenRangeForPosition:(NSObject *)arg0 granularity:(int)arg1 downstream:(char)arg2;
- (NSObject *)_positionFromPosition:(NSObject *)arg0 offset:(unsigned int)arg1 affinity:(int)arg2;
- (UITextInputStringTokenizer *)initWithTextInput:(UIResponder<UITextInput> *)arg0;

@end
