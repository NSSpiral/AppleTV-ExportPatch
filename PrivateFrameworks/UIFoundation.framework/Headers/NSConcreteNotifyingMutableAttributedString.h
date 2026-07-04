/* Runtime dump - NSConcreteNotifyingMutableAttributedString
 * Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSConcreteNotifyingMutableAttributedString : NSConcreteMutableAttributedString
{
    id _delegate;
}

+ (Class)_mutableStringClass;

- (void)edited:(unsigned int)arg0 range:(struct _NSRange)arg1 changeInLength:(int)arg2;
- (void)setDelegate:(NSObject *)arg0;
- (NSObject *)delegate;
- (void)beginEditing;
- (void)endEditing;

@end
