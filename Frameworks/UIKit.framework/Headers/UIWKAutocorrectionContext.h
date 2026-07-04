/* Runtime dump - UIWKAutocorrectionContext
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWKAutocorrectionContext : NSObject
{
    NSString * _contextBeforeSelection;
    NSString * _selectedText;
    NSString * _contextAfterSelection;
    NSString * _markedText;
    struct _NSRange _rangeInMarkedText;
}

@property (copy, nonatomic) NSString * contextBeforeSelection;
@property (copy, nonatomic) NSString * selectedText;
@property (copy, nonatomic) NSString * contextAfterSelection;
@property (copy, nonatomic) NSString * markedText;
@property (nonatomic) struct _NSRange rangeInMarkedText;

- (void)dealloc;
- (NSString *)selectedText;
- (NSString *)markedText;
- (NSString *)contextBeforeSelection;
- (NSString *)contextAfterSelection;
- (struct _NSRange)rangeInMarkedText;
- (void)setSelectedText:(NSString *)arg0;
- (void)setContextBeforeSelection:(NSString *)arg0;
- (void)setContextAfterSelection:(NSString *)arg0;
- (void)setMarkedText:(NSString *)arg0;
- (void)setRangeInMarkedText:(struct _NSRange)arg0;

@end
