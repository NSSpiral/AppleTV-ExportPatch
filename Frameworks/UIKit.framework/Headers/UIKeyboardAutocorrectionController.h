/* Runtime dump - UIKeyboardAutocorrectionController
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardAutocorrectionController : NSObject
{
    TIAutocorrectionList * _autocorrectionList;
    char _needsAutocorrection;
    char _deferredAutocorrection;
    char _requestedAutocorrection;
}

@property (readonly, nonatomic) TIKeyboardCandidate * autocorrection;
@property (retain, nonatomic) TIAutocorrectionList * autocorrectionList;
@property (nonatomic) char needsAutocorrection;
@property (nonatomic) char deferredAutocorrection;
@property (nonatomic) char requestedAutocorrection;

- (void)dealloc;
- (TIKeyboardCandidate *)autocorrection;
- (char)hasAutocorrection;
- (void)clearAutocorrection;
- (void)updateSuggestionViews;
- (void)setAutocorrectionList:(TIAutocorrectionList *)arg0;
- (void)setNeedsAutocorrection;
- (TIAutocorrectionList *)autocorrectionList;
- (char)needsAutocorrection;
- (char)requestedAutocorrection;
- (void)requestAutocorrectionWithExecutionContext:(NSObject *)arg0;
- (void)setNeedsAutocorrection:(char)arg0;
- (char)deferredAutocorrection;
- (void)setDeferredAutocorrection:(char)arg0;
- (void)setRequestedAutocorrection:(char)arg0;

@end
