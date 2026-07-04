/* Runtime dump - DOMValidityState
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMValidityState : DOMObject

@property (readonly) char valueMissing;
@property (readonly) char typeMismatch;
@property (readonly) char patternMismatch;
@property (readonly) char tooLong;
@property (readonly) char rangeUnderflow;
@property (readonly) char rangeOverflow;
@property (readonly) char stepMismatch;
@property (readonly) char badInput;
@property (readonly) char customError;
@property (readonly) char valid;

- (void)dealloc;
- (char)valid;
- (void)finalize;
- (char)valueMissing;
- (char)typeMismatch;
- (char)patternMismatch;
- (char)tooLong;
- (char)rangeUnderflow;
- (char)rangeOverflow;
- (char)stepMismatch;
- (char)badInput;
- (char)customError;

@end
