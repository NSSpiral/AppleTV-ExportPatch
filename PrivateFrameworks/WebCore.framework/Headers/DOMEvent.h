/* Runtime dump - DOMEvent
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMEvent : DOMObject

@property (readonly, copy) NSString * type;
@property (readonly) <DOMEventTarget> * target;
@property (readonly) <DOMEventTarget> * currentTarget;
@property (readonly) unsigned short eventPhase;
@property (readonly) char bubbles;
@property (readonly) char cancelable;
@property (readonly) unsigned long long timeStamp;
@property (readonly) <DOMEventTarget> * srcElement;
@property char returnValue;
@property char cancelBubble;

- (void)dealloc;
- (NSString *)type;
- (<DOMEventTarget> *)target;
- (void)setReturnValue:(char)arg0;
- (unsigned long long)timeStamp;
- (void)finalize;
- (<DOMEventTarget> *)currentTarget;
- (unsigned short)eventPhase;
- (char)bubbles;
- (char)cancelable;
- (char)defaultPrevented;
- (<DOMEventTarget> *)srcElement;
- (char)returnValue;
- (char)cancelBubble;
- (void)setCancelBubble:(char)arg0;
- (void)stopPropagation;
- (void)preventDefault;
- (void)initEvent:(NSObject *)arg0 canBubbleArg:(char)arg1 cancelableArg:(char)arg2;
- (void)initEvent:(NSObject *)arg0 :(char)arg1 :(char)arg2;
- (void)stopImmediatePropagation;

@end
