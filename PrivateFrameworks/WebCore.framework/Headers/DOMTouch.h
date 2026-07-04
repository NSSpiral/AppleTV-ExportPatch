/* Runtime dump - DOMTouch
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMTouch : DOMObject

@property (readonly) <DOMEventTarget> * target;
@property (readonly) unsigned int identifier;
@property (readonly) int clientX;
@property (readonly) int clientY;
@property (readonly) int pageX;
@property (readonly) int pageY;
@property (readonly) int screenX;
@property (readonly) int screenY;

- (void)dealloc;
- (unsigned int)identifier;
- (<DOMEventTarget> *)target;
- (void)finalize;
- (int)screenX;
- (int)screenY;
- (int)clientX;
- (int)clientY;
- (int)pageX;
- (int)pageY;

@end
