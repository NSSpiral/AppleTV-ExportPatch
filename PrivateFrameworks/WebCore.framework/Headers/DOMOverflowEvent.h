/* Runtime dump - DOMOverflowEvent
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMOverflowEvent : DOMEvent

@property (readonly) unsigned short orient;
@property (readonly) char horizontalOverflow;
@property (readonly) char verticalOverflow;

- (unsigned short)orient;
- (char)horizontalOverflow;
- (char)verticalOverflow;
- (void)initOverflowEvent:(unsigned short)arg0 horizontalOverflow:(char)arg1 verticalOverflow:(char)arg2;

@end
